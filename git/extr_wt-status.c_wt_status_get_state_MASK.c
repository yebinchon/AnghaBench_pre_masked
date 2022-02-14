
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {int merge_in_progress; int cherry_pick_in_progress; int revert_in_progress; int revert_head_oid; int cherry_pick_head_oid; } ;
struct stat {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum replay_action { ____Placeholder_replay_action } replay_action ;


 int VAR_0 ;
 int FUNC_0 (char*,struct object_id*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*) ;
 struct object_id VAR_1 ;
 int FUNC_4 (int *,struct object_id*) ;
 int FUNC_5 (struct repository*,int*) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int *,struct wt_status_state*) ;
 scalar_t__ FUNC_8 (int *,struct wt_status_state*) ;
 int FUNC_9 (struct repository*,struct wt_status_state*) ;

void FUNC_10(struct repository *VAR_2,
    struct wt_status_state *VAR_3,
    int VAR_4)
{
 struct stat VAR_5;
 struct object_id VAR_6;
 enum replay_action VAR_7;

 if (!FUNC_6(FUNC_2(VAR_2), &VAR_5)) {
  FUNC_8(((void*)0), VAR_3);
  VAR_3->merge_in_progress = 1;
 } else if (FUNC_8(((void*)0), VAR_3)) {
  ;
 } else if (!FUNC_6(FUNC_1(VAR_2), &VAR_5) &&
   !FUNC_0("CHERRY_PICK_HEAD", &VAR_6)) {
  VAR_3->cherry_pick_in_progress = 1;
  FUNC_4(&VAR_3->cherry_pick_head_oid, &VAR_6);
 }
 FUNC_7(((void*)0), VAR_3);
 if (!FUNC_6(FUNC_3(VAR_2), &VAR_5) &&
     !FUNC_0("REVERT_HEAD", &VAR_6)) {
  VAR_3->revert_in_progress = 1;
  FUNC_4(&VAR_3->revert_head_oid, &VAR_6);
 }
 if (!FUNC_5(VAR_2, &VAR_7)) {
  if (VAR_7 == VAR_0) {
   VAR_3->cherry_pick_in_progress = 1;
   FUNC_4(&VAR_3->cherry_pick_head_oid, &VAR_1);
  } else {
   VAR_3->revert_in_progress = 1;
   FUNC_4(&VAR_3->revert_head_oid, &VAR_1);
  }
 }
 if (VAR_4)
  FUNC_9(VAR_2, VAR_3);
}
