
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct emc2103_data {int valid; int temp_count; int update_lock; scalar_t__ last_updated; int fan_target; int fan_tach; int temp_max_alarm; int temp_min_alarm; int * temp_max; int * temp_min; int * temp; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 struct emc2103_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int *,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int *) ;
 int FUNC_6 (struct i2c_client*,int ,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct emc2103_data *FUNC_8(struct device *VAR_11)
{
 struct emc2103_data *VAR_12 = FUNC_0(VAR_11);
 struct i2c_client *VAR_13 = VAR_12->client;

 FUNC_1(&VAR_12->update_lock);

 if (FUNC_7(VAR_10, VAR_12->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_12->valid) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_12->temp_count; VAR_14++) {
   FUNC_5(VAR_13, VAR_5[VAR_14], &VAR_12->temp[VAR_14]);
   FUNC_6(VAR_13, VAR_8[VAR_14],
    &VAR_12->temp_min[VAR_14]);
   FUNC_6(VAR_13, VAR_6[VAR_14],
    &VAR_12->temp_max[VAR_14]);
  }

  FUNC_6(VAR_13, VAR_9,
   &VAR_12->temp_min_alarm);
  FUNC_6(VAR_13, VAR_7,
   &VAR_12->temp_max_alarm);

  FUNC_4(VAR_13, &VAR_12->fan_tach,
   VAR_1, VAR_2);
  FUNC_4(VAR_13, &VAR_12->fan_target,
   VAR_3, VAR_4);
  FUNC_3(VAR_13);

  VAR_12->last_updated = VAR_10;
  VAR_12->valid = 1;
 }

 FUNC_2(&VAR_12->update_lock);

 return VAR_12;
}
