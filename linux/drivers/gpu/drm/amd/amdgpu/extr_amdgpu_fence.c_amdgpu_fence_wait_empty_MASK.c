
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {size_t num_fences_mask; struct dma_fence** fences; int sync_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*,int) ;
 struct dma_fence* FUNC_4 (struct dma_fence*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct amdgpu_ring *VAR_0)
{
 uint64_t VAR_1 = FUNC_0(VAR_0->fence_drv.sync_seq);
 struct dma_fence *VAR_2, **VAR_3;
 int VAR_4;

 if (!VAR_1)
  return 0;

 VAR_3 = &VAR_0->fence_drv.fences[VAR_1 & VAR_0->fence_drv.num_fences_mask];
 FUNC_5();
 VAR_2 = FUNC_4(*VAR_3);
 if (!VAR_2 || !FUNC_1(VAR_2)) {
  FUNC_6();
  return 0;
 }
 FUNC_6();

 VAR_4 = FUNC_3(VAR_2, 0);
 FUNC_2(VAR_2);
 return VAR_4;
}
