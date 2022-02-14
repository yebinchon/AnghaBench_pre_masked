
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int **,int *,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(git_reference **VAR_4, git_repository *VAR_5)
{
 git_reference *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 if ((VAR_7 = FUNC_2(&VAR_6, VAR_5, VAR_2)) < 0)
  return VAR_7;

 if (FUNC_5(VAR_6) == VAR_3) {
  *VAR_4 = VAR_6;
  return 0;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_5, FUNC_4(VAR_6), -1);
 FUNC_1(VAR_6);

 return VAR_7 == VAR_0 ? VAR_1 : VAR_7;
}
