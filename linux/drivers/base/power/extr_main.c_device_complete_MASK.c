
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ syscore; } ;
struct device {TYPE_11__* driver; TYPE_9__* bus; TYPE_7__* class; TYPE_5__* type; TYPE_3__* pm_domain; TYPE_1__ power; } ;
typedef int pm_message_t ;
struct TYPE_22__ {TYPE_8__* pm; } ;
struct TYPE_21__ {void (* complete ) (struct device*) ;} ;
struct TYPE_20__ {TYPE_6__* pm; } ;
struct TYPE_19__ {void (* complete ) (struct device*) ;} ;
struct TYPE_18__ {TYPE_4__* pm; } ;
struct TYPE_17__ {void (* complete ) (struct device*) ;} ;
struct TYPE_15__ {void (* complete ) (struct device*) ;} ;
struct TYPE_16__ {TYPE_2__ ops; } ;
struct TYPE_13__ {TYPE_10__* pm; } ;
struct TYPE_12__ {void (* complete ) (struct device*) ;} ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,char const*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, pm_message_t VAR_1)
{
 void (*VAR_2)(struct device *) = ((void*)0);
 const char *VAR_3 = ((void*)0);

 if (VAR_0->power.syscore)
  return;

 FUNC_0(VAR_0);

 if (VAR_0->pm_domain) {
  VAR_3 = "completing power domain ";
  VAR_2 = VAR_0->pm_domain->ops.complete;
 } else if (VAR_0->type && VAR_0->type->pm) {
  VAR_3 = "completing type ";
  VAR_2 = VAR_0->type->pm->complete;
 } else if (VAR_0->class && VAR_0->class->pm) {
  VAR_3 = "completing class ";
  VAR_2 = VAR_0->class->pm->complete;
 } else if (VAR_0->bus && VAR_0->bus->pm) {
  VAR_3 = "completing bus ";
  VAR_2 = VAR_0->bus->pm->complete;
 }

 if (!VAR_2 && VAR_0->driver && VAR_0->driver->pm) {
  VAR_3 = "completing driver ";
  VAR_2 = VAR_0->driver->pm->complete;
 }

 if (VAR_2) {
  FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_2(VAR_0);
 }

 FUNC_1(VAR_0);

 FUNC_3(VAR_0);
}
