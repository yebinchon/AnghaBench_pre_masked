
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct klist {int dummy; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {struct klist klist_devices; } ;



struct klist *FUNC_0(struct bus_type *VAR_0)
{
 return &VAR_0->p->klist_devices;
}
