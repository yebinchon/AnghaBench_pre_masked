
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; unsigned int num_fences_mask; int * fences; int fallback_timer; int irq_type; int irq_src; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; int sched; } ;
struct amdgpu_device {struct amdgpu_ring** rings; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct amdgpu_device *VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct amdgpu_ring *VAR_5 = VAR_1->rings[VAR_2];

  if (!VAR_5 || !VAR_5->fence_drv.initialized)
   continue;
  VAR_4 = FUNC_1(VAR_5);
  if (VAR_4) {

   FUNC_0(VAR_5);
  }
  FUNC_2(VAR_1, VAR_5->fence_drv.irq_src,
          VAR_5->fence_drv.irq_type);
  FUNC_5(&VAR_5->sched);
  FUNC_3(&VAR_5->fence_drv.fallback_timer);
  for (VAR_3 = 0; VAR_3 <= VAR_5->fence_drv.num_fences_mask; ++VAR_3)
   FUNC_4(VAR_5->fence_drv.fences[VAR_3]);
  FUNC_6(VAR_5->fence_drv.fences);
  VAR_5->fence_drv.fences = ((void*)0);
  VAR_5->fence_drv.initialized = 0;
 }
}
