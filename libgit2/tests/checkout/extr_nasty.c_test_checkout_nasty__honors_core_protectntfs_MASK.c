
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(VAR_0, "core.protectNTFS", 1);

 FUNC_1("refs/heads/dotgit_backslash_path", ".git/foobar");
 FUNC_1("refs/heads/dotcapitalgit_backslash_path", ".GIT/foobar");
 FUNC_1("refs/heads/dot_git_dot", ".git/foobar");
 FUNC_1("refs/heads/git_tilde1", ".git/foobar");
}
