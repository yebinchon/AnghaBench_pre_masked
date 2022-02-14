
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ina2xx_data* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct ina2xx_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_4, VAR_1, "%d\n", FUNC_1(VAR_7));
}
