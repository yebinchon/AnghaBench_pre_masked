
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_fence_driver {scalar_t__ sync_seq; scalar_t__ num_fences_mask; struct dma_fence** fences; int fallback_timer; int last_seq; } ;
struct amdgpu_ring {struct amdgpu_fence_driver fence_drv; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct dma_fence*,char*) ;
 int FUNC_2 (struct dma_fence*,int *) ;
 scalar_t__ FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct dma_fence*) ;
 int FUNC_9 (struct dma_fence*) ;
 struct dma_fence* FUNC_10 (struct dma_fence*,int) ;
 scalar_t__ FUNC_11 (int) ;

bool FUNC_12(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_fence_driver *VAR_1 = &VAR_0->fence_drv;
 uint32_t VAR_2, VAR_3;
 int VAR_4;

 do {
  VAR_3 = FUNC_6(&VAR_0->fence_drv.last_seq);
  VAR_2 = FUNC_3(VAR_0);

 } while (FUNC_5(&VAR_1->last_seq, VAR_3, VAR_2) != VAR_3);

 if (FUNC_7(&VAR_0->fence_drv.fallback_timer) &&
     VAR_2 != VAR_0->fence_drv.sync_seq)
  FUNC_4(VAR_0);

 if (FUNC_11(VAR_2 == VAR_3))
  return 0;

 VAR_3 &= VAR_1->num_fences_mask;
 VAR_2 &= VAR_1->num_fences_mask;

 do {
  struct dma_fence *VAR_5, **VAR_6;

  ++VAR_3;
  VAR_3 &= VAR_1->num_fences_mask;
  VAR_6 = &VAR_1->fences[VAR_3];


  VAR_5 = FUNC_10(*VAR_6, 1);
  FUNC_2(*VAR_6, ((void*)0));

  if (!VAR_5)
   continue;

  VAR_4 = FUNC_9(VAR_5);
  if (!VAR_4)
   FUNC_1(VAR_5, "signaled from irq context\n");
  else
   FUNC_0();

  FUNC_8(VAR_5);
 } while (VAR_3 != VAR_2);

 return 1;
}
