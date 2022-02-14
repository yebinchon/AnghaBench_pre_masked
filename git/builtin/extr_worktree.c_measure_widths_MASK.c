
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int head_oid; int path; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct worktree **VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {
  int VAR_4;
  int VAR_5 = FUNC_1(VAR_0[VAR_3]->path);

  if (VAR_5 > *VAR_2)
   *VAR_2 = VAR_5;
  VAR_4 = FUNC_1(FUNC_0(&VAR_0[VAR_3]->head_oid, *VAR_1));
  if (VAR_4 > *VAR_1)
   *VAR_1 = VAR_4;
 }
}
