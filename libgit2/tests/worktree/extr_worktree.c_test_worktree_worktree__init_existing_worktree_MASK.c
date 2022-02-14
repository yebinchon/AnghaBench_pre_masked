
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_15__ {int gitlink_path; } ;
typedef TYPE_2__ git_worktree ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_17__ {int workdir; } ;
struct TYPE_14__ {int gitlink; } ;
struct TYPE_13__ {TYPE_1__* worktree; TYPE_5__* repo; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_11__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_2__**,TYPE_5__*,char*,int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__**,TYPE_5__*,char*) ;

void FUNC_8(void)
{
 git_worktree *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_2(FUNC_4(&VAR_3, VAR_1.repo->workdir, "../worktree-new"));
 FUNC_1(FUNC_5(&VAR_2, VAR_1.repo, "testrepo-worktree", VAR_3.ptr, ((void*)0)));

 FUNC_2(FUNC_7(&VAR_2, VAR_1.repo, "testrepo-worktree"));
 FUNC_0(VAR_2->gitlink_path, VAR_1.worktree->gitlink);

 FUNC_3(&VAR_3);
 FUNC_6(VAR_2);
}
