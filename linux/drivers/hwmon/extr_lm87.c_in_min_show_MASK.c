
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm87_data {int * in_scale; int * in_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ) ;
 struct lm87_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct lm87_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_3(VAR_1)->index;

 return FUNC_2(VAR_2, "%u\n", FUNC_0(VAR_3->in_min[VAR_4],
         VAR_3->in_scale[VAR_4]));
}
