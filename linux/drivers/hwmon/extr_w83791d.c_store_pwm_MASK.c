
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83791d_data {int update_lock; int * pwm; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (unsigned long,int ,int) ;
 struct w83791d_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct i2c_client *VAR_7 = FUNC_5(VAR_2);
 struct w83791d_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = VAR_6->index;
 unsigned long VAR_10;

 if (FUNC_2(VAR_4, 10, &VAR_10))
  return -VAR_0;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->pwm[VAR_9] = FUNC_0(VAR_10, 0, 255);
 FUNC_7(VAR_7, VAR_1[VAR_9], VAR_8->pwm[VAR_9]);
 FUNC_4(&VAR_8->update_lock);
 return VAR_5;
}
