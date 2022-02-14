
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("refs/heads/branch-*:refs/remotes/origin/branch-*", "refs/heads/branch-a", "refs/remotes/origin/branch-a");
 FUNC_0("refs/heads/branch-*/head:refs/remotes/origin/branch-*/head", "refs/heads/branch-a/head", "refs/remotes/origin/branch-a/head");
}
