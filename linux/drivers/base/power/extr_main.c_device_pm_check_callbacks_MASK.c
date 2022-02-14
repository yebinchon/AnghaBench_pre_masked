
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int no_pm_callbacks; int lock; } ;
struct device {TYPE_6__ power; TYPE_5__* driver; TYPE_4__* pm_domain; TYPE_3__* type; TYPE_2__* class; TYPE_1__* bus; } ;
struct TYPE_11__ {int resume; int suspend; int * pm; } ;
struct TYPE_10__ {int ops; } ;
struct TYPE_9__ {int * pm; } ;
struct TYPE_8__ {int * pm; } ;
struct TYPE_7__ {int resume; int suspend; int * pm; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_0)
{
 FUNC_1(&VAR_0->power.lock);
 VAR_0->power.no_pm_callbacks =
  (!VAR_0->bus || (FUNC_0(VAR_0->bus->pm) &&
   !VAR_0->bus->suspend && !VAR_0->bus->resume)) &&
  (!VAR_0->class || FUNC_0(VAR_0->class->pm)) &&
  (!VAR_0->type || FUNC_0(VAR_0->type->pm)) &&
  (!VAR_0->pm_domain || FUNC_0(&VAR_0->pm_domain->ops)) &&
  (!VAR_0->driver || (FUNC_0(VAR_0->driver->pm) &&
   !VAR_0->driver->suspend && !VAR_0->driver->resume));
 FUNC_2(&VAR_0->power.lock);
}
