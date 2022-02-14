
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct ds620_data {struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ds620_data*) ;
 int FUNC_1 (struct ds620_data*) ;
 struct ds620_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_6(VAR_2);
 struct ds620_data *VAR_5 = FUNC_2(VAR_1);
 struct i2c_client *VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = VAR_5->client;


 VAR_9 = FUNC_3(VAR_6, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7 = VAR_9;
 VAR_8 &= ~VAR_4->index;
 if (VAR_7 != VAR_8) {
  VAR_9 = FUNC_4(VAR_6, VAR_0,
         VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return FUNC_5(VAR_3, "%d\n", !!(VAR_7 & VAR_4->index));
}
