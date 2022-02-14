
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* del_multivar ) (TYPE_1__*,char const*,char const*) ;} ;
typedef TYPE_1__ git_config_backend ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__**,int *,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*) ;

int FUNC_2(git_config *VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_config_backend *VAR_5;

 if (FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_0) < 0)
  return VAR_1;

 return VAR_5->del_multivar(VAR_5, VAR_3, VAR_4);
}
