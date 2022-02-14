
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_worktree ;
struct TYPE_12__ {int gitdir; int commondir; int workdir; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int ) ;
 int FUNC_8 (TYPE_1__**,int *) ;
 int FUNC_9 (int **,TYPE_1__*,char*,int ,int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 () ;

void FUNC_12(void)
{
 git_repository *VAR_2, *VAR_3, *VAR_4;
 git_worktree *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_2(&VAR_1);
 VAR_2 = FUNC_11();

 FUNC_1(FUNC_4(&VAR_6, VAR_2->workdir, "sm_unchanged"));
 FUNC_1(FUNC_7(&VAR_3, VAR_6.ptr));
 FUNC_1(FUNC_4(&VAR_6, VAR_2->workdir, "../worktree/"));
 FUNC_1(FUNC_9(&VAR_5, VAR_3, "repo-worktree", VAR_6.ptr, ((void*)0)));
 FUNC_1(FUNC_8(&VAR_4, VAR_5));

 FUNC_1(FUNC_5(&VAR_6, VAR_6.ptr, ((void*)0)));
 FUNC_0(VAR_6.ptr, VAR_4->workdir);
 FUNC_1(FUNC_5(&VAR_6, VAR_3->commondir, ((void*)0)));
 FUNC_0(VAR_3->commondir, VAR_4->commondir);

 FUNC_1(FUNC_4(&VAR_6, VAR_3->gitdir, "worktrees/repo-worktree/"));
 FUNC_0(VAR_6.ptr, VAR_4->gitdir);

 FUNC_3(&VAR_6);
 FUNC_10(VAR_5);
 FUNC_6(VAR_3);
 FUNC_6(VAR_4);
}
