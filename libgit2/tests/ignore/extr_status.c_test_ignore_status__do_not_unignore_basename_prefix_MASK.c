
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const**) ;

void FUNC_3(void)
{
 static const char *VAR_0[] = {
  "empty_standard_repo/foo_bar.txt",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  "foo_bar.txt\n"
  "!bar.txt\n");

 FUNC_0("foo_bar.txt");
}
