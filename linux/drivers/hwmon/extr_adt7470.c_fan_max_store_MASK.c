
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long* fan_max; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 long FUNC_1 (long) ;
 int FUNC_2 (struct i2c_client*,int ,long) ;
 long FUNC_3 (long,int,int) ;
 struct adt7470_data* FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct adt7470_data *VAR_6 = FUNC_4(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;

 if (FUNC_5(VAR_3, 10, &VAR_8) || !VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_8);
 VAR_8 = FUNC_3(VAR_8, 1, 65534);

 FUNC_6(&VAR_6->lock);
 VAR_6->fan_max[VAR_5->index] = VAR_8;
 FUNC_2(VAR_7, FUNC_0(VAR_5->index), VAR_8);
 FUNC_7(&VAR_6->lock);

 return VAR_4;
}
