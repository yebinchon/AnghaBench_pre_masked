
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


struct TYPE_24__ {TYPE_4__* ref; } ;
typedef TYPE_2__ git_worktree_add_options ;
typedef int git_worktree ;
struct TYPE_25__ {int workdir; } ;
typedef TYPE_3__ git_repository ;
struct TYPE_23__ {int oid; } ;
struct TYPE_26__ {TYPE_1__ target; } ;
typedef TYPE_4__ git_reference ;
typedef int git_commit ;
struct TYPE_27__ {int ptr; } ;
typedef TYPE_5__ git_buf ;
struct TYPE_22__ {TYPE_3__* repo; } ;


 TYPE_5__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_19__ VAR_2 ;
 int FUNC_2 (TYPE_4__**,TYPE_3__*,char*,int *,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_4__**,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__**,int *) ;
 int FUNC_12 (int **,TYPE_3__*,char*,int ,TYPE_2__*) ;
 int FUNC_13 (int *) ;

void FUNC_14(void)
{
 git_reference *VAR_3, *VAR_4, *VAR_5;
 git_commit *VAR_6;
 git_worktree *VAR_7;
 git_repository *VAR_8;
 git_buf VAR_9 = VAR_0;
 git_worktree_add_options VAR_10 = VAR_1;

 FUNC_1(FUNC_10(&VAR_3, VAR_2.repo));
 FUNC_1(FUNC_6(&VAR_6, VAR_2.repo, &VAR_3->target.oid));
 FUNC_1(FUNC_2(&VAR_4, VAR_2.repo, "worktree-with-ref", VAR_6, 0));

 VAR_10.ref = VAR_4;

 FUNC_1(FUNC_4(&VAR_9, VAR_2.repo->workdir, "../worktree-with-different-name"));
 FUNC_1(FUNC_12(&VAR_7, VAR_2.repo, "worktree-with-different-name", VAR_9.ptr, &VAR_10));
 FUNC_1(FUNC_11(&VAR_8, VAR_7));
 FUNC_1(FUNC_10(&VAR_5, VAR_8));
 FUNC_0(FUNC_8(VAR_5), "refs/heads/worktree-with-ref");

 FUNC_3(&VAR_9);
 FUNC_5(VAR_6);
 FUNC_7(VAR_3);
 FUNC_7(VAR_4);
 FUNC_7(VAR_5);
 FUNC_9(VAR_8);
 FUNC_13(VAR_7);
}
