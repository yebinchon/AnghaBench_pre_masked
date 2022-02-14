
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8591_data {unsigned long aout; int control; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pcf8591_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 struct i2c_client *VAR_6 = FUNC_3(VAR_1);
 struct pcf8591_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, 10, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_5 /= 10;
 if (VAR_5 > 255)
  return -VAR_0;

 VAR_7->aout = VAR_5;
 FUNC_1(VAR_6, VAR_7->control, VAR_7->aout);
 return VAR_4;
}
