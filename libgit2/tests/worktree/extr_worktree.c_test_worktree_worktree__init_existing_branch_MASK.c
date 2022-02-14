
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int git_worktree ;
struct TYPE_16__ {int oid; } ;
struct TYPE_17__ {TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_commit ;
struct TYPE_18__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_19__ {int workdir; } ;
struct TYPE_15__ {TYPE_4__* repo; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_13__ VAR_1 ;
 int FUNC_2 (TYPE_2__**,TYPE_4__*,char*,int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__**,TYPE_4__*) ;
 int FUNC_9 (int **,TYPE_4__*,char*,int ,int *) ;

void FUNC_10(void)
{
 git_reference *VAR_2, *VAR_3;
 git_commit *VAR_4;
 git_worktree *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_1(FUNC_8(&VAR_2, VAR_1.repo));
 FUNC_1(FUNC_6(&VAR_4, VAR_1.repo, &VAR_2->target.oid));
 FUNC_1(FUNC_2(&VAR_3, VAR_1.repo, "worktree-new", VAR_4, 0));

 FUNC_1(FUNC_4(&VAR_6, VAR_1.repo->workdir, "../worktree-new"));
 FUNC_0(FUNC_9(&VAR_5, VAR_1.repo, "worktree-new", VAR_6.ptr, ((void*)0)));

 FUNC_3(&VAR_6);
 FUNC_5(VAR_4);
 FUNC_7(VAR_2);
 FUNC_7(VAR_3);
}
