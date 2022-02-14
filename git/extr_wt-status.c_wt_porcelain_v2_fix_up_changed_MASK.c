
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {scalar_t__ mode_head; scalar_t__ mode_index; scalar_t__ mode_worktree; int worktree_status; int oid_index; int oid_head; int index_status; } ;
struct string_list_item {struct wt_status_change_data* util; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct string_list_item *VAR_0)
{
 struct wt_status_change_data *VAR_1 = VAR_0->util;

 if (!VAR_1->index_status) {
  FUNC_0(VAR_1->mode_head == 0);
  VAR_1->mode_head = VAR_1->mode_index;
  FUNC_1(&VAR_1->oid_head, &VAR_1->oid_index);
 }

 if (!VAR_1->worktree_status) {
  FUNC_0(VAR_1->mode_worktree == 0);
  VAR_1->mode_worktree = VAR_1->mode_index;
 }
}
