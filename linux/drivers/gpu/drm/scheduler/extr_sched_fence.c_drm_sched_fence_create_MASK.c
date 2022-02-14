
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_fence {int lock; int finished; int scheduled; int sched; void* owner; } ;
struct drm_sched_entity {scalar_t__ fence_context; int fence_seq; TYPE_1__* rq; } ;
struct TYPE_2__ {int sched; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,scalar_t__,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_sched_fence* FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

struct drm_sched_fence *FUNC_4(struct drm_sched_entity *VAR_4,
            void *VAR_5)
{
 struct drm_sched_fence *VAR_6 = ((void*)0);
 unsigned VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->owner = VAR_5;
 VAR_6->sched = VAR_4->rq->sched;
 FUNC_3(&VAR_6->lock);

 VAR_7 = FUNC_0(&VAR_4->fence_seq);
 FUNC_1(&VAR_6->scheduled, &VAR_2,
         &VAR_6->lock, VAR_4->fence_context, VAR_7);
 FUNC_1(&VAR_6->finished, &VAR_1,
         &VAR_6->lock, VAR_4->fence_context + 1, VAR_7);

 return VAR_6;
}
