
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm80_data {int ** in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct lm80_data*) ;
 int FUNC_2 (struct lm80_data*) ;
 struct lm80_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct lm80_data *VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = FUNC_5(VAR_1)->index;
 int VAR_5 = FUNC_5(VAR_1)->nr;

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);
 return FUNC_4(VAR_2, "%d\n", FUNC_0(VAR_3->in[VAR_5][VAR_4]));
}
