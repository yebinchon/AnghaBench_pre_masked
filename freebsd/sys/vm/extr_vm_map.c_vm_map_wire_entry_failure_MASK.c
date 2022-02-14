
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_7__ {int vm_object; } ;
struct TYPE_9__ {int eflags; int wired_count; scalar_t__ start; int offset; TYPE_1__ object; scalar_t__ end; } ;
struct TYPE_8__ {int pmap; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(vm_map_t VAR_2, vm_map_entry_t VAR_3,
    vm_offset_t VAR_4)
{

 FUNC_1(VAR_2);
 FUNC_0((VAR_3->eflags & VAR_0) != 0 &&
     VAR_3->wired_count == 1,
     ("vm_map_wire_entry_failure: entry %p isn't being wired", VAR_3));
 FUNC_0(VAR_4 < VAR_3->end,
     ("vm_map_wire_entry_failure: entry %p was fully wired", VAR_3));





 if (VAR_4 > VAR_3->start) {
  FUNC_2(VAR_2->pmap, VAR_3->start, VAR_4);
  FUNC_3(VAR_3->object.vm_object, VAR_3->offset,
      VAR_4 - VAR_3->start, VAR_1);
 }





 VAR_3->wired_count = -1;
}
