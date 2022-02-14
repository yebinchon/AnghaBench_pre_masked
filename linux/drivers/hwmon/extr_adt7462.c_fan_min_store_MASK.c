
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {long* fan_min; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 long FUNC_1 (long) ;
 long FUNC_2 (long,int,int) ;
 struct adt7462_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct adt7462_data*,size_t) ;
 int FUNC_5 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_9(VAR_2);
 struct adt7462_data *VAR_6 = FUNC_3(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;

 if (FUNC_6(VAR_3, 10, &VAR_8) || !VAR_8 ||
     !FUNC_4(VAR_6, VAR_5->index))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_8);
 VAR_8 >>= 8;
 VAR_8 = FUNC_2(VAR_8, 1, 255);

 FUNC_7(&VAR_6->lock);
 VAR_6->fan_min[VAR_5->index] = VAR_8;
 FUNC_5(VAR_7, FUNC_0(VAR_5->index),
      VAR_8);
 FUNC_8(&VAR_6->lock);

 return VAR_4;
}
