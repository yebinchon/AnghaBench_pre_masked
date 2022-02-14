
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int* pwm_fcms; unsigned long* pwm_tfmr; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 struct w83795_data* FUNC_7 (struct device*) ;
 int FUNC_8 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_2);
 struct w83795_data *VAR_7 = FUNC_7(VAR_2);
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_6(VAR_3);
 int VAR_9 = VAR_8->nr;
 int VAR_10 = VAR_8->index;
 unsigned long VAR_11;

 if (FUNC_2(VAR_4, 10, &VAR_11) < 0)
  return -VAR_0;

 switch (VAR_9) {
 case 129:
  if (VAR_11 != 3 && VAR_11 != 4)
   return -VAR_0;
  VAR_11 -= 3;
  FUNC_3(&VAR_7->update_lock);
  VAR_7->pwm_fcms[1] &= ~(1 << VAR_10);
  VAR_7->pwm_fcms[1] |= VAR_11 << VAR_10;
  FUNC_8(VAR_6, VAR_1, VAR_7->pwm_fcms[1]);
  FUNC_4(&VAR_7->update_lock);
  break;
 case 128:
  FUNC_3(&VAR_7->update_lock);
  VAR_11 = FUNC_1(VAR_11, 0, 0xff);
  FUNC_8(VAR_6, FUNC_0(VAR_10), VAR_11);
  VAR_7->pwm_tfmr[VAR_10] = VAR_11;
  FUNC_4(&VAR_7->update_lock);
  break;
 }
 return VAR_5;
}
