
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_5__ {int * vm_object; } ;
struct TYPE_6__ {int eflags; scalar_t__ end; scalar_t__ start; scalar_t__ offset; scalar_t__ protection; scalar_t__ max_protection; scalar_t__ inheritance; scalar_t__ wired_count; scalar_t__ cred; TYPE_1__ object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(vm_map_entry_t VAR_1, vm_map_entry_t VAR_2)
{

 FUNC_0((VAR_1->eflags & VAR_0) == 0 ||
     (VAR_2->eflags & VAR_0) == 0,
     ("vm_map_mergeable_neighbors: neither %p nor %p are mergeable",
     VAR_1, VAR_2));
 return (VAR_1->end == VAR_2->start &&
     VAR_1->object.vm_object == VAR_2->object.vm_object &&
     (VAR_1->object.vm_object == ((void*)0) ||
     VAR_1->offset + (VAR_1->end - VAR_1->start) == VAR_2->offset) &&
     VAR_1->eflags == VAR_2->eflags &&
     VAR_1->protection == VAR_2->protection &&
     VAR_1->max_protection == VAR_2->max_protection &&
     VAR_1->inheritance == VAR_2->inheritance &&
     VAR_1->wired_count == VAR_2->wired_count &&
     VAR_1->cred == VAR_2->cred);
}
