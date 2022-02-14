
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_7__ {int vm_object; } ;
struct TYPE_9__ {scalar_t__ wired_count; int eflags; int offset; TYPE_1__ object; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_8__ {int pmap; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6(vm_map_t VAR_2, vm_map_entry_t VAR_3)
{
 vm_size_t VAR_4;

 FUNC_1(VAR_2);
 FUNC_0(VAR_3->wired_count > 0,
     ("vm_map_entry_unwire: entry %p isn't wired", VAR_3));

 VAR_4 = VAR_3->end - VAR_3->start;
 if ((VAR_3->eflags & VAR_0) != 0)
  FUNC_4(FUNC_2(VAR_4));
 FUNC_3(VAR_2->pmap, VAR_3->start, VAR_3->end);
 FUNC_5(VAR_3->object.vm_object, VAR_3->offset, VAR_4,
     VAR_1);
 VAR_3->wired_count = 0;
}
