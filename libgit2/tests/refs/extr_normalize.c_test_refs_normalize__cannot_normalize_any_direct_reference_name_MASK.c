
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(
  VAR_0, "a");
 FUNC_0(
  VAR_0, "/a");
 FUNC_0(
  VAR_0, "//a");
 FUNC_0(
  VAR_0, "");
 FUNC_0(
  VAR_0, "/refs/heads/a/");
 FUNC_0(
  VAR_0, "refs/heads/a/");
 FUNC_0(
  VAR_0, "refs/heads/a.");
 FUNC_0(
  VAR_0, "refs/heads/a.lock");
 FUNC_0(
  VAR_0, "refs/heads/foo?bar");
 FUNC_0(
  VAR_0, "refs/heads\foo");
 FUNC_1(
  VAR_0, "refs/heads/v@ation", "refs/heads/v@ation");
 FUNC_1(
  VAR_0, "refs///heads///a", "refs/heads/a");
 FUNC_0(
  VAR_0, "refs/heads/.a/b");
 FUNC_0(
  VAR_0, "refs/heads/foo/../bar");
 FUNC_0(
  VAR_0, "refs/heads/foo..bar");
 FUNC_0(
  VAR_0, "refs/heads/./foo");
 FUNC_0(
  VAR_0, "refs/heads/v@{ation");
}
