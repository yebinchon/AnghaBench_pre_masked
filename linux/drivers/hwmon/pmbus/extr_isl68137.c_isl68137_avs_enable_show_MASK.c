
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_client*,int ,char*) ;
 struct i2c_client* FUNC_1 (int ) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_0->parent);
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_1);

 return FUNC_0(VAR_3, VAR_4->index, VAR_2);
}
