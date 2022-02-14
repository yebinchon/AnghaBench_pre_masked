
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* range; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 struct adt7475_data* FUNC_3 (struct device*) ;
 int FUNC_4 (long,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
        struct device_attribute *VAR_3, const char *VAR_4,
        size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_9(VAR_3);
 struct adt7475_data *VAR_7 = FUNC_3(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 long VAR_10;

 if (FUNC_6(VAR_4, 10, &VAR_10))
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_10, VAR_1, FUNC_0(VAR_1));

 FUNC_7(&VAR_7->lock);

 VAR_7->range[VAR_6->index] =
  FUNC_2(FUNC_1(VAR_6->index));
 VAR_7->range[VAR_6->index] &= ~0xf;
 VAR_7->range[VAR_6->index] |= VAR_9;

 FUNC_5(VAR_8, FUNC_1(VAR_6->index),
      VAR_7->range[VAR_6->index]);

 FUNC_8(&VAR_7->lock);
 return VAR_5;
}
