
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;

int FUNC_3(git_repository *VAR_1)
{
 git_reference *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2, VAR_1);
 FUNC_1(VAR_2);

 if (VAR_3 == VAR_0) {
  FUNC_0();
  return 1;
 }

 if (VAR_3 < 0)
  return -1;

 return 0;
}
