
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expectations {int encounters; int branch_name; } ;
typedef int git_reference ;
typedef int git_branch_t ;
typedef int git_branch_iterator ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct expectations VAR_1[], git_branch_iterator *VAR_2)
{
 git_reference *VAR_3;
 git_branch_t VAR_4;
 int VAR_5, VAR_6 = 0;

 while ((VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_2)) == 0) {
  for (VAR_6 = 0; VAR_1[VAR_6].branch_name; ++VAR_6) {
   if (FUNC_4(FUNC_3(VAR_3), VAR_1[VAR_6].branch_name) == 0)
    VAR_1[VAR_6].encounters++;
  }

  FUNC_2(VAR_3);
 }

 FUNC_0(VAR_5, VAR_0);
}
