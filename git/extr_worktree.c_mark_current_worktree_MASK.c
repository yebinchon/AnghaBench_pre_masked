
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int is_current; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 char* FUNC_5 (struct worktree*) ;

__attribute__((used)) static void FUNC_6(struct worktree **VAR_0)
{
 char *VAR_1 = FUNC_1(FUNC_4());
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
  struct worktree *VAR_3 = VAR_0[VAR_2];
  const char *VAR_4 = FUNC_5(VAR_3);

  if (!FUNC_3(VAR_1, FUNC_0(VAR_4))) {
   VAR_3->is_current = 1;
   break;
  }
 }
 FUNC_2(VAR_1);
}
