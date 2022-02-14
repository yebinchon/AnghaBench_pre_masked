
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int reg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (char const*,int *,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
   struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 u16 VAR_5;
 struct sensor_device_attribute *VAR_6 = FUNC_3(VAR_2);
 struct i2c_client *VAR_7 = FUNC_2(VAR_1);
 VAR_5 = FUNC_1(VAR_3, ((void*)0), 10);
 FUNC_0(VAR_7, VAR_0[VAR_6->index].reg, VAR_5);
 return VAR_4;
}
