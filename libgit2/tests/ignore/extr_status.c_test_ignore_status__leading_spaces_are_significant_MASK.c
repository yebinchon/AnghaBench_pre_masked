
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
  "empty_standard_repo/a.test",
  "empty_standard_repo/b.test",
  "empty_standard_repo/c.test",
  "empty_standard_repo/d.test",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  " a.test\n"
  "# this is a comment\n"
  "b.test\n"
  "\tc.test\n"
  " # not a comment\n"
  "d.test\n");

 FUNC_3("a.test");
 FUNC_0(" a.test");
 FUNC_3("# this is a comment");
 FUNC_0("b.test");
 FUNC_3("c.test");
 FUNC_0("\tc.test");
 FUNC_0(" # not a comment");
 FUNC_0("d.test");
}
