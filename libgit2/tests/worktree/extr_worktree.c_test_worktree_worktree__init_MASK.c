
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_worktree ;
typedef int git_repository ;
typedef int git_reference ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {TYPE_2__* repo; } ;
struct TYPE_8__ {int workdir; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int **,int *,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,TYPE_2__*,char*,int ,int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 git_worktree *VAR_3;
 git_repository *VAR_4;
 git_reference *VAR_5;
 git_buf VAR_6 = VAR_1;

 FUNC_1(FUNC_5(&VAR_6, VAR_2.repo->workdir, "../worktree-new"));
 FUNC_1(FUNC_10(&VAR_3, VAR_2.repo, "worktree-new", VAR_6.ptr, ((void*)0)));


 FUNC_1(FUNC_8(&VAR_4, VAR_6.ptr));
 FUNC_0(FUNC_2(FUNC_9(VAR_4), "worktree-new/") == 0);
 FUNC_1(FUNC_3(&VAR_5, VAR_4, "worktree-new", VAR_0));

 FUNC_4(&VAR_6);
 FUNC_11(VAR_3);
 FUNC_6(VAR_5);
 FUNC_7(VAR_4);
}
