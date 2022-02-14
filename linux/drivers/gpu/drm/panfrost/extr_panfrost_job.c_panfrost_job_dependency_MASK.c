
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_job {unsigned int in_fence_count; unsigned int bo_count; struct dma_fence** implicit_fences; struct dma_fence** in_fences; } ;
struct drm_sched_job {int dummy; } ;
struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct panfrost_job* FUNC_0 (struct drm_sched_job*) ;

__attribute__((used)) static struct dma_fence *FUNC_1(struct drm_sched_job *VAR_0,
       struct drm_sched_entity *VAR_1)
{
 struct panfrost_job *VAR_2 = FUNC_0(VAR_0);
 struct dma_fence *VAR_3;
 unsigned int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2->in_fence_count; VAR_4++) {
  if (VAR_2->in_fences[VAR_4]) {
   VAR_3 = VAR_2->in_fences[VAR_4];
   VAR_2->in_fences[VAR_4] = ((void*)0);
   return VAR_3;
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->bo_count; VAR_4++) {
  if (VAR_2->implicit_fences[VAR_4]) {
   VAR_3 = VAR_2->implicit_fences[VAR_4];
   VAR_2->implicit_fences[VAR_4] = ((void*)0);
   return VAR_3;
  }
 }

 return ((void*)0);
}
