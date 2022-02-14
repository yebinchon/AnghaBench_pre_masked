
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int config; size_t duty_cycle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct tc654_data*) ;
 int FUNC_1 (struct tc654_data*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int* VAR_1 ;
 struct tc654_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
   char *VAR_4)
{
 struct tc654_data *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_5->config & VAR_0)
  VAR_6 = 0;
 else
  VAR_6 = VAR_1[VAR_5->duty_cycle];

 return FUNC_2(VAR_4, "%d\n", VAR_6);
}
