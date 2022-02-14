
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vm_pt_cursor {unsigned long long pfn; int * entry; TYPE_1__* parent; scalar_t__ level; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int * entries; } ;


 unsigned int FUNC_0 (struct amdgpu_device*,scalar_t__) ;
 unsigned int FUNC_1 (struct amdgpu_device*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_0,
     struct amdgpu_vm_pt_cursor *VAR_1)
{
 unsigned VAR_2, VAR_3;


 if (!VAR_1->parent)
  return 0;


 VAR_2 = FUNC_0(VAR_0, VAR_1->level - 1);
 VAR_3 = FUNC_1(VAR_0, VAR_1->level - 1);

 if (VAR_1->entry == &VAR_1->parent->entries[VAR_3 - 1])
  return 0;

 VAR_1->pfn += 1ULL << VAR_2;
 VAR_1->pfn &= ~((1ULL << VAR_2) - 1);
 ++VAR_1->entry;
 return 1;
}
