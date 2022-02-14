
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_5__ {scalar_t__ busy; int flags; } ;


 int FUNC_0 (scalar_t__,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (scalar_t__*) ;

void
FUNC_4(vm_map_t VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->busy, ("vm_map_unbusy: not busy"));
 if (--VAR_1->busy == 0 && (VAR_1->flags & VAR_0)) {
  FUNC_2(VAR_1, 0, VAR_0);
  FUNC_3(&VAR_1->busy);
 }
}
