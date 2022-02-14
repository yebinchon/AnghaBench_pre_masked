
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ina2xx_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ina2xx_data*,unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 struct ina2xx_data *VAR_6 = FUNC_0(VAR_0);

 VAR_5 = FUNC_2(VAR_2, 10, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_3;
}
