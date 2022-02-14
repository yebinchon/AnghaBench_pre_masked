
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned int root_level; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static uint32_t FUNC_1(struct amdgpu_device *VAR_1,
           unsigned int VAR_2)
{
 if (VAR_2 <= VAR_1->vm_manager.root_level)
  return 0xffffffff;
 else if (VAR_2 != VAR_0)
  return 0x1ff;
 else
  return FUNC_0(VAR_1) - 1;
}
