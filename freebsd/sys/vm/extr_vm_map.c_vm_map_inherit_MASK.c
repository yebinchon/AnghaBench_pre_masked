
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int vm_inherit_t ;
struct TYPE_9__ {int eflags; int inheritance; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__**) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;

int
FUNC_9(vm_map_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5,
        vm_inherit_t VAR_6)
{
 vm_map_entry_t VAR_7;
 vm_map_entry_t VAR_8;

 switch (VAR_6) {
 case 130:
 case 131:
 case 129:
 case 128:
  break;
 default:
  return (VAR_0);
 }
 if (VAR_4 == VAR_5)
  return (VAR_1);
 FUNC_5(VAR_3);
 FUNC_0(VAR_3, VAR_4, VAR_5);
 if (FUNC_6(VAR_3, VAR_4, &VAR_8)) {
  VAR_7 = VAR_8;
  FUNC_2(VAR_3, VAR_7, VAR_4);
 } else
  VAR_7 = FUNC_4(VAR_8);
 while (VAR_7->start < VAR_5) {
  FUNC_1(VAR_3, VAR_7, VAR_5);
  if ((VAR_7->eflags & VAR_2) == 0 ||
      VAR_6 != 128)
   VAR_7->inheritance = VAR_6;
  FUNC_7(VAR_3, FUNC_3(VAR_7), VAR_7);
  VAR_7 = FUNC_4(VAR_7);
 }
 FUNC_7(VAR_3, FUNC_3(VAR_7), VAR_7);
 FUNC_8(VAR_3);
 return (VAR_1);
}
