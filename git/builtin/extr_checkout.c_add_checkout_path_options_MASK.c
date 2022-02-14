
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct checkout_opts {int ignore_skipworktree; int patch_mode; int writeout_stage; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int *,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,char*,int *,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct option*) ;
 struct option* FUNC_5 (struct option*,struct option*) ;

__attribute__((used)) static struct option *FUNC_6(struct checkout_opts *VAR_1,
      struct option *VAR_2)
{
 struct option VAR_3[] = {
  FUNC_3('2', "ours", &VAR_1->writeout_stage,
         FUNC_0("checkout our version for unmerged files"),
         2, VAR_0),
  FUNC_3('3', "theirs", &VAR_1->writeout_stage,
         FUNC_0("checkout their version for unmerged files"),
         3, VAR_0),
  FUNC_1('p', "patch", &VAR_1->patch_mode, FUNC_0("select hunks interactively")),
  FUNC_1(0, "ignore-skip-worktree-bits", &VAR_1->ignore_skipworktree,
    FUNC_0("do not limit pathspecs to sparse entries only")),
  FUNC_2()
 };
 struct option *VAR_4 = FUNC_5(VAR_2, VAR_3);
 FUNC_4(VAR_2);
 return VAR_4;
}
