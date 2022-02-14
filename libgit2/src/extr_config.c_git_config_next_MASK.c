
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* next ) (int **,TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_iterator ;
typedef int git_config_entry ;


 int FUNC_0 (int **,TYPE_1__*) ;

int FUNC_1(git_config_entry **VAR_0, git_config_iterator *VAR_1)
{
 return VAR_1->next(VAR_0, VAR_1);
}
