
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct drm_sched_entity {int stopped; int rq_lock; TYPE_1__* rq; int last_user; } ;
struct drm_gpu_scheduler {int job_scheduled; } ;
struct TYPE_4__ {int flags; scalar_t__ exit_code; struct task_struct* group_leader; } ;
struct TYPE_3__ {struct drm_gpu_scheduler* sched; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct task_struct* FUNC_0 (int *,struct task_struct*,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct drm_sched_entity*) ;
 int FUNC_2 (TYPE_1__*,struct drm_sched_entity*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 long FUNC_6 (int ,int ,long) ;

long FUNC_7(struct drm_sched_entity *VAR_3, long VAR_4)
{
 struct drm_gpu_scheduler *VAR_5;
 struct task_struct *VAR_6;
 long VAR_7 = VAR_4;

 if (!VAR_3->rq)
  return 0;

 VAR_5 = VAR_3->rq->sched;




 if (VAR_2->flags & VAR_0) {
  if (VAR_4)
   VAR_7 = FUNC_6(
     VAR_5->job_scheduled,
     FUNC_1(VAR_3),
     VAR_4);
 } else {
  FUNC_5(VAR_5->job_scheduled,
        FUNC_1(VAR_3));
 }


 VAR_6 = FUNC_0(&VAR_3->last_user, VAR_2->group_leader, ((void*)0));
 if ((!VAR_6 || VAR_6 == VAR_2->group_leader) &&
     (VAR_2->flags & VAR_0) && (VAR_2->exit_code == VAR_1)) {
  FUNC_3(&VAR_3->rq_lock);
  VAR_3->stopped = 1;
  FUNC_2(VAR_3->rq, VAR_3);
  FUNC_4(&VAR_3->rq_lock);
 }

 return VAR_7;
}
