
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_entity {int rq_list; int * last_scheduled; int * dependency; int cb; int job_queue; TYPE_1__* rq; } ;
struct drm_gpu_scheduler {int thread; } ;
struct TYPE_2__ {struct drm_gpu_scheduler* sched; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_sched_entity*) ;
 int FUNC_3 (TYPE_1__*,struct drm_sched_entity*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;

void FUNC_8(struct drm_sched_entity *VAR_0)
{
 struct drm_gpu_scheduler *VAR_1 = ((void*)0);

 if (VAR_0->rq) {
  VAR_1 = VAR_0->rq->sched;
  FUNC_3(VAR_0->rq, VAR_0);
 }




 if (FUNC_7(&VAR_0->job_queue)) {
  if (VAR_1) {



   FUNC_5(VAR_1->thread);
   FUNC_6(VAR_1->thread);
  }
  if (VAR_0->dependency) {
   FUNC_1(VAR_0->dependency,
        &VAR_0->cb);
   FUNC_0(VAR_0->dependency);
   VAR_0->dependency = ((void*)0);
  }

  FUNC_2(VAR_0);
 }

 FUNC_0(VAR_0->last_scheduled);
 VAR_0->last_scheduled = ((void*)0);
 FUNC_4(VAR_0->rq_list);
}
