
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int** voltage; int lock; int bypass_attn; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (size_t) ;
 unsigned char FUNC_1 (size_t) ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,unsigned char,int) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (size_t,long,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5,
        struct device_attribute *VAR_6, const char *VAR_7,
        size_t VAR_8)
{

 struct sensor_device_attribute_2 *VAR_9 = FUNC_7(VAR_6);
 struct adt7475_data *VAR_10 = FUNC_2(VAR_5);
 struct i2c_client *VAR_11 = VAR_10->client;
 unsigned char VAR_12;
 long VAR_13;

 if (FUNC_4(VAR_7, 10, &VAR_13))
  return -VAR_1;

 FUNC_5(&VAR_10->lock);

 VAR_10->voltage[VAR_9->nr][VAR_9->index] =
    FUNC_8(VAR_9->index, VAR_13, VAR_10->bypass_attn);

 if (VAR_9->index < VAR_0) {
  if (VAR_9->nr == VAR_2)
   VAR_12 = FUNC_1(VAR_9->index);
  else
   VAR_12 = FUNC_0(VAR_9->index);
 } else {
  if (VAR_9->nr == VAR_2)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_3;
 }

 FUNC_3(VAR_11, VAR_12,
      VAR_10->voltage[VAR_9->nr][VAR_9->index] >> 2);
 FUNC_6(&VAR_10->lock);

 return VAR_8;
}
