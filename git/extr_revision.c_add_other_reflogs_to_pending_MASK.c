
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {scalar_t__ is_current; } ;
struct all_refs_cb {struct worktree* wt; } ;


 int FUNC_0 (struct worktree**) ;
 int FUNC_1 (struct worktree*) ;
 struct worktree** FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,struct all_refs_cb*) ;

__attribute__((used)) static void FUNC_4(struct all_refs_cb *VAR_1)
{
 struct worktree **VAR_2, **VAR_3;

 VAR_2 = FUNC_2(0);
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++) {
  struct worktree *VAR_4 = *VAR_3;

  if (VAR_4->is_current)
   continue;

  VAR_1->wt = VAR_4;
  FUNC_3(FUNC_1(VAR_4),
         VAR_0,
         VAR_1);
 }
 FUNC_0(VAR_2);
}
