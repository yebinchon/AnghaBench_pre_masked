
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;

void FUNC_3(void)
{
 FUNC_0(".git/", ".git/");
 FUNC_0("/.git/", ".git/");
 FUNC_0("usr/local/.git/", ".git/");
 FUNC_0("./.git/", ".git/");
 FUNC_0("/usr/.git/", ".git/");
 FUNC_0("/", "/");
 FUNC_0("a/", "a/");

 FUNC_1(FUNC_2("/usr/.git") == ((void*)0));
 FUNC_1(FUNC_2(".") == ((void*)0));
 FUNC_1(FUNC_2("") == ((void*)0));
 FUNC_1(FUNC_2("a") == ((void*)0));
}
