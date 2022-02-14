
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_fence {struct drm_gpu_scheduler* sched; } ;
struct drm_sched_entity {scalar_t__ fence_context; TYPE_1__* rq; } ;
struct drm_gpu_scheduler {int dummy; } ;
struct dma_fence {scalar_t__ context; } ;
struct TYPE_2__ {struct drm_gpu_scheduler* sched; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 struct drm_sched_fence* FUNC_1 (struct dma_fence*) ;

bool FUNC_2(struct dma_fence* VAR_0,
        struct drm_sched_entity *VAR_1)
{
 struct drm_gpu_scheduler *VAR_2 = VAR_1->rq->sched;
 struct drm_sched_fence *VAR_3;

 if (!VAR_0 || FUNC_0(VAR_0))
  return 0;
 if (VAR_0->context == VAR_1->fence_context)
  return 1;
 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 && VAR_3->sched == VAR_2)
  return 1;

 return 0;
}
