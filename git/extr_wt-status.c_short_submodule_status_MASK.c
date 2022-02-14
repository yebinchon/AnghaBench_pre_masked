
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {int dirty_submodule; char worktree_status; scalar_t__ new_submodule_commits; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char FUNC_0(struct wt_status_change_data *VAR_2)
{
 if (VAR_2->new_submodule_commits)
  return 'M';
 if (VAR_2->dirty_submodule & VAR_0)
  return 'm';
 if (VAR_2->dirty_submodule & VAR_1)
  return '?';
 return VAR_2->worktree_status;
}
