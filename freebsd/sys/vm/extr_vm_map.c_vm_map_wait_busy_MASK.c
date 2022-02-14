
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_5__ {int timestamp; int lock; scalar_t__ busy; int system_mtx; scalar_t__ system_map; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_2 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

void
FUNC_4(vm_map_t VAR_1)
{

 FUNC_0(VAR_1);
 while (VAR_1->busy) {
  FUNC_3(VAR_1, VAR_0, 0);
  if (VAR_1->system_map)
   FUNC_1(&VAR_1->busy, &VAR_1->system_mtx, 0, "mbusy", 0);
  else
   FUNC_2(&VAR_1->busy, &VAR_1->lock, 0, "mbusy", 0);
 }
 VAR_1->timestamp++;
}
