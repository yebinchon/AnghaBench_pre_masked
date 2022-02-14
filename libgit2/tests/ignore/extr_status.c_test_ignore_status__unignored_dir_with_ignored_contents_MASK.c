
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const**) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 static const char *VAR_0[] = {
  "empty_standard_repo/dir/a.test",
  "empty_standard_repo/dir/subdir/a.test",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  "*.test\n"
  "!dir/*\n");

 FUNC_3("dir/a.test");
 FUNC_0("dir/subdir/a.test");
}
