
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

void FUNC_1(void)
{


 FUNC_0(VAR_1, "", 0);
 FUNC_0(VAR_1, ":", 1);
 FUNC_0(VAR_1, "::", 0);
 FUNC_0(VAR_1, "+:", 1);

 FUNC_0(VAR_0, "", 1);
 FUNC_0(VAR_1, ":", 1);
 FUNC_0(VAR_0, "::", 0);

 FUNC_0(VAR_1, "refs/heads/*:refs/remotes/frotz/*", 1);
 FUNC_0(VAR_1, "refs/heads/*:refs/remotes/frotz", 0);
 FUNC_0(VAR_1, "refs/heads:refs/remotes/frotz/*", 0);
 FUNC_0(VAR_1, "refs/heads/master:refs/remotes/frotz/xyzzy", 1);
 FUNC_0(VAR_0, "refs/heads/*:refs/remotes/frotz/*", 1);
 FUNC_0(VAR_0, "refs/heads/*:refs/remotes/frotz", 0);
 FUNC_0(VAR_0, "refs/heads:refs/remotes/frotz/*", 0);
 FUNC_0(VAR_0, "refs/heads/master:refs/remotes/frotz/xyzzy", 1);
 FUNC_0(VAR_0, "refs/heads/master::refs/remotes/frotz/xyzzy", 0);
 FUNC_0(VAR_0, "refs/heads/maste :refs/remotes/frotz/xyzzy", 0);

 FUNC_0(VAR_1, "master~1:refs/remotes/frotz/backup", 1);
 FUNC_0(VAR_0, "master~1:refs/remotes/frotz/backup", 0);
 FUNC_0(VAR_1, "HEAD~4:refs/remotes/frotz/new", 1);
 FUNC_0(VAR_0, "HEAD~4:refs/remotes/frotz/new", 0);

 FUNC_0(VAR_1, "HEAD", 1);
 FUNC_0(VAR_0, "HEAD", 1);
 FUNC_0(VAR_1, "refs/heads/ nitfol", 0);
 FUNC_0(VAR_0, "refs/heads/ nitfol", 0);

 FUNC_0(VAR_1, "HEAD:", 0);
 FUNC_0(VAR_0, "HEAD:", 1);
 FUNC_0(VAR_1, "refs/heads/ nitfol:", 0);
 FUNC_0(VAR_0, "refs/heads/ nitfol:", 0);

 FUNC_0(VAR_1, ":refs/remotes/frotz/deleteme", 1);
 FUNC_0(VAR_0, ":refs/remotes/frotz/HEAD-to-me", 1);
 FUNC_0(VAR_1, ":refs/remotes/frotz/delete me", 0);
 FUNC_0(VAR_0, ":refs/remotes/frotz/HEAD to me", 0);

 FUNC_0(VAR_0, "refs/heads/*/for-linus:refs/remotes/mine/*-blah", 1);
 FUNC_0(VAR_1, "refs/heads/*/for-linus:refs/remotes/mine/*-blah", 1);

 FUNC_0(VAR_0, "refs/heads*/for-linus:refs/remotes/mine/*", 1);
 FUNC_0(VAR_1, "refs/heads*/for-linus:refs/remotes/mine/*", 1);

 FUNC_0(VAR_0, "refs/heads/*/*/for-linus:refs/remotes/mine/*", 0);
 FUNC_0(VAR_1, "refs/heads/*/*/for-linus:refs/remotes/mine/*", 0);

 FUNC_0(VAR_0, "refs/heads/*g*/for-linus:refs/remotes/mine/*", 0);
 FUNC_0(VAR_1, "refs/heads/*g*/for-linus:refs/remotes/mine/*", 0);

 FUNC_0(VAR_0, "refs/heads/*/for-linus:refs/remotes/mine/*", 1);
 FUNC_0(VAR_1, "refs/heads/*/for-linus:refs/remotes/mine/*", 1);

 FUNC_0(VAR_0, "master", 1);
 FUNC_0(VAR_1, "master", 1);

 FUNC_0(VAR_0, "refs/pull/*/head:refs/remotes/origin/pr/*", 1);
}
