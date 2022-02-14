
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
  VAR_0, "");
 FUNC_0(
  VAR_0, "heads\foo");
 FUNC_0(
  VAR_0, "/");
 FUNC_0(
  VAR_0, "///");

 FUNC_1(
  VAR_0, "ALL_CAPS_AND_UNDERSCORES", "ALL_CAPS_AND_UNDERSCORES");
 FUNC_1(
  VAR_0, "refs/MixedCasing", "refs/MixedCasing");
 FUNC_1(
  VAR_0, "refs///heads///a", "refs/heads/a");

 FUNC_1(
  VAR_0, "HEAD", "HEAD");
 FUNC_1(
  VAR_0, "MERGE_HEAD", "MERGE_HEAD");
 FUNC_1(
  VAR_0, "FETCH_HEAD", "FETCH_HEAD");
}
