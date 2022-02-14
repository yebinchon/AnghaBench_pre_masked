
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int (* git_reference_foreach_name_cb ) (char const*,void*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*) ;
 int FUNC_3 (char const**,int *) ;

int FUNC_4(
 git_repository *VAR_1,
 const char *VAR_2,
 git_reference_foreach_name_cb VAR_3,
 void *VAR_4)
{
 git_reference_iterator *VAR_5;
 const char *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_2(&VAR_5, VAR_1, VAR_2)) < 0)
  return VAR_7;

 while (!(VAR_7 = FUNC_3(&VAR_6, VAR_5))) {
  if ((VAR_7 = VAR_3(VAR_6, VAR_4)) != 0) {
   FUNC_0(VAR_7);
   break;
  }
 }

 if (VAR_7 == VAR_0)
  VAR_7 = 0;

 FUNC_1(VAR_5);
 return VAR_7;
}
