
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_fence_driver {int last_seq; int * cpu_addr; } ;
struct amdgpu_ring {struct amdgpu_fence_driver fence_drv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_fence_driver *VAR_1 = &VAR_0->fence_drv;
 u32 VAR_2 = 0;

 if (VAR_1->cpu_addr)
  VAR_2 = FUNC_1(*VAR_1->cpu_addr);
 else
  VAR_2 = FUNC_0(&VAR_1->last_seq);

 return VAR_2;
}
