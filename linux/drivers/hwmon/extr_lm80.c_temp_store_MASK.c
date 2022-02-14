
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm80_data {int* temp; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long) ;
 struct lm80_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_0 ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 struct lm80_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = VAR_5->index;
 long VAR_9;
 int VAR_10 = FUNC_2(VAR_3, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_4(&VAR_6->update_lock);
 VAR_6->temp[VAR_8] = FUNC_0(VAR_9);
 FUNC_3(VAR_7, VAR_0[VAR_8], VAR_6->temp[VAR_8] >> 8);
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
