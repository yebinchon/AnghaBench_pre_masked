
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct checkout_opts {int checkout_index; int checkout_worktree; int ignore_unmerged; int overlay_mode; int accept_pathspec; char* ignore_unmerged_opt; scalar_t__ empty_pathspec_ok; scalar_t__ accept_ref; int from_treeish; } ;
typedef int opts ;


 int FUNC_0 (struct option*) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (char,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (char,char*,int *,char*,int ) ;
 struct option* FUNC_5 (struct checkout_opts*,struct option*) ;
 struct option* FUNC_6 (struct checkout_opts*,struct option*) ;
 int FUNC_7 (int,char const**,char const*,struct checkout_opts*,struct option*,int ) ;
 int FUNC_8 (struct checkout_opts*,int ,int) ;
 struct option* FUNC_9 (struct option*) ;
 int VAR_0 ;

int FUNC_10(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct checkout_opts VAR_4;
 struct option *VAR_5;
 struct option VAR_6[] = {
  FUNC_4('s', "source", &VAR_4.from_treeish, "<tree-ish>",
      FUNC_1("which tree-ish to checkout from")),
  FUNC_2('S', "staged", &VAR_4.checkout_index,
      FUNC_1("restore the index")),
  FUNC_2('W', "worktree", &VAR_4.checkout_worktree,
      FUNC_1("restore the working tree (default)")),
  FUNC_2(0, "ignore-unmerged", &VAR_4.ignore_unmerged,
    FUNC_1("ignore unmerged entries")),
  FUNC_2(0, "overlay", &VAR_4.overlay_mode, FUNC_1("use overlay mode")),
  FUNC_3()
 };
 int VAR_7;

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.accept_ref = 0;
 VAR_4.accept_pathspec = 1;
 VAR_4.empty_pathspec_ok = 0;
 VAR_4.overlay_mode = 0;
 VAR_4.checkout_index = -1;
 VAR_4.checkout_worktree = -2;
 VAR_4.ignore_unmerged_opt = "--ignore-unmerged";

 VAR_5 = FUNC_9(VAR_6);
 VAR_5 = FUNC_6(&VAR_4, VAR_5);
 VAR_5 = FUNC_5(&VAR_4, VAR_5);

 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3, &VAR_4,
       VAR_5, VAR_0);
 FUNC_0(VAR_5);
 return VAR_7;
}
