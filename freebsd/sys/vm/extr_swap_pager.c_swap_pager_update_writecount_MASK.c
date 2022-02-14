
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
struct TYPE_7__ {int writemappings; } ;
struct TYPE_8__ {TYPE_1__ swp; } ;
struct TYPE_9__ {int flags; TYPE_2__ un_pager; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(vm_object_t VAR_1, vm_offset_t VAR_2,
    vm_offset_t VAR_3)
{

 FUNC_1(VAR_1);
 FUNC_0((VAR_1->flags & VAR_0) != 0,
     ("Splittable object with writecount"));
 VAR_1->un_pager.swp.writemappings += (vm_ooffset_t)VAR_3 - VAR_2;
 FUNC_2(VAR_1);
}
