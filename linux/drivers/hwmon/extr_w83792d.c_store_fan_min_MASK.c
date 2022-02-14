
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int update_lock; int * fan_min; int * fan_div; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int * VAR_0 ;
 struct w83792d_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = VAR_5->index - 1;
 struct i2c_client *VAR_7 = FUNC_6(VAR_1);
 struct w83792d_data *VAR_8 = FUNC_2(VAR_7);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(&VAR_8->update_lock);
 VAR_8->fan_min[VAR_6] = FUNC_1(VAR_9, FUNC_0(VAR_8->fan_div[VAR_6]));
 FUNC_8(VAR_7, VAR_0[VAR_6],
    VAR_8->fan_min[VAR_6]);
 FUNC_5(&VAR_8->update_lock);

 return VAR_4;
}
