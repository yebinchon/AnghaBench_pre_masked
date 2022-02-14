
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; int name; } ;
struct TYPE_7__ {int priority; } ;
struct TYPE_8__ {scalar_t__ semaphores; TYPE_3__ attr; } ;
struct TYPE_6__ {int flags; int seqno; int context; } ;
struct i915_request {TYPE_4__ sched; int lock; TYPE_2__ fence; struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (struct i915_request*) ;
 scalar_t__ FUNC_5 (struct i915_request*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

void FUNC_11(struct i915_request *VAR_4)
{
 struct intel_engine_cs *VAR_5 = VAR_4->engine;

 FUNC_1("%s fence %llx:%lld, current %d\n",
    VAR_5->name,
    VAR_4->fence.context, VAR_4->fence.seqno,
    FUNC_3(VAR_4));

 FUNC_0(!FUNC_6());
 FUNC_7(&VAR_5->active.lock);







 FUNC_8(&VAR_4->lock, VAR_3);

 if (FUNC_10(VAR_0, &VAR_4->fence.flags))
  FUNC_4(VAR_4);

 FUNC_0(!FUNC_10(VAR_1, &VAR_4->fence.flags));
 FUNC_2(VAR_1, &VAR_4->fence.flags);

 FUNC_9(&VAR_4->lock);


 if (VAR_4->sched.semaphores && FUNC_5(VAR_4)) {
  VAR_4->sched.attr.priority |= VAR_2;
  VAR_4->sched.semaphores = 0;
 }
}
