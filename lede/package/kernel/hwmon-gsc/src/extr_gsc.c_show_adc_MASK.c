
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int reg; } ;


 int FUNC_0 (struct i2c_client*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct i2c_client *VAR_5 = FUNC_2(VAR_1);
 return FUNC_1(VAR_3, "%d\n", FUNC_0(VAR_5, VAR_0[VAR_4->index].reg));
}
