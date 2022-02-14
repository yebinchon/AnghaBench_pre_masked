
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int valid; int stat1; int stat2; int pwm1; int* fan; int fan1_div; int* pwm1_auto_point_pwm; int* temp1_auto_point_temp; int* temp2_auto_point_temp; int pwm1_auto_channels_temp; int pwm1_enable; int update_lock; scalar_t__ last_updated; scalar_t__* temp; struct i2c_client* client; } ;
typedef scalar_t__ int8_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct amc6821_data* FUNC_0 (struct device*) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_16 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct amc6821_data *FUNC_5(struct device *VAR_17)
{
 struct amc6821_data *VAR_18 = FUNC_0(VAR_17);
 struct i2c_client *VAR_19 = VAR_18->client;
 int VAR_20 = VAR_11;
 u8 VAR_21;
 int VAR_22;

 FUNC_2(&VAR_18->update_lock);

 if (FUNC_4(VAR_15, VAR_18->last_updated + VAR_20) ||
   !VAR_18->valid) {

  for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++)
   VAR_18->temp[VAR_22] = (int8_t)FUNC_1(
    VAR_19, VAR_16[VAR_22]);

  VAR_18->stat1 = FUNC_1(VAR_19,
   VAR_8);
  VAR_18->stat2 = FUNC_1(VAR_19,
   VAR_9);

  VAR_18->pwm1 = FUNC_1(VAR_19,
   VAR_3);
  for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
   VAR_18->fan[VAR_22] = FUNC_1(
     VAR_19,
     VAR_14[VAR_22]);
   VAR_18->fan[VAR_22] += FUNC_1(
     VAR_19,
     VAR_13[VAR_22]) << 8;
  }
  VAR_18->fan1_div = FUNC_1(VAR_19,
   VAR_2);
  VAR_18->fan1_div = VAR_18->fan1_div & VAR_0 ? 4 : 2;

  VAR_18->pwm1_auto_point_pwm[0] = 0;
  VAR_18->pwm1_auto_point_pwm[2] = 255;
  VAR_18->pwm1_auto_point_pwm[1] = FUNC_1(VAR_19,
   VAR_4);

  VAR_18->temp1_auto_point_temp[0] =
   FUNC_1(VAR_19,
     VAR_6);
  VAR_18->temp2_auto_point_temp[0] =
    VAR_18->temp1_auto_point_temp[0];
  VAR_21 = FUNC_1(VAR_19,
   VAR_5);
  VAR_18->temp1_auto_point_temp[1] = (VAR_21 & 0xF8) >> 1;
  VAR_21 &= 0x07;
  VAR_21 = 0x20 >> VAR_21;
  if (VAR_21 > 0)
   VAR_18->temp1_auto_point_temp[2] =
    VAR_18->temp1_auto_point_temp[1] +
    (VAR_18->pwm1_auto_point_pwm[2] -
    VAR_18->pwm1_auto_point_pwm[1]) / VAR_21;
  else
   VAR_18->temp1_auto_point_temp[2] = 255;

  VAR_21 = FUNC_1(VAR_19,
   VAR_7);
  VAR_18->temp2_auto_point_temp[1] = (VAR_21 & 0xF8) >> 1;
  VAR_21 &= 0x07;
  VAR_21 = 0x20 >> VAR_21;
  if (VAR_21 > 0)
   VAR_18->temp2_auto_point_temp[2] =
    VAR_18->temp2_auto_point_temp[1] +
    (VAR_18->pwm1_auto_point_pwm[2] -
    VAR_18->pwm1_auto_point_pwm[1]) / VAR_21;
  else
   VAR_18->temp2_auto_point_temp[2] = 255;

  VAR_21 = FUNC_1(VAR_19, VAR_1);
  VAR_21 = (VAR_21 >> 5) & 0x3;
  switch (VAR_21) {
  case 0:
   VAR_18->pwm1_auto_channels_temp = 0;
   VAR_18->pwm1_enable = 1;
   break;
  case 2:
   VAR_18->pwm1_auto_channels_temp = 2;
   VAR_18->pwm1_enable = 2;
   break;
  case 3:
   VAR_18->pwm1_auto_channels_temp = 3;
   VAR_18->pwm1_enable = 3;
   break;
  case 1:



   VAR_18->pwm1_auto_channels_temp = 0;
   VAR_18->pwm1_enable = 0;
   break;
  }

  VAR_18->last_updated = VAR_15;
  VAR_18->valid = 1;
 }
 FUNC_3(&VAR_18->update_lock);
 return VAR_18;
}
