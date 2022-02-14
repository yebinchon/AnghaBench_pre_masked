
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* name; struct TYPE_4__* parent_path; struct TYPE_4__* gitdir_path; struct TYPE_4__* gitlink_path; struct TYPE_4__* worktree_path; struct TYPE_4__* commondir_path; } ;
typedef TYPE_1__ git_worktree ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(git_worktree *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->commondir_path);
 FUNC_0(VAR_0->worktree_path);
 FUNC_0(VAR_0->gitlink_path);
 FUNC_0(VAR_0->gitdir_path);
 FUNC_0(VAR_0->parent_path);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);
}
