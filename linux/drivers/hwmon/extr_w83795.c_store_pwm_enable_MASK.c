
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int* pwm_fcms; int* pwm_tfmr; int update_lock; } ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 struct w83795_data* FUNC_7 (struct device*) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_5(VAR_3);
 struct w83795_data *VAR_8 = FUNC_7(VAR_3);
 struct sensor_device_attribute_2 *VAR_9 =
     FUNC_6(VAR_4);
 int VAR_10 = VAR_9->index;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_5, 10, &VAR_11) < 0)
  return -VAR_0;
 if (VAR_11 < 1 || VAR_11 > 2)
  return -VAR_0;


 if (VAR_11 > 1) {
  FUNC_1(VAR_3, "Automatic fan speed control support disabled\n");
  FUNC_1(VAR_3, "Build with CONFIG_SENSORS_W83795_FANCTRL=y if you want it\n");
  return -VAR_1;
 }


 FUNC_3(&VAR_8->update_lock);
 switch (VAR_11) {
 case 1:

  VAR_8->pwm_fcms[0] &= ~(1 << VAR_10);
  FUNC_8(VAR_7, VAR_2, VAR_8->pwm_fcms[0]);

  for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
   VAR_8->pwm_tfmr[VAR_12] &= ~(1 << VAR_10);
   FUNC_8(VAR_7, FUNC_0(VAR_12),
    VAR_8->pwm_tfmr[VAR_12]);
  }
  break;
 case 2:
  VAR_8->pwm_fcms[0] |= (1 << VAR_10);
  FUNC_8(VAR_7, VAR_2, VAR_8->pwm_fcms[0]);
  break;
 }
 FUNC_4(&VAR_8->update_lock);
 return VAR_6;
}
