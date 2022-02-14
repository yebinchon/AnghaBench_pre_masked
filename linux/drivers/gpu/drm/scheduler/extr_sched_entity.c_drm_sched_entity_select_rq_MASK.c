
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_rq {int dummy; } ;
struct drm_sched_entity {int num_rq_list; int rq_lock; struct drm_sched_rq* rq; int last_scheduled; int job_queue; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;
 int FUNC_1 (struct dma_fence*) ;
 struct drm_sched_rq* FUNC_2 (struct drm_sched_entity*) ;
 int FUNC_3 (struct drm_sched_rq*,struct drm_sched_entity*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(struct drm_sched_entity *VAR_0)
{
 struct dma_fence *VAR_1;
 struct drm_sched_rq *VAR_2;

 if (FUNC_6(&VAR_0->job_queue) || VAR_0->num_rq_list <= 1)
  return;

 VAR_1 = FUNC_0(VAR_0->last_scheduled);
 if (VAR_1 && !FUNC_1(VAR_1))
  return;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == VAR_0->rq)
  return;

 FUNC_4(&VAR_0->rq_lock);
 FUNC_3(VAR_0->rq, VAR_0);
 VAR_0->rq = VAR_2;
 FUNC_5(&VAR_0->rq_lock);
}
