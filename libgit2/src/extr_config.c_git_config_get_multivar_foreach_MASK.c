
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* next ) (int **,TYPE_1__*) ;int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_iterator ;
typedef int (* git_config_foreach_cb ) (int *,void*) ;
typedef int git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__**,int const*,char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(
 const git_config *VAR_1, const char *VAR_2, const char *VAR_3,
 git_config_foreach_cb VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7;
 git_config_iterator *VAR_8;
 git_config_entry *VAR_9;

 if ((VAR_6 = FUNC_1(&VAR_8, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_6;

 VAR_7 = 0;
 while ((VAR_6 = VAR_8->next(&VAR_9, VAR_8)) == 0) {
  VAR_7 = 1;

  if ((VAR_6 = VAR_4(VAR_9, VAR_5)) != 0) {
   FUNC_2(VAR_6);
   break;
  }
 }

 VAR_8->free(VAR_8);
 if (VAR_6 == VAR_0)
  VAR_6 = 0;

 if (VAR_7 == 0 && VAR_6 == 0)
  VAR_6 = FUNC_0(VAR_2);

 return VAR_6;
}
