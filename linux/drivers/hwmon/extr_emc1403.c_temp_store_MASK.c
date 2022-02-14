
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_data {int regmap; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 struct thermal_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_4(VAR_2);
 struct thermal_data *VAR_6 = FUNC_1(VAR_1);
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3, 10, &VAR_7))
  return -VAR_0;
 VAR_8 = FUNC_3(VAR_6->regmap, VAR_5->index,
         FUNC_0(VAR_7, 1000));
 if (VAR_8 < 0)
  return VAR_8;
 return VAR_4;
}
