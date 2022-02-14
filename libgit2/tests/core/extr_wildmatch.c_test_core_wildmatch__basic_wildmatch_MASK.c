
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("foo", "foo", 1, 1, 1, 1);
 FUNC_0("foo", "bar", 0, 0, 0, 0);
 FUNC_0("", "", 1, 1, 1, 1);
 FUNC_0("foo", "???", 1, 1, 1, 1);
 FUNC_0("foo", "??", 0, 0, 0, 0);
 FUNC_0("foo", "*", 1, 1, 1, 1);
 FUNC_0("foo", "f*", 1, 1, 1, 1);
 FUNC_0("foo", "*f", 0, 0, 0, 0);
 FUNC_0("foo", "*foo*", 1, 1, 1, 1);
 FUNC_0("foobar", "*ob*a*r*", 1, 1, 1, 1);
 FUNC_0("aaaaaaabababab", "*ab", 1, 1, 1, 1);
 FUNC_0("foo*", "foo\\*", 1, 1, 1, 1);
 FUNC_0("foobar", "foo\\*bar", 0, 0, 0, 0);
 FUNC_0("f\\oo", "f\\\\oo", 1, 1, 1, 1);
 FUNC_0("ball", "*[al]?", 1, 1, 1, 1);
 FUNC_0("ten", "[ten]", 0, 0, 0, 0);
 FUNC_0("ten", "**[!te]", 1, 1, 1, 1);
 FUNC_0("ten", "**[!ten]", 0, 0, 0, 0);
 FUNC_0("ten", "t[a-g]n", 1, 1, 1, 1);
 FUNC_0("ten", "t[!a-g]n", 0, 0, 0, 0);
 FUNC_0("ton", "t[!a-g]n", 1, 1, 1, 1);
 FUNC_0("ton", "t[^a-g]n", 1, 1, 1, 1);
 FUNC_0("a]b", "a[]]b", 1, 1, 1, 1);
 FUNC_0("a-b", "a[]-]b", 1, 1, 1, 1);
 FUNC_0("a]b", "a[]-]b", 1, 1, 1, 1);
 FUNC_0("aab", "a[]-]b", 0, 0, 0, 0);
 FUNC_0("aab", "a[]a-]b", 1, 1, 1, 1);
 FUNC_0("]", "]", 1, 1, 1, 1);
}
