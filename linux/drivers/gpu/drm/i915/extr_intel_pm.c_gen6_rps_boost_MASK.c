
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_rps {scalar_t__ boost_freq; int boosts; int work; int cur_freq; int num_waiters; int enabled; } ;
struct i915_request {int lock; int flags; int fence; TYPE_2__* i915; } ;
struct TYPE_3__ {struct intel_rps rps; } ;
struct TYPE_4__ {TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i915_request*) ;
 scalar_t__ FUNC_5 (struct i915_request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct i915_request *VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_1->i915->gt_pm.rps;
 unsigned long VAR_3;
 bool VAR_4;




 if (!VAR_2->enabled)
  return;

 if (FUNC_5(VAR_1))
  return;


 VAR_4 = 0;
 FUNC_7(&VAR_1->lock, VAR_3);
 if (!FUNC_4(VAR_1) &&
     !FUNC_3(&VAR_1->fence)) {
  VAR_4 = !FUNC_1(&VAR_2->num_waiters);
  VAR_1->flags |= VAR_0;
 }
 FUNC_8(&VAR_1->lock, VAR_3);
 if (!VAR_4)
  return;

 if (FUNC_0(VAR_2->cur_freq) < VAR_2->boost_freq)
  FUNC_6(&VAR_2->work);

 FUNC_2(&VAR_2->boosts);
}
