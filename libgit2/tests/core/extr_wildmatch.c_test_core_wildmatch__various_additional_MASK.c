
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("acrt", "a[c-c]st", 0, 0, 0, 0);
 FUNC_0("acrt", "a[c-c]rt", 1, 1, 1, 1);
 FUNC_0("]", "[!]-]", 0, 0, 0, 0);
 FUNC_0("a", "[!]-]", 1, 1, 1, 1);
 FUNC_0("", "\\", 0, 0, 0, 0);
 FUNC_0("\\", "\\", 0, 0, 0, 0);
 FUNC_0("XXX/\\", "*/\\", 0, 0, 0, 0);
 FUNC_0("XXX/\\", "*/\\\\", 1, 1, 1, 1);
 FUNC_0("foo", "foo", 1, 1, 1, 1);
 FUNC_0("@foo", "@foo", 1, 1, 1, 1);
 FUNC_0("foo", "@foo", 0, 0, 0, 0);
 FUNC_0("[ab]", "\\[ab]", 1, 1, 1, 1);
 FUNC_0("[ab]", "[[]ab]", 1, 1, 1, 1);
 FUNC_0("[ab]", "[[:]ab]", 1, 1, 1, 1);
 FUNC_0("[ab]", "[[::]ab]", 0, 0, 0, 0);
 FUNC_0("[ab]", "[[:digit]ab]", 1, 1, 1, 1);
 FUNC_0("[ab]", "[\\[:]ab]", 1, 1, 1, 1);
 FUNC_0("?a?b", "\\??\\?b", 1, 1, 1, 1);
 FUNC_0("abc", "\\a\\b\\c", 1, 1, 1, 1);
 FUNC_0("foo", "", 0, 0, 0, 0);
 FUNC_0("foo/bar/baz/to", "**/t[o]", 1, 1, 1, 1);
}
