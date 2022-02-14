
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {int bisect_in_progress; int branch; } ;
struct worktree {int dummy; } ;
struct stat {int dummy; } ;


 int FUNC_0 (struct worktree const*,char*) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (struct worktree const*,char*) ;

int FUNC_3(const struct worktree *VAR_0,
      struct wt_status_state *VAR_1)
{
 struct stat VAR_2;

 if (!FUNC_1(FUNC_2(VAR_0, "BISECT_LOG"), &VAR_2)) {
  VAR_1->bisect_in_progress = 1;
  VAR_1->branch = FUNC_0(VAR_0, "BISECT_START");
  return 1;
 }
 return 0;
}
