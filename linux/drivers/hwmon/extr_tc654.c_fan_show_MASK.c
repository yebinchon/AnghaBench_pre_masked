
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc654_data {int config; int* rpm_output; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct tc654_data*) ;
 int FUNC_1 (struct tc654_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 struct tc654_data* FUNC_3 (struct device*) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
   char *VAR_5)
{
 int VAR_6 = FUNC_4(VAR_4)->index;
 struct tc654_data *VAR_7 = FUNC_3(VAR_3);
 int VAR_8;

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (VAR_7->config & VAR_2)
  VAR_8 = VAR_7->rpm_output[VAR_6] * VAR_0;
 else
  VAR_8 = VAR_7->rpm_output[VAR_6] * VAR_1;

 return FUNC_2(VAR_5, "%d\n", VAR_8);
}
