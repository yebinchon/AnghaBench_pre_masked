
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; } ;
struct add_opts {int force; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct worktree* FUNC_4 (struct worktree**,int *,char const*) ;
 int FUNC_5 (struct worktree**) ;
 struct worktree** FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct worktree*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, const struct add_opts *VAR_1)
{
 struct worktree **VAR_2;
 struct worktree *VAR_3;
 int VAR_4;

 if (FUNC_3(VAR_0) && !FUNC_7(VAR_0))
  FUNC_2(FUNC_0("'%s' already exists"), VAR_0);

 VAR_2 = FUNC_6(0);







 VAR_3 = FUNC_4(VAR_2 + 1, ((void*)0), VAR_0);
 if (!VAR_3)
  goto done;

 VAR_4 = !!FUNC_8(VAR_3);
 if ((!VAR_4 && VAR_1->force) || (VAR_4 && VAR_1->force > 1)) {
  if (FUNC_1(VAR_3->id))
      FUNC_2(FUNC_0("unable to re-add worktree '%s'"), VAR_0);
  goto done;
 }

 if (VAR_4)
  FUNC_2(FUNC_0("'%s' is a missing but locked worktree;\nuse 'add -f -f' to override, or 'unlock' and 'prune' or 'remove' to clear"), VAR_0);
 else
  FUNC_2(FUNC_0("'%s' is a missing but already registered worktree;\nuse 'add -f' to override, or 'prune' or 'remove' to clear"), VAR_0);

done:
 FUNC_5(VAR_2);
}
