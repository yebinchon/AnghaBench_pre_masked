
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct regmap* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (unsigned int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_4(VAR_1);
 struct regmap *VAR_4 = FUNC_0(VAR_0);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3->index, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_2(VAR_2, "%d\n", FUNC_3(VAR_5));
}
