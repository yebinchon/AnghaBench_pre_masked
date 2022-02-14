
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
 int FUNC_0 (struct i2c_client*,int ,char*) ;
 int * VAR_2 ;
 char* FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 struct i2c_client* FUNC_3 (int ) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
     struct device_attribute *VAR_4,
     char *VAR_5)
{
 u8 VAR_6;
 int VAR_7;
 char *VAR_8;
 char VAR_9[VAR_0 + 1];
 struct i2c_client *VAR_10 = FUNC_3(VAR_3->parent);
 struct sensor_device_attribute *VAR_11 = FUNC_4(VAR_4);

 VAR_6 = VAR_2[VAR_11->index];
 VAR_7 = FUNC_0(VAR_10, VAR_6, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_8 = FUNC_1(VAR_9, '#', VAR_7);
 *VAR_8 = '\0';

 return FUNC_2(VAR_5, VAR_1, "%s\n", VAR_9);
}
