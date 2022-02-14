
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {int am_in_progress; int am_empty_patch; int rebase_in_progress; int rebase_interactive_in_progress; void* onto; void* branch; } ;
struct worktree {int dummy; } ;
struct stat {int st_size; } ;


 void* FUNC_0 (struct worktree const*,char*) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (struct worktree const*,char*) ;

int FUNC_3(const struct worktree *VAR_0,
      struct wt_status_state *VAR_1)
{
 struct stat VAR_2;

 if (!FUNC_1(FUNC_2(VAR_0, "rebase-apply"), &VAR_2)) {
  if (!FUNC_1(FUNC_2(VAR_0, "rebase-apply/applying"), &VAR_2)) {
   VAR_1->am_in_progress = 1;
   if (!FUNC_1(FUNC_2(VAR_0, "rebase-apply/patch"), &VAR_2) && !VAR_2.st_size)
    VAR_1->am_empty_patch = 1;
  } else {
   VAR_1->rebase_in_progress = 1;
   VAR_1->branch = FUNC_0(VAR_0, "rebase-apply/head-name");
   VAR_1->onto = FUNC_0(VAR_0, "rebase-apply/onto");
  }
 } else if (!FUNC_1(FUNC_2(VAR_0, "rebase-merge"), &VAR_2)) {
  if (!FUNC_1(FUNC_2(VAR_0, "rebase-merge/interactive"), &VAR_2))
   VAR_1->rebase_interactive_in_progress = 1;
  else
   VAR_1->rebase_in_progress = 1;
  VAR_1->branch = FUNC_0(VAR_0, "rebase-merge/head-name");
  VAR_1->onto = FUNC_0(VAR_0, "rebase-merge/onto");
 } else
  return 0;
 return 1;
}
