
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct ds620_data {long* temp; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (long,int,int) ;
 struct ds620_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,long) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 long VAR_6;

 struct sensor_device_attribute *VAR_7 = FUNC_6(VAR_2);
 struct ds620_data *VAR_8 = FUNC_1(VAR_1);
 struct i2c_client *VAR_9 = VAR_8->client;

 VAR_5 = FUNC_3(VAR_3, 10, &VAR_6);

 if (VAR_5)
  return VAR_5;

 VAR_6 = (FUNC_0(VAR_6, -128000, 128000) * 10 / 625) * 8;

 FUNC_4(&VAR_8->update_lock);
 VAR_8->temp[VAR_7->index] = VAR_6;
 FUNC_2(VAR_9, VAR_0[VAR_7->index],
         VAR_8->temp[VAR_7->index]);
 FUNC_5(&VAR_8->update_lock);
 return VAR_4;
}
