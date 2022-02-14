
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
  "empty_standard_repo/file",
  "empty_standard_repo/subdir/file",
  "empty_standard_repo/subdir/sub2/sub3/file",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/subdir/.gitignore", "/**/*\n");

 FUNC_3("file");
 FUNC_0("subdir/sub2/sub3/file");
 FUNC_0("subdir/file");
}
