
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct checkout_opts {int dwim_new_local_branch; int discard_changes; int accept_ref; int only_merge_on_switching_branches; int orphan_from_empty_tree; int overlay_mode; scalar_t__ can_switch_when_in_progress; scalar_t__ implicit_detach; scalar_t__ switch_branch_doing_nothing_is_ok; scalar_t__ accept_pathspec; int new_branch_force; int new_branch; } ;
typedef int opts ;


 int FUNC_0 (struct option*) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (char,char*,int *,int ,int ) ;
 struct option* FUNC_5 (struct checkout_opts*,struct option*) ;
 struct option* FUNC_6 (struct checkout_opts*,struct option*) ;
 int FUNC_7 (int,char const**,char const*,struct checkout_opts*,struct option*,int ) ;
 int FUNC_8 (struct checkout_opts*,int ,int) ;
 struct option* FUNC_9 (struct option*) ;
 int VAR_0 ;

int FUNC_10(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct checkout_opts VAR_4;
 struct option *VAR_5 = ((void*)0);
 struct option VAR_6[] = {
  FUNC_4('c', "create", &VAR_4.new_branch, FUNC_1("branch"),
      FUNC_1("create and switch to a new branch")),
  FUNC_4('C', "force-create", &VAR_4.new_branch_force, FUNC_1("branch"),
      FUNC_1("create/reset and switch to a branch")),
  FUNC_2(0, "guess", &VAR_4.dwim_new_local_branch,
    FUNC_1("second guess 'git switch <no-such-branch>'")),
  FUNC_2(0, "discard-changes", &VAR_4.discard_changes,
    FUNC_1("throw away local modifications")),
  FUNC_3()
 };
 int VAR_7;

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.dwim_new_local_branch = 1;
 VAR_4.accept_ref = 1;
 VAR_4.accept_pathspec = 0;
 VAR_4.switch_branch_doing_nothing_is_ok = 0;
 VAR_4.only_merge_on_switching_branches = 1;
 VAR_4.implicit_detach = 0;
 VAR_4.can_switch_when_in_progress = 0;
 VAR_4.orphan_from_empty_tree = 1;
 VAR_4.overlay_mode = -1;

 VAR_5 = FUNC_9(VAR_6);
 VAR_5 = FUNC_5(&VAR_4, VAR_5);
 VAR_5 = FUNC_6(&VAR_4, VAR_5);

 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3, &VAR_4,
       VAR_5, VAR_0);
 FUNC_0(VAR_5);
 return VAR_7;
}
