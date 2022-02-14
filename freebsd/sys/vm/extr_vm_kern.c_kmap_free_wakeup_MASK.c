
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
struct TYPE_7__ {scalar_t__ needs_wakeup; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(vm_map_t VAR_1, vm_offset_t VAR_2, vm_size_t VAR_3)
{

 FUNC_3(VAR_1);
 (void) FUNC_2(VAR_1, FUNC_1(VAR_2), FUNC_0(VAR_2 + VAR_3));
 if (VAR_1->needs_wakeup) {
  VAR_1->needs_wakeup = VAR_0;
  FUNC_5(VAR_1);
 }
 FUNC_4(VAR_1);
}
