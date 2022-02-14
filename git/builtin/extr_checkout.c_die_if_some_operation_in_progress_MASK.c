
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {scalar_t__ bisect_in_progress; scalar_t__ revert_in_progress; scalar_t__ cherry_pick_in_progress; scalar_t__ rebase_in_progress; scalar_t__ rebase_interactive_in_progress; scalar_t__ am_in_progress; scalar_t__ merge_in_progress; } ;
typedef int state ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wt_status_state*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct wt_status_state*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct wt_status_state VAR_1;

 FUNC_2(&VAR_1, 0, sizeof(VAR_1));
 FUNC_4(VAR_0, &VAR_1, 0);

 if (VAR_1.merge_in_progress)
  FUNC_1(FUNC_0("cannot switch branch while merging\n"
        "Consider \"git merge --quit\" "
        "or \"git worktree add\"."));
 if (VAR_1.am_in_progress)
  FUNC_1(FUNC_0("cannot switch branch in the middle of an am session\n"
        "Consider \"git am --quit\" "
        "or \"git worktree add\"."));
 if (VAR_1.rebase_interactive_in_progress || VAR_1.rebase_in_progress)
  FUNC_1(FUNC_0("cannot switch branch while rebasing\n"
        "Consider \"git rebase --quit\" "
        "or \"git worktree add\"."));
 if (VAR_1.cherry_pick_in_progress)
  FUNC_1(FUNC_0("cannot switch branch while cherry-picking\n"
        "Consider \"git cherry-pick --quit\" "
        "or \"git worktree add\"."));
 if (VAR_1.revert_in_progress)
  FUNC_1(FUNC_0("cannot switch branch while reverting\n"
        "Consider \"git revert --quit\" "
        "or \"git worktree add\"."));
 if (VAR_1.bisect_in_progress)
  FUNC_3(FUNC_0("you are switching branch while bisecting"));
}
