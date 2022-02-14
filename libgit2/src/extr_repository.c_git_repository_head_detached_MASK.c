
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_odb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int *) ;

int FUNC_6(git_repository *VAR_2)
{
 git_reference *VAR_3;
 git_odb *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_5(&VAR_4, VAR_2) < 0)
  return -1;

 if (FUNC_2(&VAR_3, VAR_2, VAR_0) < 0)
  return -1;

 if (FUNC_4(VAR_3) == VAR_1) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_5 = FUNC_0(VAR_4, FUNC_3(VAR_3));

 FUNC_1(VAR_3);
 return VAR_5;
}
