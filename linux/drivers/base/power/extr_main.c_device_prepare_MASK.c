
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int wakeup_path; int direct_complete; int lock; scalar_t__ no_pm_callbacks; scalar_t__ syscore; } ;
struct device {TYPE_11__ power; TYPE_10__* driver; TYPE_8__* bus; TYPE_6__* class; TYPE_4__* type; TYPE_2__* pm_domain; } ;
struct TYPE_16__ {scalar_t__ event; } ;
typedef TYPE_12__ pm_message_t ;
struct TYPE_25__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_24__ {TYPE_7__* pm; } ;
struct TYPE_23__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_22__ {TYPE_5__* pm; } ;
struct TYPE_21__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_20__ {TYPE_3__* pm; } ;
struct TYPE_19__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_17__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_18__ {TYPE_1__ ops; } ;
struct TYPE_14__ {TYPE_9__* pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int (*) (struct device*),int) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4, pm_message_t VAR_5)
{
 int (*VAR_6)(struct device *) = ((void*)0);
 int VAR_7 = 0;

 if (VAR_4->power.syscore)
  return 0;

 FUNC_0(!FUNC_4(VAR_4) &&
  FUNC_1(VAR_4, VAR_2 |
           VAR_0));







 FUNC_5(VAR_4);

 FUNC_2(VAR_4);

 VAR_4->power.wakeup_path = 0;

 if (VAR_4->power.no_pm_callbacks)
  goto unlock;

 if (VAR_4->pm_domain)
  VAR_6 = VAR_4->pm_domain->ops.prepare;
 else if (VAR_4->type && VAR_4->type->pm)
  VAR_6 = VAR_4->type->pm->prepare;
 else if (VAR_4->class && VAR_4->class->pm)
  VAR_6 = VAR_4->class->pm->prepare;
 else if (VAR_4->bus && VAR_4->bus->pm)
  VAR_6 = VAR_4->bus->pm->prepare;

 if (!VAR_6 && VAR_4->driver && VAR_4->driver->pm)
  VAR_6 = VAR_4->driver->pm->prepare;

 if (VAR_6)
  VAR_7 = VAR_6(VAR_4);

unlock:
 FUNC_3(VAR_4);

 if (VAR_7 < 0) {
  FUNC_10(VAR_6, VAR_7);
  FUNC_6(VAR_4);
  return VAR_7;
 }







 FUNC_8(&VAR_4->power.lock);
 VAR_4->power.direct_complete = VAR_5.event == VAR_3 &&
  ((FUNC_7(VAR_4) && VAR_7 > 0) ||
   VAR_4->power.no_pm_callbacks) &&
  !FUNC_1(VAR_4, VAR_1);
 FUNC_9(&VAR_4->power.lock);
 return 0;
}
