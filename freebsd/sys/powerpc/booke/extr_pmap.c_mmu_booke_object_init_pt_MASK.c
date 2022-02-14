
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_pindex_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_object_t ;
typedef int pmap_t ;
typedef int mmu_t ;
struct TYPE_4__ {scalar_t__ type; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(mmu_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4,
    vm_object_t VAR_5, vm_pindex_t VAR_6, vm_size_t VAR_7)
{

 FUNC_1(VAR_5);
 FUNC_0(VAR_5->type == VAR_0 || VAR_5->type == VAR_1,
     ("mmu_booke_object_init_pt: non-device object"));
}
