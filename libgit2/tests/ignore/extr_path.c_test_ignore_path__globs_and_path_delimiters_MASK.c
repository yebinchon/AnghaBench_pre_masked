
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_1("attr/.gitignore", "foo/bar/**");
 FUNC_0(1, "foo/bar/baz");
 FUNC_0(1, "foo/bar/baz/quux");

 FUNC_1("attr/.gitignore", "_*/");
 FUNC_0(1, "sub/_test/a/file");
 FUNC_0(0, "test_folder/file");
 FUNC_0(1, "_test/file");
 FUNC_0(1, "_test/a/file");

 FUNC_1("attr/.gitignore", "**/_*/");
 FUNC_0(1, "sub/_test/a/file");
 FUNC_0(0, "test_folder/file");
 FUNC_0(1, "_test/file");
 FUNC_0(1, "_test/a/file");

 FUNC_1("attr/.gitignore", "**/_*/foo/bar/*ux");

 FUNC_0(1, "sub/_test/foo/bar/qux/file");
 FUNC_0(1, "_test/foo/bar/qux/file");
 FUNC_0(1, "_test/foo/bar/crux/file");
 FUNC_0(0, "_test/foo/bar/code/file");
}
