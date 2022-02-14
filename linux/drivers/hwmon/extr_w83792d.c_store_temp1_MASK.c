
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int update_lock; int * temp1; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long) ;
 int * VAR_0 ;
 struct w83792d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = VAR_5->index;
 struct i2c_client *VAR_7 = FUNC_5(VAR_1);
 struct w83792d_data *VAR_8 = FUNC_1(VAR_7);
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->temp1[VAR_6] = FUNC_0(VAR_9);
 FUNC_7(VAR_7, VAR_0[VAR_6],
  VAR_8->temp1[VAR_6]);
 FUNC_4(&VAR_8->update_lock);

 return VAR_4;
}
