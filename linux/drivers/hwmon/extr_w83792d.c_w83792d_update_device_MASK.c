
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83792d_data {int valid; int* in; int* in_max; int* in_min; int low_bits; int* fan; int* fan_min; int* pwm; int* pwmenable; int* temp1; int** temp_add; int* fan_div; int alarms; int chassis; int* thermal_cruise; int* tolerance; int** sf2_points; int** sf2_levels; int update_lock; scalar_t__ last_updated; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int ** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int ** VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int ** VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int FUNC_0 (struct device*,char*) ;
 struct w83792d_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 int FUNC_7 (struct w83792d_data*,struct device*) ;
 int FUNC_8 (struct i2c_client*,int ) ;

__attribute__((used)) static struct w83792d_data *FUNC_9(struct device *VAR_22)
{
 struct i2c_client *VAR_23 = FUNC_6(VAR_22);
 struct w83792d_data *VAR_24 = FUNC_1(VAR_23);
 int VAR_25, VAR_26;
 u8 VAR_27[4], VAR_28;

 FUNC_2(&VAR_24->update_lock);

 if (FUNC_4
     (VAR_21 - VAR_24->last_updated, (unsigned long) (VAR_0 * 3))
     || FUNC_5(VAR_21, VAR_24->last_updated) || !VAR_24->valid) {
  FUNC_0(VAR_22, "Starting device update\n");


  for (VAR_25 = 0; VAR_25 < 9; VAR_25++) {
   VAR_24->in[VAR_25] = FUNC_8(VAR_23,
      VAR_9[VAR_25]);
   VAR_24->in_max[VAR_25] = FUNC_8(VAR_23,
      VAR_10[VAR_25]);
   VAR_24->in_min[VAR_25] = FUNC_8(VAR_23,
      VAR_11[VAR_25]);
  }
  VAR_24->low_bits = FUNC_8(VAR_23,
      VAR_13) +
     (FUNC_8(VAR_23,
      VAR_14) << 8);
  for (VAR_25 = 0; VAR_25 < 7; VAR_25++) {

   VAR_24->fan[VAR_25] = FUNC_8(VAR_23,
      VAR_5[VAR_25]);
   VAR_24->fan_min[VAR_25] = FUNC_8(VAR_23,
      VAR_8[VAR_25]);

   VAR_24->pwm[VAR_25] = FUNC_8(VAR_23,
      VAR_16[VAR_25]);
  }

  VAR_28 = FUNC_8(VAR_23, VAR_6);
  VAR_24->pwmenable[0] = VAR_28 & 0x03;
  VAR_24->pwmenable[1] = (VAR_28>>2) & 0x03;
  VAR_24->pwmenable[2] = (VAR_28>>4) & 0x03;

  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   VAR_24->temp1[VAR_25] = FUNC_8(VAR_23,
       VAR_17[VAR_25]);
  }
  for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
   for (VAR_26 = 0; VAR_26 < 6; VAR_26++) {
    VAR_24->temp_add[VAR_25][VAR_26] = FUNC_8(
     VAR_23, VAR_18[VAR_25][VAR_26]);
   }
  }


  for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
   VAR_27[VAR_25] = FUNC_8(VAR_23,
       VAR_7[VAR_25]);
  }
  VAR_24->fan_div[0] = VAR_27[0] & 0x07;
  VAR_24->fan_div[1] = (VAR_27[0] >> 4) & 0x07;
  VAR_24->fan_div[2] = VAR_27[1] & 0x07;
  VAR_24->fan_div[3] = (VAR_27[1] >> 4) & 0x07;
  VAR_24->fan_div[4] = VAR_27[2] & 0x07;
  VAR_24->fan_div[5] = (VAR_27[2] >> 4) & 0x07;
  VAR_24->fan_div[6] = VAR_27[3] & 0x07;


  VAR_24->alarms = FUNC_8(VAR_23, VAR_1) +
   (FUNC_8(VAR_23, VAR_2) << 8) +
   (FUNC_8(VAR_23, VAR_3) << 16);


  VAR_24->chassis = (FUNC_8(VAR_23,
   VAR_4) >> 5) & 0x01;


  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   VAR_24->thermal_cruise[VAR_25] =
    FUNC_8(VAR_23,
    VAR_19[VAR_25]) & 0x7f;
  }


  VAR_28 = FUNC_8(VAR_23, VAR_20[0]);
  VAR_24->tolerance[0] = VAR_28 & 0x0f;
  VAR_24->tolerance[1] = (VAR_28 >> 4) & 0x0f;
  VAR_24->tolerance[2] = FUNC_8(VAR_23,
     VAR_20[2]) & 0x0f;


  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
    VAR_24->sf2_points[VAR_25][VAR_26]
      = FUNC_8(VAR_23,
     VAR_15[VAR_25][VAR_26]) & 0x7f;
   }
  }


  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   VAR_28 = FUNC_8(VAR_23,
      VAR_12[VAR_25][0]);
   VAR_24->sf2_levels[VAR_25][0] = VAR_28 & 0x0f;
   VAR_24->sf2_levels[VAR_25][1] = (VAR_28 >> 4) & 0x0f;
   VAR_28 = FUNC_8(VAR_23,
      VAR_12[VAR_25][2]);
   VAR_24->sf2_levels[VAR_25][2] = (VAR_28 >> 4) & 0x0f;
   VAR_24->sf2_levels[VAR_25][3] = VAR_28 & 0x0f;
  }

  VAR_24->last_updated = VAR_21;
  VAR_24->valid = 1;
 }

 FUNC_3(&VAR_24->update_lock);





 return VAR_24;
}
