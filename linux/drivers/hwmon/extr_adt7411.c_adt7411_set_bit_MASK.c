
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {int update_lock; int next_update; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ,unsigned long) ;
 struct adt7411_data* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
          struct device_attribute *VAR_3, const char *VAR_4,
          size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_5(VAR_3);
 struct adt7411_data *VAR_7 = FUNC_1(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_4, 0, &VAR_10);
 if (VAR_9 || VAR_10 > 1)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_6->index, VAR_6->nr, VAR_10);


 FUNC_3(&VAR_7->update_lock);
 VAR_7->next_update = VAR_1;
 FUNC_4(&VAR_7->update_lock);

 return VAR_9 < 0 ? VAR_9 : VAR_5;
}
