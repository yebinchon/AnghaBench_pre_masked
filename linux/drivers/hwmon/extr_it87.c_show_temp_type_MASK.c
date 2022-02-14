
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct it87_data {int sensor; int extra; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct it87_data*,int) ;
 scalar_t__ FUNC_1 (struct it87_data*,int) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = VAR_3->index;
 struct it87_data *VAR_5 = FUNC_2(VAR_0);
 u8 VAR_6 = VAR_5->sensor;
 u8 VAR_7 = VAR_5->extra;

 if ((FUNC_1(VAR_5, VAR_4) && (VAR_6 >> 6 == VAR_4 + 1)) ||
     (FUNC_0(VAR_5, VAR_4) && (VAR_7 & 0x80)))
  return FUNC_3(VAR_2, "6\n");
 if (VAR_6 & (1 << VAR_4))
  return FUNC_3(VAR_2, "3\n");
 if (VAR_6 & (8 << VAR_4))
  return FUNC_3(VAR_2, "4\n");
 return FUNC_3(VAR_2, "0\n");
}
