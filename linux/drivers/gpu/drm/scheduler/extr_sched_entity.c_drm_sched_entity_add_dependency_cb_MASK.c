
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_fence {int scheduled; struct drm_gpu_scheduler* sched; } ;
struct drm_sched_entity {scalar_t__ fence_context; struct dma_fence* dependency; int cb; TYPE_1__* rq; } ;
struct drm_gpu_scheduler {int dummy; } ;
struct dma_fence {scalar_t__ context; } ;
struct TYPE_2__ {struct drm_gpu_scheduler* sched; } ;


 int FUNC_0 (struct dma_fence*,int *,int ) ;
 struct dma_fence* FUNC_1 (int *) ;
 int FUNC_2 (struct dma_fence*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_sched_fence* FUNC_3 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_4(struct drm_sched_entity *VAR_2)
{
 struct drm_gpu_scheduler *VAR_3 = VAR_2->rq->sched;
 struct dma_fence *VAR_4 = VAR_2->dependency;
 struct drm_sched_fence *VAR_5;

 if (VAR_4->context == VAR_2->fence_context ||
     VAR_4->context == VAR_2->fence_context + 1) {





  FUNC_2(VAR_2->dependency);
  return 0;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 && VAR_5->sched == VAR_3) {





  VAR_4 = FUNC_1(&VAR_5->scheduled);
  FUNC_2(VAR_2->dependency);
  VAR_2->dependency = VAR_4;
  if (!FUNC_0(VAR_4, &VAR_2->cb,
         VAR_0))
   return 1;


  FUNC_2(VAR_4);
  return 0;
 }

 if (!FUNC_0(VAR_2->dependency, &VAR_2->cb,
        VAR_1))
  return 1;

 FUNC_2(VAR_2->dependency);
 return 0;
}
