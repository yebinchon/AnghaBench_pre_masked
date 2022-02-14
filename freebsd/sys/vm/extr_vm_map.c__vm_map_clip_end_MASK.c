
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_8__ {int vm_object; } ;
struct TYPE_9__ {scalar_t__ start; scalar_t__ end; int eflags; TYPE_1__ object; int * cred; int offset; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(vm_map_t VAR_1, vm_map_entry_t VAR_2, vm_offset_t VAR_3)
{
 vm_map_entry_t VAR_4;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->start < VAR_3 && VAR_2->end > VAR_3,
     ("_vm_map_clip_end: invalid clip of entry %p", VAR_2));





 FUNC_3(VAR_1, VAR_2);


 VAR_4 = FUNC_4(VAR_1);
 *VAR_4 = *VAR_2;





 VAR_4->start = VAR_2->end = VAR_3;
 VAR_4->offset += (VAR_3 - VAR_2->start);
 if (VAR_4->cred != ((void*)0))
  FUNC_2(VAR_2->cred);

 FUNC_5(VAR_1, VAR_4);

 if ((VAR_2->eflags & VAR_0) == 0) {
  FUNC_7(VAR_4->object.vm_object);
  FUNC_6(VAR_4, 1);
 }
}
