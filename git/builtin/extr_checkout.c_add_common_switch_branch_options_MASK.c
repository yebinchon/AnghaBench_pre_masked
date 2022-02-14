
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct checkout_opts {int ignore_other_worktrees; int overwrite_ignore; int new_orphan_branch; int force; int track; int force_detach; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int *,int ) ;
 struct option FUNC_2 (int ,char*,int *,int ,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (char,char*,int *,int ,int ) ;
 struct option FUNC_5 (int ,char*,int *,int ,int ) ;
 struct option FUNC_6 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct option*) ;
 struct option* FUNC_8 (struct option*,struct option*) ;

__attribute__((used)) static struct option *FUNC_9(
 struct checkout_opts *VAR_2, struct option *VAR_3)
{
 struct option VAR_4[] = {
  FUNC_1('d', "detach", &VAR_2->force_detach, FUNC_0("detach HEAD at named commit")),
  FUNC_4('t', "track", &VAR_2->track, FUNC_0("set upstream info for new branch"),
   VAR_0),
  FUNC_6(&VAR_2->force, FUNC_0("force checkout (throw away local modifications)"),
      VAR_1),
  FUNC_5(0, "orphan", &VAR_2->new_orphan_branch, FUNC_0("new-branch"), FUNC_0("new unparented branch")),
  FUNC_2(0, "overwrite-ignore", &VAR_2->overwrite_ignore,
      FUNC_0("update ignored files (default)"),
      VAR_1),
  FUNC_1(0, "ignore-other-worktrees", &VAR_2->ignore_other_worktrees,
    FUNC_0("do not check if another worktree is holding the given ref")),
  FUNC_3()
 };
 struct option *VAR_5 = FUNC_8(VAR_3, VAR_4);
 FUNC_7(VAR_3);
 return VAR_5;
}
