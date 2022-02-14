
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status_change_data {scalar_t__ worktree_status; scalar_t__ dirty_submodule; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct wt_status {TYPE_2__ change; } ;
struct TYPE_3__ {struct wt_status_change_data* util; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct wt_status *VAR_2,
          int *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 *VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->change.nr; VAR_4++) {
  struct wt_status_change_data *VAR_6;
  VAR_6 = VAR_2->change.items[VAR_4].util;
  if (!VAR_6->worktree_status ||
      VAR_6->worktree_status == VAR_1)
   continue;
  if (!VAR_5)
   VAR_5 = 1;
  if (VAR_6->dirty_submodule)
   *VAR_3 = 1;
  if (VAR_6->worktree_status == VAR_0)
   VAR_5 = -1;
 }
 return VAR_5;
}
