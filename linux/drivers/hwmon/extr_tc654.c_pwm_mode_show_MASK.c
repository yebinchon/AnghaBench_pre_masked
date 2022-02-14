
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct tc654_data*) ;
 int FUNC_1 (struct tc654_data*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 struct tc654_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct tc654_data *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_3, "%d\n", !!(VAR_4->config & VAR_0));
}
