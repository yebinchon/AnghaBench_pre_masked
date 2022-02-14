
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_iterator ;
typedef int (* git_config_foreach_cb ) (int *,void*) ;
typedef int git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int const*,char const*) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int) ;

int FUNC_4(
 const git_config *VAR_1,
 const char *VAR_2,
 git_config_foreach_cb VAR_3,
 void *VAR_4)
{
 int VAR_5;
 git_config_iterator *VAR_6;
 git_config_entry *VAR_7;

 if ((VAR_5 = FUNC_1(&VAR_6, VAR_1, VAR_2)) < 0)
  return VAR_5;

 while (!(VAR_5 = FUNC_2(&VAR_7, VAR_6))) {
  if ((VAR_5 = VAR_3(VAR_7, VAR_4)) != 0) {
   FUNC_3(VAR_5);
   break;
  }
 }

 FUNC_0(VAR_6);

 if (VAR_5 == VAR_0)
  VAR_5 = 0;

 return VAR_5;
}
