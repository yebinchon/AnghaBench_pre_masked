
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {TYPE_5__* driver; TYPE_4__* bus; TYPE_3__* class; TYPE_2__* type; TYPE_1__* pm_domain; } ;
struct dev_pm_ops {int dummy; } ;
typedef int * pm_callback_t ;
struct TYPE_10__ {scalar_t__ pm; } ;
struct TYPE_9__ {struct dev_pm_ops* pm; } ;
struct TYPE_8__ {struct dev_pm_ops* pm; } ;
struct TYPE_7__ {struct dev_pm_ops* pm; } ;
struct TYPE_6__ {struct dev_pm_ops ops; } ;



__attribute__((used)) static pm_callback_t FUNC_0(struct device *VAR_0, size_t VAR_1)
{
 pm_callback_t VAR_2;
 const struct dev_pm_ops *VAR_3;

 if (VAR_0->pm_domain)
  VAR_3 = &VAR_0->pm_domain->ops;
 else if (VAR_0->type && VAR_0->type->pm)
  VAR_3 = VAR_0->type->pm;
 else if (VAR_0->class && VAR_0->class->pm)
  VAR_3 = VAR_0->class->pm;
 else if (VAR_0->bus && VAR_0->bus->pm)
  VAR_3 = VAR_0->bus->pm;
 else
  VAR_3 = ((void*)0);

 if (VAR_3)
  VAR_2 = *(pm_callback_t *)((void *)VAR_3 + VAR_1);
 else
  VAR_2 = ((void*)0);

 if (!VAR_2 && VAR_0->driver && VAR_0->driver->pm)
  VAR_2 = *(pm_callback_t *)((void *)VAR_0->driver->pm + VAR_1);

 return VAR_2;
}
