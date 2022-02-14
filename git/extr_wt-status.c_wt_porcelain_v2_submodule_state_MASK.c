
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {int dirty_submodule; scalar_t__ new_submodule_commits; int mode_worktree; int mode_index; int mode_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
 struct wt_status_change_data *VAR_2,
 char VAR_3[5])
{
 if (FUNC_0(VAR_2->mode_head) ||
  FUNC_0(VAR_2->mode_index) ||
  FUNC_0(VAR_2->mode_worktree)) {
  VAR_3[0] = 'S';
  VAR_3[1] = VAR_2->new_submodule_commits ? 'C' : '.';
  VAR_3[2] = (VAR_2->dirty_submodule & VAR_0) ? 'M' : '.';
  VAR_3[3] = (VAR_2->dirty_submodule & VAR_1) ? 'U' : '.';
 } else {
  VAR_3[0] = 'N';
  VAR_3[1] = '.';
  VAR_3[2] = '.';
  VAR_3[3] = '.';
 }
 VAR_3[4] = 0;
}
