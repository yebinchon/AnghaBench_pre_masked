
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char* path; char* head_ref; scalar_t__ is_detached; int head_oid; scalar_t__ is_bare; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct worktree *VAR_0)
{
 FUNC_1("worktree %s\n", VAR_0->path);
 if (VAR_0->is_bare)
  FUNC_1("bare\n");
 else {
  FUNC_1("HEAD %s\n", FUNC_0(&VAR_0->head_oid));
  if (VAR_0->is_detached)
   FUNC_1("detached\n");
  else if (VAR_0->head_ref)
   FUNC_1("branch %s\n", VAR_0->head_ref);
 }
 FUNC_1("\n");
}
