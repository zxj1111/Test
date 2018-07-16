// Test00.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Test00.h"
#include <iostream>

using namespace std;

int main()
{
	Test00 te;
	cout << "1+2=" << te.add(1, 2) << endl;
	cout << "2-1=" << te.sub(2, 1) << endl;
	cout << "4-2=" << te.sub(4, 2) << endl;
    return 0;
}

