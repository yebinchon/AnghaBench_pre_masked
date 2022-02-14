
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct map_data {int default_value; int map_count; scalar_t__ maps; int name; } ;
typedef scalar_t__ git_configmap_item ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 struct map_data* VAR_0 ;
 int FUNC_0 (TYPE_1__**,int *,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,scalar_t__,int ,int ) ;
 int FUNC_3 (int*,int ) ;

int FUNC_4(int *VAR_1, git_config *VAR_2, git_configmap_item VAR_3)
{
 int VAR_4 = 0;
 struct map_data *VAR_5 = &VAR_0[(int)VAR_3];
 git_config_entry *VAR_6;

 if ((VAR_4 = FUNC_0(&VAR_6, VAR_2, VAR_5->name, 0)) < 0)
  return VAR_4;

 if (!VAR_6)
  *VAR_1 = VAR_5->default_value;
 else if (VAR_5->maps)
  VAR_4 = FUNC_2(
   VAR_1, VAR_5->maps, VAR_5->map_count, VAR_6->value);
 else
  VAR_4 = FUNC_3(VAR_1, VAR_6->value);

 FUNC_1(VAR_6);
 return VAR_4;
}
