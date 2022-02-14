
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct panfrost_job_slot {TYPE_2__* queue; } ;
struct TYPE_8__ {TYPE_3__* slot; } ;
struct panfrost_device {TYPE_4__ devfreq; struct panfrost_job_slot* js; } ;
struct TYPE_7__ {scalar_t__ busy; } ;
struct TYPE_5__ {int hw_rq_count; } ;
struct TYPE_6__ {TYPE_1__ sched; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct panfrost_device *VAR_1)
{
 struct panfrost_job_slot *VAR_2 = VAR_1->js;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (FUNC_0(&VAR_2->queue[VAR_3].sched.hw_rq_count))
   return 0;


  if (VAR_1->devfreq.slot[VAR_3].busy)
   return 0;
 }

 return 1;
}
