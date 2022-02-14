
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_data {int mutex; struct regmap* regmap; } ;
struct sensor_device_attribute {int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 struct thermal_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct regmap*,int ,unsigned int*) ;
 int FUNC_7 (struct regmap*,int,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct thermal_data *VAR_6 = FUNC_2(VAR_1);
 struct regmap *VAR_7 = VAR_6->regmap;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 if (FUNC_3(VAR_3, 10, &VAR_11))
  return -VAR_0;

 FUNC_4(&VAR_6->mutex);
 VAR_9 = FUNC_6(VAR_7, VAR_5->index, &VAR_8);
 if (VAR_9 < 0)
  goto fail;

 VAR_10 = VAR_8 * 1000 - VAR_11;
 VAR_10 = FUNC_1(FUNC_0(VAR_10, 1000), 0, 255);
 VAR_9 = FUNC_7(VAR_7, 0x21, VAR_10);
 if (VAR_9 == 0)
  VAR_9 = VAR_4;
fail:
 FUNC_5(&VAR_6->mutex);
 return VAR_9;
}
