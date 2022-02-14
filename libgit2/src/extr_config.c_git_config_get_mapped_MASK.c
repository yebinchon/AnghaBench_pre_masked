
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_configmap ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int const*,size_t,int ) ;

int FUNC_3(
 int *VAR_1,
 const git_config *VAR_2,
 const char *VAR_3,
 const git_configmap *VAR_4,
 size_t VAR_5)
{
 git_config_entry *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_0(&VAR_6, VAR_2, VAR_3, 1, VAR_0)) < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_5, VAR_6->value);
 FUNC_1(VAR_6);

 return VAR_7;
}
