
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {long* volt_max; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct adt7462_data*,size_t) ;
 long FUNC_1 (long,int) ;
 size_t VAR_0 ;
 long FUNC_2 (long,int ,int) ;
 struct adt7462_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct adt7462_data*,size_t) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct adt7462_data *VAR_6 = FUNC_3(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_9(VAR_6, VAR_5->index);
 long VAR_9;

 if (FUNC_5(VAR_3, 10, &VAR_9) || !VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_9, 0, 255 * VAR_8 / 1000);
 VAR_9 *= 1000;
 VAR_9 = FUNC_1(VAR_9, VAR_8);

 FUNC_6(&VAR_6->lock);
 VAR_6->volt_max[VAR_5->index] = VAR_9;
 FUNC_4(VAR_7,
      FUNC_0(VAR_6, VAR_5->index),
      VAR_9);
 FUNC_7(&VAR_6->lock);

 return VAR_4;
}
