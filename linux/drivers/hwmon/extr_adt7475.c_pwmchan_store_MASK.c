
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int lock; int * pwmctl; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct i2c_client*,size_t) ;
 struct adt7475_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,size_t,int ,long) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
        struct device_attribute *VAR_2, const char *VAR_3,
        size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_2);
 struct adt7475_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;
 long VAR_9;

 if (FUNC_3(VAR_3, 10, &VAR_9))
  return -VAR_0;

 FUNC_4(&VAR_6->lock);

 FUNC_0(VAR_7, VAR_5->index);
 VAR_8 = FUNC_2(VAR_7, VAR_5->index, VAR_6->pwmctl[VAR_5->index], VAR_9);
 if (VAR_8)
  VAR_4 = VAR_8;
 FUNC_5(&VAR_6->lock);

 return VAR_4;
}
