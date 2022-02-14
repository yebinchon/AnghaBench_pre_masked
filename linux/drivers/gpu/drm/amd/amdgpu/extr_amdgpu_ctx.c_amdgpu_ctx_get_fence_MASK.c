
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ctx_entity {unsigned long long sequence; int * fences; } ;
struct amdgpu_ctx {int ring_lock; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int ) ;
 unsigned long long VAR_1 ;
 struct dma_fence* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct amdgpu_ctx_entity* FUNC_4 (struct drm_sched_entity*) ;

struct dma_fence *FUNC_5(struct amdgpu_ctx *VAR_2,
           struct drm_sched_entity *VAR_3,
           uint64_t VAR_4)
{
 struct amdgpu_ctx_entity *VAR_5 = FUNC_4(VAR_3);
 struct dma_fence *VAR_6;

 FUNC_2(&VAR_2->ring_lock);

 if (VAR_4 == ~0ull)
  VAR_4 = VAR_5->sequence - 1;

 if (VAR_4 >= VAR_5->sequence) {
  FUNC_3(&VAR_2->ring_lock);
  return FUNC_0(-VAR_0);
 }


 if (VAR_4 + VAR_1 < VAR_5->sequence) {
  FUNC_3(&VAR_2->ring_lock);
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_5->fences[VAR_4 & (VAR_1 - 1)]);
 FUNC_3(&VAR_2->ring_lock);

 return VAR_6;
}
