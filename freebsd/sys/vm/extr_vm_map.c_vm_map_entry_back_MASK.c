
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_6__ {TYPE_2__* vm_object; } ;
struct TYPE_8__ {int eflags; int * cred; scalar_t__ start; scalar_t__ end; scalar_t__ offset; TYPE_1__ object; } ;
struct TYPE_7__ {scalar_t__ charge; int * cred; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(vm_map_entry_t VAR_2)
{
 vm_object_t VAR_3;

 FUNC_0(VAR_2->object.vm_object == ((void*)0),
     ("map entry %p has backing object", VAR_2));
 FUNC_0((VAR_2->eflags & VAR_0) == 0,
     ("map entry %p is a submap", VAR_2));
 VAR_3 = FUNC_2(VAR_1,
     FUNC_1(VAR_2->end - VAR_2->start));
 VAR_2->object.vm_object = VAR_3;
 VAR_2->offset = 0;
 if (VAR_2->cred != ((void*)0)) {
  VAR_3->cred = VAR_2->cred;
  VAR_3->charge = VAR_2->end - VAR_2->start;
  VAR_2->cred = ((void*)0);
 }
}
