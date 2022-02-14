
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct max1619_data {int update_lock; int * temp; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct max1619_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int FUNC_5 (long) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 struct max1619_data *VAR_6 = FUNC_0(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;
 int VAR_9 = FUNC_2(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_6->update_lock);
 VAR_6->temp[VAR_5->index] = FUNC_5(VAR_8);
 FUNC_1(VAR_7, VAR_0[VAR_5->index],
      VAR_6->temp[VAR_5->index]);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
