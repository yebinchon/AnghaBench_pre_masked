
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_timeline {int link; int active_count; int pin_count; int mutex; TYPE_1__* gt; } ;
struct intel_gt_timelines {int lock; int active_list; } ;
struct TYPE_2__ {struct intel_gt_timelines timelines; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct intel_timeline *VAR_0)
{
 struct intel_gt_timelines *VAR_1 = &VAR_0->gt->timelines;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->mutex);

 FUNC_0(!FUNC_1(&VAR_0->pin_count));
 if (VAR_0->active_count++)
  return;
 FUNC_0(!VAR_0->active_count);

 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_2(&VAR_0->link, &VAR_1->active_list);
 FUNC_5(&VAR_1->lock, VAR_2);
}
