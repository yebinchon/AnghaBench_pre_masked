
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cherry_pick_head_oid; } ;
struct wt_status {TYPE_1__ state; scalar_t__ hints; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct wt_status*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct wt_status*,char const*,int ,...) ;
 int FUNC_5 (struct wt_status*) ;

__attribute__((used)) static void FUNC_6(struct wt_status *VAR_1,
      const char *VAR_2)
{
 if (FUNC_3(&VAR_1->state.cherry_pick_head_oid))
  FUNC_4(VAR_1, VAR_2,
   FUNC_0("Cherry-pick currently in progress."));
 else
  FUNC_4(VAR_1, VAR_2,
   FUNC_0("You are currently cherry-picking commit %s."),
   FUNC_1(&VAR_1->state.cherry_pick_head_oid,
        VAR_0));

 if (VAR_1->hints) {
  if (FUNC_2(VAR_1))
   FUNC_4(VAR_1, VAR_2,
    FUNC_0("  (fix conflicts and run \"git cherry-pick --continue\")"));
  else if (FUNC_3(&VAR_1->state.cherry_pick_head_oid))
   FUNC_4(VAR_1, VAR_2,
    FUNC_0("  (run \"git cherry-pick --continue\" to continue)"));
  else
   FUNC_4(VAR_1, VAR_2,
    FUNC_0("  (all conflicts fixed: run \"git cherry-pick --continue\")"));
  FUNC_4(VAR_1, VAR_2,
   FUNC_0("  (use \"git cherry-pick --skip\" to skip this patch)"));
  FUNC_4(VAR_1, VAR_2,
   FUNC_0("  (use \"git cherry-pick --abort\" to cancel the cherry-pick operation)"));
 }
 FUNC_5(VAR_1);
}
