
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ u_int ;
struct TYPE_14__ {int eflags; int start; } ;
struct TYPE_13__ {scalar_t__ timestamp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_2__**) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static vm_map_entry_t
FUNC_7(vm_map_t VAR_2, vm_offset_t VAR_3,
    vm_offset_t *VAR_4, bool VAR_5, vm_map_entry_t VAR_6)
{
 vm_map_entry_t VAR_7;
 vm_offset_t VAR_8;
 u_int VAR_9;

 FUNC_2(VAR_2);
 FUNC_0((VAR_6->eflags & VAR_0) != 0,
     ("not in-tranition map entry %p", VAR_6));



 VAR_8 = FUNC_1(VAR_3, VAR_6->start);
 VAR_6->eflags |= VAR_1;
 VAR_9 = VAR_2->timestamp;
 if (FUNC_6(VAR_2, 0)) {



 }
 FUNC_4(VAR_2);
 if (VAR_9 + 1 == VAR_2->timestamp)
  return (VAR_6);






 if (!FUNC_5(VAR_2, VAR_8, &VAR_7)) {
  if (!VAR_5) {
   *VAR_4 = VAR_8;
   return (((void*)0));
  }
  VAR_7 = FUNC_3(VAR_7);
 }
 return (VAR_7);
}
