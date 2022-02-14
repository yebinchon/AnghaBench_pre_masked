
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {unsigned long sensors_last_updated; int sensors_valid; unsigned long limits_last_updated; int limits_valid; int* temp; int* pwm; int* pwm_automatic; int* pwm_auto_temp; int force_pwm_max; int alarm; int* temp_min; int* temp_max; int* pwm_max; int* pwm_min; int* pwm_tmin; int lock; void** fan_max; void** fan_min; void* alarms_mask; void** fan; int temperatures_probed; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_10 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (struct i2c_client*,struct adt7470_data*) ;
 void* FUNC_14 (struct i2c_client*,int ) ;
 struct adt7470_data* FUNC_15 (struct device*) ;
 int FUNC_16 (struct i2c_client*,int) ;
 unsigned long VAR_13 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (unsigned long,scalar_t__) ;

__attribute__((used)) static struct adt7470_data *FUNC_20(struct device *VAR_14)
{
 struct adt7470_data *VAR_15 = FUNC_15(VAR_14);
 struct i2c_client *VAR_16 = VAR_15->client;
 unsigned long VAR_17 = VAR_13;
 u8 VAR_18;
 int VAR_19;
 int VAR_20 = 1;
 int VAR_21 = 1;






 if (FUNC_19(VAR_17, VAR_15->sensors_last_updated +
   VAR_12) &&
     VAR_15->sensors_valid)
  VAR_20 = 0;

 if (FUNC_19(VAR_17, VAR_15->limits_last_updated +
   VAR_11) &&
     VAR_15->limits_valid)
  VAR_21 = 0;

 if (!VAR_20 && !VAR_21)
  return VAR_15;

 FUNC_17(&VAR_15->lock);
 if (!VAR_20)
  goto no_sensor_update;

 if (!VAR_15->temperatures_probed)
  FUNC_13(VAR_16, VAR_15);
 else
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
   VAR_15->temp[VAR_19] = FUNC_16(VAR_16,
      FUNC_11(VAR_19));

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
  VAR_15->fan[VAR_19] = FUNC_14(VAR_16,
      FUNC_0(VAR_19));

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  int VAR_22;
  int VAR_23;

  VAR_15->pwm[VAR_19] = FUNC_16(VAR_16,
      FUNC_3(VAR_19));

  if (VAR_19 % 2)
   VAR_23 = VAR_4;
  else
   VAR_23 = VAR_3;

  VAR_22 = FUNC_5(VAR_19);
  if (FUNC_16(VAR_16, VAR_22) & VAR_23)
   VAR_15->pwm_automatic[VAR_19] = 1;
  else
   VAR_15->pwm_automatic[VAR_19] = 0;

  VAR_22 = FUNC_4(VAR_19);
  VAR_18 = FUNC_16(VAR_16, VAR_22);
  if (!(VAR_19 % 2))
   VAR_15->pwm_auto_temp[VAR_19] = VAR_18 >> 4;
  else
   VAR_15->pwm_auto_temp[VAR_19] = VAR_18 & 0xF;
 }

 if (FUNC_16(VAR_16, VAR_9) &
     VAR_1)
  VAR_15->force_pwm_max = 1;
 else
  VAR_15->force_pwm_max = 0;

 VAR_15->alarm = FUNC_16(VAR_16, VAR_6);
 if (VAR_15->alarm & VAR_2)
  VAR_15->alarm |= FUNC_12(FUNC_16(VAR_16,
       VAR_8));
 VAR_15->alarms_mask = FUNC_14(VAR_16,
         VAR_7);

 VAR_15->sensors_last_updated = VAR_17;
 VAR_15->sensors_valid = 1;

no_sensor_update:
 if (!VAR_21)
  goto out;

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_15->temp_min[VAR_19] = FUNC_16(VAR_16,
      FUNC_10(VAR_19));
  VAR_15->temp_max[VAR_19] = FUNC_16(VAR_16,
      FUNC_9(VAR_19));
 }

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  VAR_15->fan_min[VAR_19] = FUNC_14(VAR_16,
      FUNC_2(VAR_19));
  VAR_15->fan_max[VAR_19] = FUNC_14(VAR_16,
      FUNC_1(VAR_19));
 }

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  VAR_15->pwm_max[VAR_19] = FUNC_16(VAR_16,
      FUNC_6(VAR_19));
  VAR_15->pwm_min[VAR_19] = FUNC_16(VAR_16,
      FUNC_7(VAR_19));
  VAR_15->pwm_tmin[VAR_19] = FUNC_16(VAR_16,
      FUNC_8(VAR_19));
 }

 VAR_15->limits_last_updated = VAR_17;
 VAR_15->limits_valid = 1;

out:
 FUNC_18(&VAR_15->lock);
 return VAR_15;
}
