
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
  "empty_standard_repo/README.md",
  "empty_standard_repo/src/main.c",
  "empty_standard_repo/src/foo/foo.c",
  "empty_standard_repo/dist/foo.o",
  "empty_standard_repo/dist/main.o",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  "/*/\n"
  "!/src\n");

 FUNC_0("dist/foo.o");
 FUNC_0("dist/main.o");

 FUNC_3("README.md");
 FUNC_3("src/foo.c");
 FUNC_3("src/foo/foo.c");
}
