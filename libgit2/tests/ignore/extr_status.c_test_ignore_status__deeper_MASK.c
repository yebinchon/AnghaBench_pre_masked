
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
 const char *VAR_0[] = {
  "empty_standard_repo/foo.data",
  "empty_standard_repo/bar.data",
  "empty_standard_repo/dont_ignore/foo.data",
  "empty_standard_repo/dont_ignore/bar.data",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1("empty_standard_repo/.gitignore",
  "*.data\n"
  "!dont_ignore/*.data\n");

 FUNC_0("foo.data");
 FUNC_0("bar.data");

 FUNC_3("dont_ignore/foo.data");
 FUNC_3("dont_ignore/bar.data");
}
