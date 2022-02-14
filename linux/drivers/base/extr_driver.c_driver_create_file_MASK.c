
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_attribute {int attr; } ;
struct device_driver {TYPE_1__* p; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct device_driver *VAR_1,
         const struct driver_attribute *VAR_2)
{
 int VAR_3;

 if (VAR_1)
  VAR_3 = FUNC_0(&VAR_1->p->kobj, &VAR_2->attr);
 else
  VAR_3 = -VAR_0;
 return VAR_3;
}
