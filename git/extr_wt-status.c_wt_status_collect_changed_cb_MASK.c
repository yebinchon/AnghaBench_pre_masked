
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status_change_data {int worktree_status; int new_submodule_commits; int rename_status; int rename_score; int oid_index; int mode_worktree; int mode_index; int rename_source; int dirty_submodule; } ;
struct wt_status {int workdir_dirty; scalar_t__ status_format; int change; } ;
struct string_list_item {struct wt_status_change_data* util; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {int status; int score; TYPE_2__* one; TYPE_1__* two; } ;
struct TYPE_4__ {int oid; int mode; int path; } ;
struct TYPE_3__ {int mode; int oid; int dirty_submodule; int path; } ;


 int FUNC_0 (char*,...) ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct wt_status_change_data*) ;
 struct string_list_item* FUNC_5 (int *,int ) ;
 struct wt_status_change_data* FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct diff_queue_struct *VAR_2,
      struct diff_options *VAR_3,
      void *VAR_4)
{
 struct wt_status *VAR_5 = VAR_4;
 int VAR_6;

 if (!VAR_2->nr)
  return;
 VAR_5->workdir_dirty = 1;
 for (VAR_6 = 0; VAR_6 < VAR_2->nr; VAR_6++) {
  struct diff_filepair *VAR_7;
  struct string_list_item *VAR_8;
  struct wt_status_change_data *VAR_9;

  VAR_7 = VAR_2->queue[VAR_6];
  VAR_8 = FUNC_5(&VAR_5->change, VAR_7->two->path);
  VAR_9 = VAR_8->util;
  if (!VAR_9) {
   VAR_9 = FUNC_6(1, sizeof(*VAR_9));
   VAR_8->util = VAR_9;
  }
  if (!VAR_9->worktree_status)
   VAR_9->worktree_status = VAR_7->status;
  if (FUNC_1(VAR_7->two->mode)) {
   VAR_9->dirty_submodule = VAR_7->two->dirty_submodule;
   VAR_9->new_submodule_commits = !FUNC_3(&VAR_7->one->oid,
         &VAR_7->two->oid);
   if (VAR_5->status_format == VAR_1)
    VAR_9->worktree_status = FUNC_4(VAR_9);
  }

  switch (VAR_7->status) {
  case 134:
   VAR_9->mode_worktree = VAR_7->two->mode;
   break;

  case 132:
   VAR_9->mode_index = VAR_7->one->mode;
   FUNC_2(&VAR_9->oid_index, &VAR_7->one->oid);

   break;

  case 133:
  case 130:
   if (VAR_9->rename_status)
    FUNC_0("multiple renames on the same target? how?");
   VAR_9->rename_source = FUNC_7(VAR_7->one->path);
   VAR_9->rename_score = VAR_7->score * 100 / VAR_0;
   VAR_9->rename_status = VAR_7->status;

  case 131:
  case 129:
  case 128:
   VAR_9->mode_index = VAR_7->one->mode;
   VAR_9->mode_worktree = VAR_7->two->mode;
   FUNC_2(&VAR_9->oid_index, &VAR_7->one->oid);
   break;

  default:
   FUNC_0("unhandled diff-files status '%c'", VAR_7->status);
   break;
  }

 }
}
