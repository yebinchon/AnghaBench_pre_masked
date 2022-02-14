
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panfrost_job_slot {TYPE_1__* queue; } ;
struct panfrost_device {struct panfrost_job_slot* js; } ;
struct TYPE_2__ {int sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct panfrost_device*,int ,int ) ;

void FUNC_2(struct panfrost_device *VAR_2)
{
 struct panfrost_job_slot *VAR_3 = VAR_2->js;
 int VAR_4;

 FUNC_1(VAR_2, VAR_0, 0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(&VAR_3->queue[VAR_4].sched);

}
