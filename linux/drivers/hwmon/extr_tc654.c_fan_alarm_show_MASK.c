
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc654_data {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct tc654_data*) ;
 int FUNC_1 (struct tc654_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 struct tc654_data* FUNC_3 (struct device*) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
         char *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3)->index;
 struct tc654_data *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (VAR_5 == 0)
  VAR_7 = !!(VAR_6->status & VAR_0);
 else
  VAR_7 = !!(VAR_6->status & VAR_1);

 return FUNC_2(VAR_4, "%d\n", VAR_7);
}
