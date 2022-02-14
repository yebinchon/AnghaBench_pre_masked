
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_sched_job {TYPE_3__* s_fence; } ;
struct drm_sched_entity {int job_queue; int last_scheduled; scalar_t__ guilty; int dependency; TYPE_1__* rq; } ;
struct drm_gpu_scheduler {TYPE_2__* ops; } ;
struct TYPE_6__ {int finished; } ;
struct TYPE_5__ {int (* dependency ) (struct drm_sched_job*,struct drm_sched_entity*) ;} ;
struct TYPE_4__ {struct drm_gpu_scheduler* sched; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct drm_sched_entity*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_sched_job*,struct drm_sched_entity*) ;
 struct drm_sched_job* FUNC_8 (int ) ;
 int FUNC_9 (struct drm_sched_job*,int ) ;

struct drm_sched_job *FUNC_10(struct drm_sched_entity *VAR_1)
{
 struct drm_gpu_scheduler *VAR_2 = VAR_1->rq->sched;
 struct drm_sched_job *VAR_3;

 VAR_3 = FUNC_8(FUNC_5(&VAR_1->job_queue));
 if (!VAR_3)
  return ((void*)0);

 while ((VAR_1->dependency =
   VAR_2->ops->dependency(VAR_3, VAR_1))) {
  FUNC_9(VAR_3, VAR_1->dependency);

  if (FUNC_4(VAR_1))
   return ((void*)0);
 }


 if (VAR_1->guilty && FUNC_0(VAR_1->guilty))
  FUNC_3(&VAR_3->s_fence->finished, -VAR_0);

 FUNC_2(VAR_1->last_scheduled);
 VAR_1->last_scheduled = FUNC_1(&VAR_3->s_fence->finished);

 FUNC_6(&VAR_1->job_queue);
 return VAR_3;
}
