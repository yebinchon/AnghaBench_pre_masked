
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct bin_attribute {int dummy; } ;


 int FUNC_0 (int *,struct bin_attribute const*) ;

void FUNC_1(struct device *VAR_0,
       const struct bin_attribute *VAR_1)
{
 if (VAR_0)
  FUNC_0(&VAR_0->kobj, VAR_1);
}
