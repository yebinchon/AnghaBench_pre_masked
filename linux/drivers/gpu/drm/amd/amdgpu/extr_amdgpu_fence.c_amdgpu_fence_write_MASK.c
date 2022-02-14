
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_fence_driver {int * cpu_addr; } ;
struct amdgpu_ring {struct amdgpu_fence_driver fence_drv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ring *VAR_0, u32 VAR_1)
{
 struct amdgpu_fence_driver *VAR_2 = &VAR_0->fence_drv;

 if (VAR_2->cpu_addr)
  *VAR_2->cpu_addr = FUNC_0(VAR_1);
}
