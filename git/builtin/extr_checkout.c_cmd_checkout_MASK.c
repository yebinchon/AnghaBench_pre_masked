
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct checkout_opts {int new_branch_log; int dwim_new_local_branch; int overlay_mode; int switch_branch_doing_nothing_is_ok; int only_merge_on_switching_branches; int accept_ref; int accept_pathspec; int implicit_detach; int can_switch_when_in_progress; int empty_pathspec_ok; int checkout_index; int checkout_worktree; scalar_t__ orphan_from_empty_tree; int new_branch_force; int new_branch; } ;
typedef int opts ;


 int FUNC_0 (struct option*) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (char,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (char,int *,int *,int ,int ) ;
 struct option* FUNC_5 (struct checkout_opts*,struct option*) ;
 struct option* FUNC_6 (struct checkout_opts*,struct option*) ;
 struct option* FUNC_7 (struct checkout_opts*,struct option*) ;
 int FUNC_8 (int,char const**,char const*,struct checkout_opts*,struct option*,int ) ;
 int VAR_0 ;
 int FUNC_9 (struct checkout_opts*,int ,int) ;
 struct option* FUNC_10 (struct option*) ;
 int FUNC_11 (char const*,char*) ;

int FUNC_12(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct checkout_opts VAR_4;
 struct option *VAR_5;
 struct option VAR_6[] = {
  FUNC_4('b', ((void*)0), &VAR_4.new_branch, FUNC_1("branch"),
      FUNC_1("create and checkout a new branch")),
  FUNC_4('B', ((void*)0), &VAR_4.new_branch_force, FUNC_1("branch"),
      FUNC_1("create/reset and checkout a branch")),
  FUNC_2('l', ((void*)0), &VAR_4.new_branch_log, FUNC_1("create reflog for new branch")),
  FUNC_2(0, "guess", &VAR_4.dwim_new_local_branch,
    FUNC_1("second guess 'git checkout <no-such-branch>' (default)")),
  FUNC_2(0, "overlay", &VAR_4.overlay_mode, FUNC_1("use overlay mode (default)")),
  FUNC_3()
 };
 int VAR_7;

 FUNC_9(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.dwim_new_local_branch = 1;
 VAR_4.switch_branch_doing_nothing_is_ok = 1;
 VAR_4.only_merge_on_switching_branches = 0;
 VAR_4.accept_ref = 1;
 VAR_4.accept_pathspec = 1;
 VAR_4.implicit_detach = 1;
 VAR_4.can_switch_when_in_progress = 1;
 VAR_4.orphan_from_empty_tree = 0;
 VAR_4.empty_pathspec_ok = 1;
 VAR_4.overlay_mode = -1;
 VAR_4.checkout_index = -2;
 VAR_4.checkout_worktree = -2;

 if (VAR_1 == 3 && !FUNC_11(VAR_2[1], "-b")) {




  VAR_4.switch_branch_doing_nothing_is_ok = 0;
  VAR_4.only_merge_on_switching_branches = 1;
 }

 VAR_5 = FUNC_10(VAR_6);
 VAR_5 = FUNC_6(&VAR_4, VAR_5);
 VAR_5 = FUNC_7(&VAR_4, VAR_5);
 VAR_5 = FUNC_5(&VAR_4, VAR_5);

 VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3, &VAR_4,
       VAR_5, VAR_0);
 FUNC_0(VAR_5);
 return VAR_7;
}
