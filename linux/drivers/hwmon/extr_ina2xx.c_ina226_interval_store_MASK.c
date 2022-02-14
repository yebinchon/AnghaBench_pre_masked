
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
 int VAR_2 ;
 unsigned long VAR_3 ;
 struct ina2xx_data* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct ina2xx_data *VAR_8 = FUNC_0(VAR_4);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 > VAR_3 || VAR_9 == 0)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8->regmap, VAR_2,
        VAR_1,
        FUNC_1(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_7;
}
