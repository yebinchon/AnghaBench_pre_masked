
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int attr; } ;
struct device {int kobj; } ;


 int FUNC_0 (int *,int *) ;

bool FUNC_1(struct device *VAR_0,
        const struct device_attribute *VAR_1)
{
 if (VAR_0)
  return FUNC_0(&VAR_0->kobj, &VAR_1->attr);
 else
  return 0;
}
