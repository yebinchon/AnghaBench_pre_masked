
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int lock; } ;
typedef TYPE_1__ git_worktree_add_options ;
typedef int git_worktree ;
typedef int git_repository ;
typedef int git_reference ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_13__ {TYPE_3__* repo; } ;
struct TYPE_12__ {int workdir; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int **,int *,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,TYPE_3__*,char*,int ,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

void FUNC_13(void)
{
 git_worktree *VAR_4;
 git_repository *VAR_5;
 git_reference *VAR_6;
 git_buf VAR_7 = VAR_1;
 git_worktree_add_options VAR_8 = VAR_2;

 VAR_8.lock = 1;

 FUNC_1(FUNC_5(&VAR_7, VAR_3.repo->workdir, "../worktree-locked"));
 FUNC_1(FUNC_10(&VAR_4, VAR_3.repo, "worktree-locked", VAR_7.ptr, &VAR_8));


 FUNC_0(FUNC_12(((void*)0), VAR_4));
 FUNC_1(FUNC_8(&VAR_5, VAR_7.ptr));
 FUNC_0(FUNC_2(FUNC_9(VAR_5), "worktree-locked/") == 0);
 FUNC_1(FUNC_3(&VAR_6, VAR_5, "worktree-locked", VAR_0));

 FUNC_4(&VAR_7);
 FUNC_11(VAR_4);
 FUNC_6(VAR_6);
 FUNC_7(VAR_5);
}
