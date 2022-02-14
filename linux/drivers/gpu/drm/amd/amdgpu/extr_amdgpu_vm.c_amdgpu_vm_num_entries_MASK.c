
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int root_level; int max_pfn; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 unsigned int FUNC_1 (struct amdgpu_device*,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned long long) ;

__attribute__((used)) static unsigned FUNC_3(struct amdgpu_device *VAR_1,
          unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_1,
            VAR_1->vm_manager.root_level);

 if (VAR_2 == VAR_1->vm_manager.root_level)

  return FUNC_2(VAR_1->vm_manager.max_pfn, 1ULL << VAR_3) >> VAR_3;
 else if (VAR_2 != VAR_0)

  return 512;
 else

  return FUNC_0(VAR_1);
}
