
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int commondir_path; int gitlink_path; int parent_path; int gitdir_path; } ;
typedef TYPE_2__ git_worktree ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_15__ {TYPE_5__* repo; TYPE_1__* worktree; } ;
struct TYPE_14__ {int commondir; int gitdir; int workdir; } ;
struct TYPE_11__ {int gitlink; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_9__ VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**,TYPE_5__*,char*) ;

void FUNC_6(void)
{
 git_worktree *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_1(FUNC_5(&VAR_2, VAR_1.repo, "testrepo-worktree"));

 FUNC_1(FUNC_3(&VAR_3, VAR_1.repo->commondir, "worktrees/testrepo-worktree/"));

 FUNC_0(VAR_2->gitdir_path, VAR_3.ptr);
 FUNC_0(VAR_2->parent_path, VAR_1.repo->workdir);
 FUNC_0(VAR_2->gitlink_path, VAR_1.worktree->gitlink);
 FUNC_0(VAR_2->commondir_path, VAR_1.repo->gitdir);
 FUNC_0(VAR_2->commondir_path, VAR_1.repo->commondir);

 FUNC_2(&VAR_3);
 FUNC_4(VAR_2);
}
