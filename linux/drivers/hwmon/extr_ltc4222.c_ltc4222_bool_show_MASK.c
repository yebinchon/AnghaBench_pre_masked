
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {unsigned int index; int nr; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct regmap* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,int ) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_4(VAR_2);
 struct regmap *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_4->nr, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 &= VAR_4->index;
 if (VAR_6)
  FUNC_2(VAR_5, VAR_4->nr, VAR_4->index, 0);

 return FUNC_3(VAR_3, VAR_0, "%d\n", !!VAR_6);
}
