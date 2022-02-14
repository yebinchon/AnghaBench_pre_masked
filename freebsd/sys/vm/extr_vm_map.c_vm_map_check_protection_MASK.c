
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ start; int protection; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__**) ;

boolean_t
FUNC_2(vm_map_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4,
   vm_prot_t VAR_5)
{
 vm_map_entry_t VAR_6;
 vm_map_entry_t VAR_7;

 if (!FUNC_1(VAR_2, VAR_3, &VAR_7))
  return (VAR_0);
 VAR_6 = VAR_7;

 while (VAR_3 < VAR_4) {



  if (VAR_3 < VAR_6->start)
   return (VAR_0);



  if ((VAR_6->protection & VAR_5) != VAR_5)
   return (VAR_0);

  VAR_3 = VAR_6->end;
  VAR_6 = FUNC_0(VAR_6);
 }
 return (VAR_1);
}
