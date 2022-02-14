
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_data {struct regmap* regmap; } ;
struct sensor_device_attribute {int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct thermal_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int,unsigned int*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2,
    bool VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_1);
 struct thermal_data *VAR_5 = FUNC_0(VAR_0);
 struct regmap *VAR_6 = VAR_5->regmap;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_4->index, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, 0x21, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_2(VAR_2, "%d000\n", VAR_3 ? VAR_7 + VAR_8 : VAR_7 - VAR_8);
}
