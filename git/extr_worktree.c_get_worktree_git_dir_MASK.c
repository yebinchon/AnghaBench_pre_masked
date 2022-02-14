
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; } ;


 char const* FUNC_0 () ;
 char const* FUNC_1 () ;
 char const* FUNC_2 (char*,int ) ;

const char *FUNC_3(const struct worktree *VAR_0)
{
 if (!VAR_0)
  return FUNC_1();
 else if (!VAR_0->id)
  return FUNC_0();
 else
  return FUNC_2("worktrees/%s", VAR_0->id);
}
