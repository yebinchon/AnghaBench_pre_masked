
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int update_lock; int * fan_min; int * fan_div; struct i2c_client* client; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (long,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct adm1026_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
        struct device_attribute *VAR_1, const char *VAR_2,
        size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_7(VAR_1);
 int VAR_5 = VAR_4->index;
 struct adm1026_data *VAR_6 = FUNC_3(VAR_0);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_6->update_lock);
 VAR_6->fan_min[VAR_5] = FUNC_1(VAR_8, VAR_6->fan_div[VAR_5]);
 FUNC_2(VAR_7, FUNC_0(VAR_5),
  VAR_6->fan_min[VAR_5]);
 FUNC_6(&VAR_6->update_lock);
 return VAR_3;
}
