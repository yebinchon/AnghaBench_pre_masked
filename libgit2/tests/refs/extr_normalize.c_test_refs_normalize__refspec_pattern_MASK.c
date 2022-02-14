
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

void FUNC_2(void)
{
 FUNC_1(
  VAR_0, "heads/*foo/bar", "heads/*foo/bar");
 FUNC_1(
  VAR_0, "heads/foo*/bar", "heads/foo*/bar");
 FUNC_1(
  VAR_0, "heads/f*o/bar", "heads/f*o/bar");

 FUNC_0(
  VAR_0, "foo");
 FUNC_1(
  VAR_1, "FOO", "FOO");

 FUNC_1(
  VAR_0, "foo/bar", "foo/bar");
 FUNC_1(
  VAR_1, "foo/bar", "foo/bar");

 FUNC_1(
  VAR_0, "*/foo", "*/foo");
 FUNC_1(
  VAR_1, "*/foo", "*/foo");

 FUNC_1(
  VAR_0, "foo/*/bar", "foo/*/bar");
 FUNC_1(
  VAR_1, "foo/*/bar", "foo/*/bar");

 FUNC_0(
  VAR_0, "*");
 FUNC_1(
  VAR_1, "*", "*");

 FUNC_0(
  VAR_0, "foo/*/*");
 FUNC_0(
  VAR_1, "foo/*/*");

 FUNC_0(
  VAR_0, "*/foo/*");
 FUNC_0(
  VAR_1, "*/foo/*");

 FUNC_0(
  VAR_0, "*/*/foo");
 FUNC_0(
  VAR_1, "*/*/foo");
}
