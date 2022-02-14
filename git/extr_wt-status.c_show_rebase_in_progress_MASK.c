
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int onto; scalar_t__ branch; scalar_t__ rebase_in_progress; } ;
struct wt_status {int amend; scalar_t__ hints; TYPE_1__ state; int repo; } ;
struct stat {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct wt_status*) ;
 int FUNC_3 (struct wt_status*,char const*) ;
 int FUNC_4 (struct wt_status*,char const*) ;
 scalar_t__ FUNC_5 (struct wt_status*) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (struct wt_status*,char const*,int ,...) ;
 int FUNC_8 (struct wt_status*) ;

__attribute__((used)) static void FUNC_9(struct wt_status *VAR_0,
        const char *VAR_1)
{
 struct stat VAR_2;

 FUNC_4(VAR_0, VAR_1);
 if (FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, VAR_1);
  if (VAR_0->hints) {
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (fix conflicts and then run \"git rebase --continue\")"));
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (use \"git rebase --skip\" to skip this patch)"));
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (use \"git rebase --abort\" to check out the original branch)"));
  }
 } else if (VAR_0->state.rebase_in_progress ||
     !FUNC_6(FUNC_1(VAR_0->repo), &VAR_2)) {
  FUNC_3(VAR_0, VAR_1);
  if (VAR_0->hints)
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (all conflicts fixed: run \"git rebase --continue\")"));
 } else if (FUNC_5(VAR_0)) {
  if (VAR_0->state.branch)
   FUNC_7(VAR_0, VAR_1,
      FUNC_0("You are currently splitting a commit while rebasing branch '%s' on '%s'."),
      VAR_0->state.branch,
      VAR_0->state.onto);
  else
   FUNC_7(VAR_0, VAR_1,
      FUNC_0("You are currently splitting a commit during a rebase."));
  if (VAR_0->hints)
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (Once your working directory is clean, run \"git rebase --continue\")"));
 } else {
  if (VAR_0->state.branch)
   FUNC_7(VAR_0, VAR_1,
      FUNC_0("You are currently editing a commit while rebasing branch '%s' on '%s'."),
      VAR_0->state.branch,
      VAR_0->state.onto);
  else
   FUNC_7(VAR_0, VAR_1,
      FUNC_0("You are currently editing a commit during a rebase."));
  if (VAR_0->hints && !VAR_0->amend) {
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (use \"git commit --amend\" to amend the current commit)"));
   FUNC_7(VAR_0, VAR_1,
    FUNC_0("  (use \"git rebase --continue\" once you are satisfied with your changes)"));
  }
 }
 FUNC_8(VAR_0);
}
