
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct atk_sensor_data {int is_valid; int cached_value; scalar_t__ last_updated; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ old_interface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atk_sensor_data*,int *) ;
 int FUNC_1 (struct atk_sensor_data*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct atk_sensor_data *VAR_2, u64 *VAR_3)
{
 int VAR_4;

 if (!VAR_2->is_valid ||
     FUNC_2(VAR_1, VAR_2->last_updated + VAR_0)) {
  if (VAR_2->data->old_interface)
   VAR_4 = FUNC_1(VAR_2, VAR_3);
  else
   VAR_4 = FUNC_0(VAR_2, VAR_3);

  if (VAR_4)
   return VAR_4;

  VAR_2->is_valid = 1;
  VAR_2->last_updated = VAR_1;
  VAR_2->cached_value = *VAR_3;
 } else {
  *VAR_3 = VAR_2->cached_value;
  VAR_4 = 0;
 }

 return VAR_4;
}
