
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int (* git_reference_foreach_cb ) (int *,void*) ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int **,int *) ;

int FUNC_4(
 git_repository *VAR_1,
 git_reference_foreach_cb VAR_2,
 void *VAR_3)
{
 git_reference_iterator *VAR_4;
 git_reference *VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_2(&VAR_4, VAR_1)) < 0)
  return VAR_6;

 while (!(VAR_6 = FUNC_3(&VAR_5, VAR_4))) {
  if ((VAR_6 = VAR_2(VAR_5, VAR_3)) != 0) {
   FUNC_0(VAR_6);
   break;
  }
 }

 if (VAR_6 == VAR_0)
  VAR_6 = 0;

 FUNC_1(VAR_4);
 return VAR_6;
}
