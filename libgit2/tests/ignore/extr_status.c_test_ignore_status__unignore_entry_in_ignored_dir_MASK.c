
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
  "empty_standard_repo/bar.txt",
  "empty_standard_repo/parent/bar.txt",
  "empty_standard_repo/parent/child/bar.txt",
  "empty_standard_repo/nested/parent/child/bar.txt",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  "bar.txt\n"
  "!parent/child/bar.txt\n");

 FUNC_0("bar.txt");
 FUNC_0("parent/bar.txt");
 FUNC_3("parent/child/bar.txt");
 FUNC_0("nested/parent/child/bar.txt");
}
