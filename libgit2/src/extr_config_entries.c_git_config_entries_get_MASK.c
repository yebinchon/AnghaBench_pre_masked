
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_config_entry ;
typedef int git_config_entries ;
struct TYPE_5__ {TYPE_1__* last; } ;
typedef TYPE_2__ config_entry_list ;
struct TYPE_4__ {int * entry; } ;


 int FUNC_0 (TYPE_2__**,int *,char const*) ;

int FUNC_1(git_config_entry **VAR_0, git_config_entries *VAR_1, const char *VAR_2)
{
 config_entry_list *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2)) < 0)
  return VAR_4;
 *VAR_0 = VAR_3->last->entry;

 return 0;
}
