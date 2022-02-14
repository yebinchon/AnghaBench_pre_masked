
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("refs/pull/*/head:refs/remotes/origin/pr/*", "refs/pull/23/head", "refs/remotes/origin/pr/23");
 FUNC_0("refs/heads/*:refs/remotes/origin/*", "refs/heads/master", "refs/remotes/origin/master");
 FUNC_0("refs/heads/*:refs/remotes/origin/*", "refs/heads/user/feature", "refs/remotes/origin/user/feature");
 FUNC_0("refs/heads/*:refs/heads/*", "refs/heads/master", "refs/heads/master");
 FUNC_0("refs/heads/*:refs/heads/*", "refs/heads/user/feature", "refs/heads/user/feature");
 FUNC_0("refs/*:refs/*", "refs/heads/master", "refs/heads/master");
}
