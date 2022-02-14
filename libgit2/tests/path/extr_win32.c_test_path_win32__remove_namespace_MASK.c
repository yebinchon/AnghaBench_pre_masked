
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0(L"\\\\?\\C:\\Temp\\Foo", L"C:\\Temp\\Foo");
 FUNC_0(L"\\\\?\\C:\\", L"C:\\");
 FUNC_0(L"\\\\?\\", L"");

 FUNC_0(L"\\??\\C:\\Temp\\Foo", L"C:\\Temp\\Foo");
 FUNC_0(L"\\??\\C:\\", L"C:\\");
 FUNC_0(L"\\??\\", L"");

 FUNC_0(L"\\\\?\\UNC\\server\\C$\\folder", L"\\\\server\\C$\\folder");
 FUNC_0(L"\\\\?\\UNC\\server\\C$\\folder", L"\\\\server\\C$\\folder");
 FUNC_0(L"\\\\?\\UNC\\server\\C$", L"\\\\server\\C$");
 FUNC_0(L"\\\\?\\UNC\\server\\", L"\\\\server");
 FUNC_0(L"\\\\?\\UNC\\server", L"\\\\server");

 FUNC_0(L"\\??\\UNC\\server\\C$\\folder", L"\\\\server\\C$\\folder");
 FUNC_0(L"\\??\\UNC\\server\\C$\\folder", L"\\\\server\\C$\\folder");
 FUNC_0(L"\\??\\UNC\\server\\C$", L"\\\\server\\C$");
 FUNC_0(L"\\??\\UNC\\server\\", L"\\\\server");
 FUNC_0(L"\\??\\UNC\\server", L"\\\\server");

 FUNC_0(L"\\\\server\\C$\\folder", L"\\\\server\\C$\\folder");
 FUNC_0(L"\\\\server\\C$", L"\\\\server\\C$");
 FUNC_0(L"\\\\server\\", L"\\\\server");
 FUNC_0(L"\\\\server", L"\\\\server");

 FUNC_0(L"C:\\Foo\\Bar", L"C:\\Foo\\Bar");
 FUNC_0(L"C:\\", L"C:\\");
 FUNC_0(L"", L"");

}
