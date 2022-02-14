
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_branch_t ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *,char const*,int) ;

int FUNC_2(
 git_reference **VAR_1,
 git_repository *VAR_2,
 const char *VAR_3,
 git_branch_t VAR_4)
{
 int VAR_5 = -1;
 FUNC_0(VAR_1 && VAR_2 && VAR_3);

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4 == 128);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);
  if (VAR_5 == VAR_0)
   VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 1);
  break;
 default:
  FUNC_0(0);
 }
 return VAR_5;
}
