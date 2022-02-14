
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int update_lock; int * dts_ext; } ;
struct sensor_device_attribute_2 {int nr; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct w83795_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (long,int,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_7(VAR_2);
 int VAR_6 = VAR_5->nr;
 struct i2c_client *VAR_7 = FUNC_6(VAR_1);
 struct w83795_data *VAR_8 = FUNC_1(VAR_7);
 long VAR_9;

 if (FUNC_2(VAR_3, 10, &VAR_9) < 0)
  return -VAR_0;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->dts_ext[VAR_6] = FUNC_5(VAR_9, -128, 127);
 FUNC_8(VAR_7, FUNC_0(VAR_6), VAR_8->dts_ext[VAR_6]);
 FUNC_4(&VAR_8->update_lock);
 return VAR_4;
}
