
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc654_data {int * fan_fault; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct tc654_data*) ;
 int FUNC_1 (struct tc654_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 struct tc654_data* FUNC_4 (struct device*) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 int VAR_3 = FUNC_5(VAR_1)->index;
 struct tc654_data *VAR_4 = FUNC_4(VAR_0);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(VAR_2, "%d\n",
         FUNC_2(VAR_4->fan_fault[VAR_3]));
}
