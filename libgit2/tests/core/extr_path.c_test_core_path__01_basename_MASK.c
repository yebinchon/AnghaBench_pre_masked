
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(void)
{
 FUNC_2(((void*)0), ".");
 FUNC_2("", ".");
 FUNC_2("a", "a");
 FUNC_2("/", "/");
 FUNC_2("/usr", "usr");
 FUNC_2("/usr/", "usr");
 FUNC_2("/usr/lib", "lib");
 FUNC_2("/usr/lib//", "lib");
 FUNC_2("usr/lib", "lib");

 FUNC_2(FUNC_1("/abc"), "abc");
 FUNC_2(FUNC_0("/abc"), "abc");
}
