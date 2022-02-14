
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gitdir; int gitlink; int workdir; int is_worktree; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char const*,char*,...) ;

__attribute__((used)) static void FUNC_3(git_repository *VAR_0, const char *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0->is_worktree);

 FUNC_1(VAR_0->workdir, FUNC_2(1, VAR_2, ((void*)0)));
 FUNC_1(VAR_0->gitlink, FUNC_2(0, VAR_2, ".git", ((void*)0)));
 FUNC_1(VAR_0->gitdir, FUNC_2(1, VAR_1, ".git", "worktrees", VAR_2, ((void*)0)));
}
