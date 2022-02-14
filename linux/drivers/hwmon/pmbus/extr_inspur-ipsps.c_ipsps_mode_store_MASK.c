
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 struct i2c_client* FUNC_2 (int ) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_6,
    struct device_attribute *VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 u8 VAR_10;
 int VAR_11;
 struct i2c_client *VAR_12 = FUNC_2(VAR_6->parent);
 struct sensor_device_attribute *VAR_13 = FUNC_3(VAR_7);

 VAR_10 = VAR_5[VAR_13->index];
 if (FUNC_1(VAR_4, VAR_8)) {
  VAR_11 = FUNC_0(VAR_12, VAR_10,
            VAR_3);
  if (VAR_11 < 0)
   return VAR_11;
  return VAR_9;
 } else if (FUNC_1(VAR_2, VAR_8)) {
  VAR_11 = FUNC_0(VAR_12, VAR_10,
            VAR_1);
  if (VAR_11 < 0)
   return VAR_11;
  return VAR_9;
 }

 return -VAR_0;
}
