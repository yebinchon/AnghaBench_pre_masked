
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {scalar_t__ chip_type; int has_in; int has_fan; int enable_dts; int has_dts; int has_gain; int has_pwm; int enable_beep; int hwmon_dev; int update_lock; int bank; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct device*,char*,int,unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 struct w83795_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct i2c_client*,struct w83795_data*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct w83795_data*,int,int,int) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (struct device*,int ) ;
 int FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct i2c_client*,int ) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_17,
   const struct i2c_device_id *VAR_18)
{
 int VAR_19;
 u8 VAR_20;
 struct device *VAR_21 = &VAR_17->dev;
 struct w83795_data *VAR_22;
 int VAR_23;

 VAR_22 = FUNC_4(VAR_21, sizeof(struct w83795_data), VAR_1);
 if (!VAR_22)
  return -VAR_0;

 FUNC_6(VAR_17, VAR_22);
 VAR_22->chip_type = VAR_18->driver_data;
 VAR_22->bank = FUNC_7(VAR_17, VAR_3);
 FUNC_8(&VAR_22->update_lock);


 FUNC_12(VAR_17);


 VAR_22->has_in = FUNC_13(VAR_17, VAR_12)
       | (FUNC_13(VAR_17, VAR_13) << 8);
 VAR_22->has_fan = FUNC_13(VAR_17, VAR_6)
        | (FUNC_13(VAR_17, VAR_7) << 8);


 VAR_20 = FUNC_13(VAR_17, VAR_9);
 if (VAR_20 & 0x20)
  VAR_22->enable_dts = 1;
 FUNC_9(VAR_22, (VAR_20 >> 2) & 0x3, 5, 16);
 FUNC_9(VAR_22, VAR_20 & 0x3, 4, 15);
 VAR_20 = FUNC_13(VAR_17, VAR_10);
 FUNC_9(VAR_22, VAR_20 >> 6, 3, 20);
 FUNC_9(VAR_22, (VAR_20 >> 4) & 0x3, 2, 19);
 FUNC_9(VAR_22, (VAR_20 >> 2) & 0x3, 1, 18);
 FUNC_9(VAR_22, VAR_20 & 0x3, 0, 17);


 if (VAR_22->enable_dts) {
  if (1 & FUNC_13(VAR_17, VAR_4))
   VAR_22->enable_dts |= 2;
  VAR_22->has_dts = FUNC_13(VAR_17, VAR_5);
 }


 if (VAR_22->enable_dts == 1) {
  for (VAR_19 = 0; VAR_19 < 8; VAR_19++) {
   if (!(VAR_22->has_dts & (1 << VAR_19)))
    continue;
   VAR_20 = FUNC_13(VAR_17, FUNC_2(VAR_19));
   FUNC_3(&VAR_17->dev,
     "PECI agent %d Tbase temperature: %u\n",
     VAR_19 + 1, (unsigned int)VAR_20 & 0x7f);
  }
 }

 VAR_22->has_gain = FUNC_13(VAR_17, VAR_11) & 0x0f;


 if (VAR_22->chip_type == VAR_16)
  VAR_22->has_pwm = 8;
 else
  VAR_22->has_pwm = 2;


 if (VAR_22->chip_type == VAR_16) {

  VAR_22->enable_beep = 1;
 } else {




  VAR_20 = FUNC_13(VAR_17, VAR_8);
  if ((VAR_20 & VAR_2) == 0)
   VAR_22->enable_beep = 1;
 }

 VAR_23 = FUNC_11(VAR_21, VAR_14);
 if (VAR_23)
  goto exit_remove;

 if (VAR_22->chip_type == VAR_16)
  FUNC_10(VAR_17);

 VAR_22->hwmon_dev = FUNC_5(VAR_21);
 if (FUNC_0(VAR_22->hwmon_dev)) {
  VAR_23 = FUNC_1(VAR_22->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_11(VAR_21, VAR_15);
 return VAR_23;
}
