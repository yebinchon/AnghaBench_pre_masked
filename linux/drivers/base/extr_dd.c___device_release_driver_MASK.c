
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_driver {int (* remove ) (struct device*) ;int dev_groups; } ;
struct device {int kobj; TYPE_4__* bus; TYPE_2__* p; TYPE_1__* pm_domain; struct device_driver* driver; } ;
struct TYPE_8__ {TYPE_3__* p; int (* remove ) (struct device*) ;} ;
struct TYPE_7__ {int bus_notifier; } ;
struct TYPE_6__ {int knode_driver; } ;
struct TYPE_5__ {int (* dismiss ) (struct device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct device*) ;
 int FUNC_1 (struct device*,struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int ,struct device*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int *) ;
 scalar_t__ FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int ) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;

__attribute__((used)) static void FUNC_22(struct device *VAR_3, struct device *VAR_4)
{
 struct device_driver *VAR_5;

 VAR_5 = VAR_3->driver;
 if (VAR_5) {
  while (FUNC_6(VAR_3)) {
   FUNC_1(VAR_3, VAR_4);

   FUNC_8(VAR_3);

   FUNC_0(VAR_3, VAR_4);





   if (VAR_3->driver != VAR_5)
    return;
  }

  FUNC_16(VAR_3);
  FUNC_15(VAR_3);

  FUNC_12(VAR_3);

  if (VAR_3->bus)
   FUNC_3(&VAR_3->bus->p->bus_notifier,
           VAR_0,
           VAR_3);

  FUNC_17(VAR_3);

  FUNC_10(VAR_3, VAR_5->dev_groups);

  if (VAR_3->bus && VAR_3->bus->remove)
   VAR_3->bus->remove(VAR_3);
  else if (VAR_5->remove)
   VAR_5->remove(VAR_3);

  FUNC_7(VAR_3);

  FUNC_11(VAR_3);
  FUNC_2(VAR_3);
  VAR_3->driver = ((void*)0);
  FUNC_5(VAR_3, ((void*)0));
  if (VAR_3->pm_domain && VAR_3->pm_domain->dismiss)
   VAR_3->pm_domain->dismiss(VAR_3);
  FUNC_18(VAR_3);
  FUNC_4(VAR_3, 0);

  FUNC_13(&VAR_3->p->knode_driver);
  FUNC_9(VAR_3);
  if (VAR_3->bus)
   FUNC_3(&VAR_3->bus->p->bus_notifier,
           VAR_1,
           VAR_3);

  FUNC_14(&VAR_3->kobj, VAR_2);
 }
}
