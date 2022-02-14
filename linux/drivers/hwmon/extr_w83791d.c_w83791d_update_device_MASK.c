
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83791d_data {int valid; int* in; int* in_max; int* in_min; int* fan; int* fan_min; int* fan_div; int* pwm; int* pwm_enable; int* temp_target; int* temp_tolerance; int* temp1; int** temp_add; int alarms; int beep_mask; int beep_enable; int vid; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int ** VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct device*,char*) ;
 struct w83791d_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 int FUNC_6 (struct w83791d_data*,struct device*) ;
 int FUNC_7 (struct i2c_client*,int ) ;

__attribute__((used)) static struct w83791d_data *FUNC_8(struct device *VAR_25)
{
 struct i2c_client *VAR_26 = FUNC_5(VAR_25);
 struct w83791d_data *VAR_27 = FUNC_1(VAR_26);
 int VAR_28, VAR_29;
 u8 VAR_30[3];
 u8 VAR_31;

 FUNC_2(&VAR_27->update_lock);

 if (FUNC_4(VAR_24, VAR_27->last_updated + (VAR_1 * 3))
   || !VAR_27->valid) {
  FUNC_0(VAR_25, "Starting w83791d device update\n");


  for (VAR_28 = 0; VAR_28 < VAR_4; VAR_28++) {
   VAR_27->in[VAR_28] = FUNC_7(VAR_26,
      VAR_14[VAR_28]);
   VAR_27->in_max[VAR_28] = FUNC_7(VAR_26,
      VAR_15[VAR_28]);
   VAR_27->in_min[VAR_28] = FUNC_7(VAR_26,
      VAR_16[VAR_28]);
  }


  for (VAR_28 = 0; VAR_28 < VAR_2; VAR_28++) {

   VAR_27->fan[VAR_28] = FUNC_7(VAR_26,
      VAR_10[VAR_28]);
   VAR_27->fan_min[VAR_28] = FUNC_7(VAR_26,
      VAR_13[VAR_28]);
  }


  for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
   VAR_30[VAR_28] = FUNC_7(VAR_26,
      VAR_12[VAR_28]);
  }
  VAR_27->fan_div[0] = (VAR_30[0] >> 4) & 0x03;
  VAR_27->fan_div[1] = (VAR_30[0] >> 6) & 0x03;
  VAR_27->fan_div[2] = (VAR_30[1] >> 6) & 0x03;
  VAR_27->fan_div[3] = VAR_30[2] & 0x07;
  VAR_27->fan_div[4] = (VAR_30[2] >> 4) & 0x07;





  VAR_31 = FUNC_7(VAR_26, VAR_22);
  for (VAR_28 = 0; VAR_28 < 3; VAR_28++)
   VAR_27->fan_div[VAR_28] |= (VAR_31 >> (3 + VAR_28)) & 0x04;


  for (VAR_28 = 0; VAR_28 < VAR_3; VAR_28++) {
   VAR_27->pwm[VAR_28] = FUNC_7(VAR_26,
      VAR_17[VAR_28]);
  }


  for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
   VAR_30[VAR_28] = FUNC_7(VAR_26,
      VAR_11[VAR_28]);
  }
  VAR_27->pwm_enable[0] = (VAR_30[0] >> 2) & 0x03;
  VAR_27->pwm_enable[1] = (VAR_30[0] >> 4) & 0x03;
  VAR_27->pwm_enable[2] = (VAR_30[1] >> 2) & 0x03;


  for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
   VAR_27->temp_target[VAR_28] = FUNC_7(VAR_26,
    VAR_20[VAR_28]) & 0x7f;
  }


  for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
   VAR_30[VAR_28] = FUNC_7(VAR_26,
     VAR_21[VAR_28]);
  }
  VAR_27->temp_tolerance[0] = VAR_30[0] & 0x0f;
  VAR_27->temp_tolerance[1] = (VAR_30[0] >> 4) & 0x0f;
  VAR_27->temp_tolerance[2] = VAR_30[1] & 0x0f;


  for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
   VAR_27->temp1[VAR_28] = FUNC_7(VAR_26,
      VAR_18[VAR_28]);
  }


  for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
   for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
    VAR_27->temp_add[VAR_28][VAR_29] =
     (FUNC_7(VAR_26,
     VAR_19[VAR_28][VAR_29 * 2]) << 8) |
     FUNC_7(VAR_26,
     VAR_19[VAR_28][VAR_29 * 2 + 1]);
   }
  }


  VAR_27->alarms =
   FUNC_7(VAR_26, VAR_5) +
   (FUNC_7(VAR_26, VAR_6) << 8) +
   (FUNC_7(VAR_26, VAR_7) << 16);


  VAR_27->beep_mask =
   FUNC_7(VAR_26, VAR_8[0]) +
   (FUNC_7(VAR_26, VAR_8[1]) << 8) +
   (FUNC_7(VAR_26, VAR_8[2]) << 16);


  VAR_27->beep_enable =
   (VAR_27->beep_mask >> VAR_0) & 0x01;


  VAR_28 = FUNC_7(VAR_26, VAR_23);
  VAR_27->vid = VAR_28 & 0x0f;
  VAR_27->vid |= (FUNC_7(VAR_26, VAR_9) & 0x01)
    << 4;

  VAR_27->last_updated = VAR_24;
  VAR_27->valid = 1;
 }

 FUNC_3(&VAR_27->update_lock);





 return VAR_27;
}
