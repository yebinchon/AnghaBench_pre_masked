
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {TYPE_1__* p; int bus_groups; scalar_t__ dev_root; int name; } ;
struct TYPE_2__ {int subsys; int * devices_kset; int * drivers_kset; } ;


 int VAR_0 ;
 int FUNC_0 (struct bus_type*,int *) ;
 int FUNC_1 (struct bus_type*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct bus_type*) ;

void FUNC_6(struct bus_type *VAR_1)
{
 FUNC_4("bus: '%s': unregistering\n", VAR_1->name);
 if (VAR_1->dev_root)
  FUNC_2(VAR_1->dev_root);
 FUNC_1(VAR_1, VAR_1->bus_groups);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1->p->drivers_kset);
 FUNC_3(VAR_1->p->devices_kset);
 FUNC_0(VAR_1, &VAR_0);
 FUNC_3(&VAR_1->p->subsys);
}
