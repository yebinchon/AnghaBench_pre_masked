
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int update_lock; int ** temp; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int ** VAR_1 ;
 struct w83795_data* FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (long,int,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_6(VAR_3);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 struct i2c_client *VAR_9 = FUNC_5(VAR_2);
 struct w83795_data *VAR_10 = FUNC_0(VAR_9);
 long VAR_11;

 if (FUNC_1(VAR_4, 10, &VAR_11) < 0)
  return -VAR_0;

 FUNC_2(&VAR_10->update_lock);
 VAR_10->temp[VAR_8][VAR_7] = FUNC_4(VAR_11, -128, 127);
 FUNC_7(VAR_9, VAR_1[VAR_8][VAR_7], VAR_10->temp[VAR_8][VAR_7]);
 FUNC_3(&VAR_10->update_lock);
 return VAR_5;
}
