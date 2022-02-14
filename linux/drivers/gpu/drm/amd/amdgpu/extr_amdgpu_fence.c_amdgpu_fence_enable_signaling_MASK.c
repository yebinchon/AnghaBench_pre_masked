
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct TYPE_2__ {int fallback_timer; } ;
struct amdgpu_ring {int idx; TYPE_1__ fence_drv; } ;
struct amdgpu_fence {int base; struct amdgpu_ring* ring; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (int *) ;
 struct amdgpu_fence* FUNC_3 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_4(struct dma_fence *VAR_0)
{
 struct amdgpu_fence *VAR_1 = FUNC_3(VAR_0);
 struct amdgpu_ring *VAR_2 = VAR_1->ring;

 if (!FUNC_2(&VAR_2->fence_drv.fallback_timer))
  FUNC_1(VAR_2);

 FUNC_0(&VAR_1->base, "armed on ring %i!\n", VAR_2->idx);

 return 1;
}
