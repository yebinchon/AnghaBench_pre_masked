
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("foo/baz/bar", "foo*bar", 0, 0, 1, 1);
 FUNC_0("foo/baz/bar", "foo**bar", 0, 0, 1, 1);
 FUNC_0("foobazbar", "foo**bar", 1, 1, 1, 1);
 FUNC_0("foo/baz/bar", "foo/**/bar", 1, 1, 1, 1);
 FUNC_0("foo/baz/bar", "foo/**/**/bar", 1, 1, 0, 0);
 FUNC_0("foo/b/a/z/bar", "foo/**/bar", 1, 1, 1, 1);
 FUNC_0("foo/b/a/z/bar", "foo/**/**/bar", 1, 1, 1, 1);
 FUNC_0("foo/bar", "foo/**/bar", 1, 1, 0, 0);
 FUNC_0("foo/bar", "foo/**/**/bar", 1, 1, 0, 0);
 FUNC_0("foo/bar", "foo?bar", 0, 0, 1, 1);
 FUNC_0("foo/bar", "foo[/]bar", 0, 0, 1, 1);
 FUNC_0("foo/bar", "foo[^a-z]bar", 0, 0, 1, 1);
 FUNC_0("foo/bar", "f[^eiu][^eiu][^eiu][^eiu][^eiu]r", 0, 0, 1, 1);
 FUNC_0("foo-bar", "f[^eiu][^eiu][^eiu][^eiu][^eiu]r", 1, 1, 1, 1);
 FUNC_0("foo", "**/foo", 1, 1, 0, 0);
 FUNC_0("XXX/foo", "**/foo", 1, 1, 1, 1);
 FUNC_0("bar/baz/foo", "**/foo", 1, 1, 1, 1);
 FUNC_0("bar/baz/foo", "*/foo", 0, 0, 1, 1);
 FUNC_0("foo/bar/baz", "**/bar*", 0, 0, 1, 1);
 FUNC_0("deep/foo/bar/baz", "**/bar/*", 1, 1, 1, 1);
 FUNC_0("deep/foo/bar/baz/", "**/bar/*", 0, 0, 1, 1);
 FUNC_0("deep/foo/bar/baz/", "**/bar/**", 1, 1, 1, 1);
 FUNC_0("deep/foo/bar", "**/bar/*", 0, 0, 0, 0);
 FUNC_0("deep/foo/bar/", "**/bar/**", 1, 1, 1, 1);
 FUNC_0("foo/bar/baz", "**/bar**", 0, 0, 1, 1);
 FUNC_0("foo/bar/baz/x", "*/bar/**", 1, 1, 1, 1);
 FUNC_0("deep/foo/bar/baz/x", "*/bar/**", 0, 0, 1, 1);
 FUNC_0("deep/foo/bar/baz/x", "**/bar/*/*", 1, 1, 1, 1);
}
