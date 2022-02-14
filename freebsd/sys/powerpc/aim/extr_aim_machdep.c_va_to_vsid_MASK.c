
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int* pm_sr; } ;


 uintptr_t VAR_0 ;
 int VAR_1 ;

uint64_t
FUNC_0(pmap_t VAR_2, vm_offset_t VAR_3)
{
 return ((VAR_2->pm_sr[(uintptr_t)VAR_3 >> VAR_0]) & VAR_1);
}
