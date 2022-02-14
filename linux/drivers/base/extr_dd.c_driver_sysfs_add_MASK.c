
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int kobj; TYPE_4__* driver; TYPE_2__* bus; } ;
struct TYPE_8__ {TYPE_3__* p; int coredump; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__* p; } ;
struct TYPE_5__ {int bus_notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,struct device*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 int VAR_4;

 if (VAR_3->bus)
  FUNC_1(&VAR_3->bus->p->bus_notifier,
          VAR_0, VAR_3);

 VAR_4 = FUNC_4(&VAR_3->driver->p->kobj, &VAR_3->kobj,
    FUNC_3(&VAR_3->kobj));
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_4(&VAR_3->kobj, &VAR_3->driver->p->kobj,
    "driver");
 if (VAR_4)
  goto rm_dev;

 if (!FUNC_0(VAR_1) || !VAR_3->driver->coredump ||
     !FUNC_2(VAR_3, &VAR_2))
  return 0;

 FUNC_5(&VAR_3->kobj, "driver");

rm_dev:
 FUNC_5(&VAR_3->driver->p->kobj,
     FUNC_3(&VAR_3->kobj));

fail:
 return VAR_4;
}
