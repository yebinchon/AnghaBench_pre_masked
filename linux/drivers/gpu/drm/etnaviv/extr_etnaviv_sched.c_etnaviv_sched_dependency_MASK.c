
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gem_submit_bo {int nr_shared; struct dma_fence** shared; struct dma_fence* excl; } ;
struct etnaviv_gem_submit {int nr_bos; struct etnaviv_gem_submit_bo* bos; struct dma_fence* in_fence; } ;
struct drm_sched_job {int dummy; } ;
struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence**) ;
 struct etnaviv_gem_submit* FUNC_3 (struct drm_sched_job*) ;
 scalar_t__ FUNC_4 (struct dma_fence*) ;

__attribute__((used)) static struct dma_fence *
FUNC_5(struct drm_sched_job *VAR_0,
    struct drm_sched_entity *VAR_1)
{
 struct etnaviv_gem_submit *VAR_2 = FUNC_3(VAR_0);
 struct dma_fence *VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_2->in_fence)) {
  VAR_3 = VAR_2->in_fence;
  VAR_2->in_fence = ((void*)0);

  if (!FUNC_0(VAR_3))
   return VAR_3;

  FUNC_1(VAR_3);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_bos; VAR_4++) {
  struct etnaviv_gem_submit_bo *VAR_5 = &VAR_2->bos[VAR_4];
  int VAR_6;

  if (VAR_5->excl) {
   VAR_3 = VAR_5->excl;
   VAR_5->excl = ((void*)0);

   if (!FUNC_0(VAR_3))
    return VAR_3;

   FUNC_1(VAR_3);
  }

  for (VAR_6 = 0; VAR_6 < VAR_5->nr_shared; VAR_6++) {
   if (!VAR_5->shared[VAR_6])
    continue;

   VAR_3 = VAR_5->shared[VAR_6];
   VAR_5->shared[VAR_6] = ((void*)0);

   if (!FUNC_0(VAR_3))
    return VAR_3;

   FUNC_1(VAR_3);
  }
  FUNC_2(VAR_5->shared);
  VAR_5->nr_shared = 0;
  VAR_5->shared = ((void*)0);
 }

 return ((void*)0);
}
