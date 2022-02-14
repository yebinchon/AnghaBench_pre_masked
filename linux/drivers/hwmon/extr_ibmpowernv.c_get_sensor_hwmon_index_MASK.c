
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sensor_data {scalar_t__ opal_index; scalar_t__ type; int hwmon_index; } ;
struct TYPE_2__ {int hwmon_index; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct sensor_data *VAR_2,
      struct sensor_data *VAR_3, int VAR_4)
{
 int VAR_5;




 if (VAR_2->opal_index != VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   if (VAR_3[VAR_5].opal_index == VAR_2->opal_index &&
       VAR_3[VAR_5].type == VAR_2->type)
    return VAR_3[VAR_5].hwmon_index;
 }
 return ++VAR_1[VAR_2->type].hwmon_index;
}
