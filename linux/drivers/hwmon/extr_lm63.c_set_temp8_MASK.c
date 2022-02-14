
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm63_data {int* temp8; int update_lock; int temp2_offset; int remote_unsigned; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long) ;
 struct lm63_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (struct lm63_data*,long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_9(VAR_3);
 struct lm63_data *VAR_7 = FUNC_3(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = VAR_6->index;
 long VAR_10;
 int VAR_11;
 int VAR_12;
 u8 VAR_13;

 VAR_11 = FUNC_5(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_7(&VAR_7->update_lock);
 switch (VAR_9) {
 case 2:
  VAR_13 = VAR_1;
  if (VAR_7->remote_unsigned)
   VAR_12 = FUNC_1(VAR_10 - VAR_7->temp2_offset);
  else
   VAR_12 = FUNC_2(VAR_10 - VAR_7->temp2_offset);
  break;
 case 1:
  VAR_13 = VAR_0;
  VAR_12 = FUNC_2(VAR_10);
  break;
 default:
  VAR_13 = FUNC_0(VAR_9 - 3);
  VAR_12 = FUNC_6(VAR_7, VAR_10);
 }
 VAR_7->temp8[VAR_9] = VAR_12;
 FUNC_4(VAR_8, VAR_13, VAR_12);
 FUNC_8(&VAR_7->update_lock);
 return VAR_5;
}
