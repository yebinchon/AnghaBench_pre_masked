
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;

void FUNC_1(void)
{
 FUNC_0(0, "", "");
 FUNC_0(0, "", "bar.txt");
 FUNC_0(0, "foo.txt", "bar.txt");
 FUNC_0(0, "foo.txt", "");
 FUNC_0(0, "foo/bar.txt", "bar/foo.txt");
 FUNC_0(0, "foo/bar.txt", "../foo.txt");

 FUNC_0(1, "/one.txt", "/two.txt");
 FUNC_0(4, "foo/one.txt", "foo/two.txt");
 FUNC_0(5, "/foo/one.txt", "/foo/two.txt");

 FUNC_0(6, "a/b/c/foo.txt", "a/b/c/d/e/bar.txt");
 FUNC_0(7, "/a/b/c/foo.txt", "/a/b/c/d/e/bar.txt");
}
