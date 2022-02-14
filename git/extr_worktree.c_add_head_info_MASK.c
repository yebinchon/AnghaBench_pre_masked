
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int is_detached; int head_ref; int head_oid; } ;


 int VAR_0 ;
 int FUNC_0 (struct worktree*) ;
 char* FUNC_1 (int ,char*,int ,int *,int*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct worktree *VAR_1)
{
 int VAR_2;
 const char *VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_1),
      "HEAD",
      0,
      &VAR_1->head_oid, &VAR_2);
 if (!VAR_3)
  return;

 if (VAR_2 & VAR_0)
  VAR_1->head_ref = FUNC_2(VAR_3);
 else
  VAR_1->is_detached = 1;
}
