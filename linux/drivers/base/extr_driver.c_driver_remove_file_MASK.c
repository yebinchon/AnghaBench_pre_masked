
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_attribute {int attr; } ;
struct device_driver {TYPE_1__* p; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct device_driver *VAR_0,
   const struct driver_attribute *VAR_1)
{
 if (VAR_0)
  FUNC_0(&VAR_0->p->kobj, &VAR_1->attr);
}
