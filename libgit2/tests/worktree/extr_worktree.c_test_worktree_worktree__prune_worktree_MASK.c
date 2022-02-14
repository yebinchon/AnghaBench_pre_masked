
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ git_worktree_prune_options ;
struct TYPE_10__ {int gitlink_path; int gitdir_path; } ;
typedef TYPE_2__ git_worktree ;
struct TYPE_11__ {int repo; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,int ,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;

void FUNC_6(void)
{
 git_worktree_prune_options VAR_4 = VAR_0;
 git_worktree *VAR_5;

 VAR_4.flags = VAR_1|VAR_2;

 FUNC_1(FUNC_4(&VAR_5, VAR_3.repo, "testrepo-worktree"));
 FUNC_1(FUNC_5(VAR_5, &VAR_4));

 FUNC_0(!FUNC_2(VAR_5->gitdir_path));
 FUNC_0(!FUNC_2(VAR_5->gitlink_path));

 FUNC_3(VAR_5);
}
