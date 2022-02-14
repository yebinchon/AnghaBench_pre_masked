
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
  "empty_standard_repo/parent/child1/bar.txt",
  "empty_standard_repo/parent/child2/bar.txt",
  "empty_standard_repo/parent/child3/foo.txt",
  "empty_standard_repo/parent/child4/bar.txt",
  "empty_standard_repo/parent/nested/child5/bar.txt",
  "empty_standard_repo/parent/nested/child6/bar.txt",
  "empty_standard_repo/parent/nested/child7/bar.txt",
  "empty_standard_repo/padded_parent/child8/bar.txt",
  ((void*)0)
 };

 FUNC_2("empty_standard_repo", VAR_0);
 FUNC_1(
  "empty_standard_repo/.gitignore",
  "foo.txt\n"
  "parent/child1\n"
  "parent/child2\n"
  "parent/child4\n"
  "parent/nested/child5\n"
  "nested/child6\n"
  "nested/child7\n"
  "padded_parent/child8\n"

  "!parent/child1\n"

  "!parent/child2/bar.txt\n"


  "!parent/child3\n"

  "!child4\n"

  "!nested/child5\n"

  "!nested/child6\n"

  "!child7/\n"

  "!_parent/child8\n");

 FUNC_3("parent/child1/bar.txt");
 FUNC_0("parent/child2/bar.txt");
 FUNC_0("parent/child3/foo.txt");
 FUNC_3("parent/child4/bar.txt");
 FUNC_0("parent/nested/child5/bar.txt");
 FUNC_3("parent/nested/child6/bar.txt");
 FUNC_3("parent/nested/child7/bar.txt");
 FUNC_0("padded_parent/child8/bar.txt");
}
