
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_5__ {int * vm_object; } ;
struct TYPE_6__ {int * cred; TYPE_1__ object; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(vm_map_t VAR_0, vm_map_entry_t VAR_1)
{
 if (VAR_1->object.vm_object != ((void*)0))
  FUNC_2(VAR_1->object.vm_object);
 if (VAR_1->cred != ((void*)0))
  FUNC_0(VAR_1->cred);
 FUNC_1(VAR_0, VAR_1);
}
