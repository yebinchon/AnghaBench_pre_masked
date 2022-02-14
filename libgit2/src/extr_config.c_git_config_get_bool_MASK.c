
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int ) ;

int FUNC_3(int *VAR_1, const git_config *VAR_2, const char *VAR_3)
{
 git_config_entry *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3, 1, VAR_0)) < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_4->value);
 FUNC_1(VAR_4);

 return VAR_5;
}
