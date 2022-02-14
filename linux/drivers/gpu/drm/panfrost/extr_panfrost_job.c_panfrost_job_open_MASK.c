
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panfrost_job_slot {TYPE_2__* queue; } ;
struct panfrost_file_priv {int * sched_entity; struct panfrost_device* pfdev; } ;
struct panfrost_device {struct panfrost_job_slot* js; } ;
struct drm_sched_rq {int dummy; } ;
struct TYPE_3__ {struct drm_sched_rq* sched_rq; } ;
struct TYPE_4__ {TYPE_1__ sched; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct drm_sched_rq**,int,int *) ;

int FUNC_2(struct panfrost_file_priv *VAR_2)
{
 struct panfrost_device *VAR_3 = VAR_2->pfdev;
 struct panfrost_job_slot *VAR_4 = VAR_3->js;
 struct drm_sched_rq *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_4->queue[VAR_7].sched.sched_rq[VAR_0];
  VAR_6 = FUNC_1(&VAR_2->sched_entity[VAR_7], &VAR_5, 1, ((void*)0));
  if (FUNC_0(VAR_6))
   return VAR_6;
 }
 return 0;
}
