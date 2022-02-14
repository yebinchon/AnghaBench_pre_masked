
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int ) ;

int FUNC_4(
 git_commit **VAR_0,
 const git_commit *VAR_1,
 unsigned int VAR_2)
{
 git_commit *VAR_3, *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(VAR_0 && VAR_1);

 if (FUNC_1(&VAR_3, (git_commit *)VAR_1) < 0)
  return -1;

 if (VAR_2 == 0) {
  *VAR_0 = VAR_3;
  return 0;
 }

 while (VAR_2--) {
  VAR_5 = FUNC_3(&VAR_4, VAR_3, 0);

  FUNC_2(VAR_3);

  if (VAR_5 < 0)
   return VAR_5;

  VAR_3 = VAR_4;
 }

 *VAR_0 = VAR_4;
 return 0;
}
