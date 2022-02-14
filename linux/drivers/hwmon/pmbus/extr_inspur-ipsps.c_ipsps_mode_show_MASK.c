
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



 char* VAR_0 ;

 char* VAR_1 ;

 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int * VAR_4 ;
 int FUNC_1 (char*,int ,char*,...) ;
 struct i2c_client* FUNC_2 (int ) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
          struct device_attribute *VAR_6, char *VAR_7)
{
 u8 VAR_8;
 int VAR_9;
 struct i2c_client *VAR_10 = FUNC_2(VAR_5->parent);
 struct sensor_device_attribute *VAR_11 = FUNC_3(VAR_6);

 VAR_8 = VAR_4[VAR_11->index];
 VAR_9 = FUNC_0(VAR_10, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 switch (VAR_9) {
 case 130:
  return FUNC_1(VAR_7, VAR_3, "[%s] %s %s\n",
    VAR_0,
    VAR_2, VAR_1);
 case 128:
  return FUNC_1(VAR_7, VAR_3, "%s [%s] %s\n",
    VAR_0,
    VAR_2, VAR_1);
 case 129:
  return FUNC_1(VAR_7, VAR_3, "%s %s [%s]\n",
    VAR_0,
    VAR_2, VAR_1);
 default:
  return FUNC_1(VAR_7, VAR_3, "unspecified\n");
 }
}
