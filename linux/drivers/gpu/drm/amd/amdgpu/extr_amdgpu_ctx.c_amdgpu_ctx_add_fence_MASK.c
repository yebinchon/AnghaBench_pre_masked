
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ctx_entity {int sequence; struct dma_fence** fences; } ;
struct amdgpu_ctx {int ring_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct amdgpu_ctx_entity* FUNC_6 (struct drm_sched_entity*) ;

void FUNC_7(struct amdgpu_ctx *VAR_1,
     struct drm_sched_entity *VAR_2,
     struct dma_fence *VAR_3, uint64_t* VAR_4)
{
 struct amdgpu_ctx_entity *VAR_5 = FUNC_6(VAR_2);
 uint64_t VAR_6 = VAR_5->sequence;
 struct dma_fence *VAR_7 = ((void*)0);
 unsigned VAR_8 = 0;

 VAR_8 = VAR_6 & (VAR_0 - 1);
 VAR_7 = VAR_5->fences[VAR_8];
 if (VAR_7)
  FUNC_0(!FUNC_2(VAR_7));

 FUNC_1(VAR_3);

 FUNC_4(&VAR_1->ring_lock);
 VAR_5->fences[VAR_8] = VAR_3;
 VAR_5->sequence++;
 FUNC_5(&VAR_1->ring_lock);

 FUNC_3(VAR_7);
 if (VAR_4)
  *VAR_4 = VAR_6;
}
