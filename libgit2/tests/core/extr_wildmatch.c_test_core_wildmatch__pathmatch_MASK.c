
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("foo", "fo", 0, 0, 0, 0);
 FUNC_0("foo/bar", "foo/bar", 1, 1, 1, 1);
 FUNC_0("foo/bar", "foo/*", 1, 1, 1, 1);
 FUNC_0("foo/bba/arr", "foo/*", 0, 0, 1, 1);
 FUNC_0("foo/bba/arr", "foo/**", 1, 1, 1, 1);
 FUNC_0("foo/bba/arr", "foo*", 0, 0, 1, 1);
 FUNC_0("foo/bba/arr", "foo**", 0, 0, 1, 1);
 FUNC_0("foo/bba/arr", "foo/*arr", 0, 0, 1, 1);
 FUNC_0("foo/bba/arr", "foo/**arr", 0, 0, 1, 1);
 FUNC_0("foo/bba/arr", "foo/*z", 0, 0, 0, 0);
 FUNC_0("foo/bba/arr", "foo/**z", 0, 0, 0, 0);
 FUNC_0("foo/bar", "foo?bar", 0, 0, 1, 1);
 FUNC_0("foo/bar", "foo[/]bar", 0, 0, 1, 1);
 FUNC_0("foo/bar", "foo[^a-z]bar", 0, 0, 1, 1);
 FUNC_0("ab/cXd/efXg/hi", "*Xg*i", 0, 0, 1, 1);
}
