
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; int is_detached; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (struct worktree**) ;
 struct worktree** FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct worktree*,char const*) ;
 scalar_t__ FUNC_5 (struct worktree*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0)
{
 struct worktree **VAR_1 = FUNC_3(0);
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  struct worktree *VAR_3 = VAR_1[VAR_2];

  if (!VAR_3->is_detached)
   continue;

  if (FUNC_5(VAR_3, VAR_0))
   FUNC_1(FUNC_0("Branch %s is being rebased at %s"),
       VAR_0, VAR_3->path);

  if (FUNC_4(VAR_3, VAR_0))
   FUNC_1(FUNC_0("Branch %s is being bisected at %s"),
       VAR_0, VAR_3->path);
 }

 FUNC_2(VAR_1);
}
