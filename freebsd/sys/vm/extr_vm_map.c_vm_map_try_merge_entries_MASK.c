
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_8__ {int eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void
FUNC_4(vm_map_t VAR_2, vm_map_entry_t VAR_3, vm_map_entry_t VAR_4)
{

 FUNC_0(VAR_2);
 if ((VAR_4->eflags & VAR_0) == 0 &&
     FUNC_2(VAR_3, VAR_4)) {
  FUNC_1(VAR_2, VAR_3, VAR_1);
  FUNC_3(VAR_2, VAR_3);
 }
}
