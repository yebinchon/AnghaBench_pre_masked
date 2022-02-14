
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct amdgpu_vm_update_params {scalar_t__ pages_addr; TYPE_2__* adev; } ;
struct TYPE_3__ {unsigned int fragment_size; } ;
struct TYPE_4__ {scalar_t__ asic_type; TYPE_1__ vm_manager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long long) ;
 scalar_t__ FUNC_1 (unsigned long long) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_vm_update_params *VAR_1,
          uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
          unsigned int *VAR_5, uint64_t *VAR_6)
{
 unsigned VAR_7;

 if (VAR_1->adev->asic_type < VAR_0)
  VAR_7 = VAR_1->adev->vm_manager.fragment_size;
 else
  VAR_7 = 31;


 if (VAR_1->pages_addr) {
  *VAR_5 = 0;
  *VAR_6 = VAR_3;
  return;
 }


 *VAR_5 = FUNC_2((unsigned)FUNC_0(VAR_2) - 1, (unsigned)FUNC_1(VAR_3 - VAR_2) - 1);
 if (*VAR_5 >= VAR_7) {
  *VAR_5 = VAR_7;
  *VAR_6 = VAR_3 & ~((1ULL << VAR_7) - 1);
 } else {
  *VAR_6 = VAR_2 + (1 << *VAR_5);
 }
}
