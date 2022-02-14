
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm80_data {int * fan_div; int ** fan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct lm80_data*) ;
 int FUNC_3 (struct lm80_data*) ;
 struct lm80_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 int VAR_3 = FUNC_6(VAR_1)->index;
 int VAR_4 = FUNC_6(VAR_1)->nr;
 struct lm80_data *VAR_5 = FUNC_4(VAR_0);
 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);
 return FUNC_5(VAR_2, "%d\n", FUNC_1(VAR_5->fan[VAR_4][VAR_3],
         FUNC_0(VAR_5->fan_div[VAR_3])));
}
