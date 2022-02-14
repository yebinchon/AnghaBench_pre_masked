
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {unsigned int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,int ) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_4(VAR_3);
 struct regmap *VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 &= VAR_5->index;
 if (VAR_7)
  FUNC_2(VAR_6, VAR_0, VAR_5->index, 0);

 return FUNC_3(VAR_4, VAR_1, "%d\n", !!VAR_7);
}
