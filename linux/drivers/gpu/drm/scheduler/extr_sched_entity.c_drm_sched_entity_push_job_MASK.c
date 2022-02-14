
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_sched_job {int queue_node; } ;
struct drm_sched_entity {TYPE_2__* rq; int rq_lock; scalar_t__ stopped; int job_queue; int last_user; } ;
struct TYPE_6__ {int group_leader; } ;
struct TYPE_5__ {TYPE_1__* sched; } ;
struct TYPE_4__ {int num_jobs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (TYPE_2__*,struct drm_sched_entity*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct drm_sched_job*,struct drm_sched_entity*) ;

void FUNC_9(struct drm_sched_job *VAR_1,
          struct drm_sched_entity *VAR_2)
{
 bool VAR_3;

 FUNC_8(VAR_1, VAR_2);
 FUNC_2(&VAR_2->rq->sched->num_jobs);
 FUNC_1(VAR_2->last_user, VAR_0->group_leader);
 VAR_3 = FUNC_7(&VAR_2->job_queue, &VAR_1->queue_node);


 if (VAR_3) {

  FUNC_5(&VAR_2->rq_lock);
  if (VAR_2->stopped) {
   FUNC_6(&VAR_2->rq_lock);

   FUNC_0("Trying to push to a killed entity\n");
   return;
  }
  FUNC_3(VAR_2->rq, VAR_2);
  FUNC_6(&VAR_2->rq_lock);
  FUNC_4(VAR_2->rq->sched);
 }
}
