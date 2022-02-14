
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_job {int node; int id; int s_fence; TYPE_1__* s_priority; struct drm_sched_entity* entity; struct drm_gpu_scheduler* sched; } ;
struct drm_sched_entity {TYPE_1__* rq; } ;
struct drm_gpu_scheduler {int sched_rq; int job_id_count; } ;
struct TYPE_2__ {struct drm_gpu_scheduler* sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_sched_entity*) ;
 int FUNC_3 (struct drm_sched_entity*,void*) ;

int FUNC_4(struct drm_sched_job *VAR_2,
         struct drm_sched_entity *VAR_3,
         void *VAR_4)
{
 struct drm_gpu_scheduler *VAR_5;

 FUNC_2(VAR_3);
 if (!VAR_3->rq)
  return -VAR_0;

 VAR_5 = VAR_3->rq->sched;

 VAR_2->sched = VAR_5;
 VAR_2->entity = VAR_3;
 VAR_2->s_priority = VAR_3->rq - VAR_5->sched_rq;
 VAR_2->s_fence = FUNC_3(VAR_3, VAR_4);
 if (!VAR_2->s_fence)
  return -VAR_1;
 VAR_2->id = FUNC_1(&VAR_5->job_id_count);

 FUNC_0(&VAR_2->node);

 return 0;
}
