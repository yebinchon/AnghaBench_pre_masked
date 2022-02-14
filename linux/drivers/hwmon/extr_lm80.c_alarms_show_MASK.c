
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm80_data {int alarms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct lm80_data*) ;
 int FUNC_1 (struct lm80_data*) ;
 struct lm80_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct lm80_data *VAR_3 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 return FUNC_3(VAR_2, "%u\n", VAR_3->alarms);
}
