
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_driver {TYPE_2__* bus; TYPE_1__* p; int name; int suppress_bind_attrs; } ;
struct TYPE_4__ {int name; int drv_groups; } ;
struct TYPE_3__ {int kobj; int knode_bus; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct device_driver*,int *) ;
 int FUNC_3 (struct device_driver*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device_driver*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct device_driver*) ;

void FUNC_9(struct device_driver *VAR_1)
{
 if (!VAR_1->bus)
  return;

 if (!VAR_1->suppress_bind_attrs)
  FUNC_8(VAR_1);
 FUNC_3(VAR_1, VAR_1->bus->drv_groups);
 FUNC_2(VAR_1, &VAR_0);
 FUNC_4(&VAR_1->p->knode_bus);
 FUNC_7("bus: '%s': remove driver %s\n", VAR_1->bus->name, VAR_1->name);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1);
 FUNC_5(&VAR_1->p->kobj);
 FUNC_0(VAR_1->bus);
}
