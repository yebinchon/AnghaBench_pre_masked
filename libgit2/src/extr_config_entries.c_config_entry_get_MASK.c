
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; } ;
typedef TYPE_1__ git_config_entries ;
typedef int config_entry_list ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;

int FUNC_1(config_entry_list **VAR_1, git_config_entries *VAR_2, const char *VAR_3)
{
 config_entry_list *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2->map, VAR_3)) == ((void*)0))
  return VAR_0;

 *VAR_1 = VAR_4;

 return 0;
}
