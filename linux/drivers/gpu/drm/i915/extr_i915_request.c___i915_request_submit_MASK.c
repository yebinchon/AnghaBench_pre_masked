
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int requests; int lock; } ;
struct intel_engine_cs {TYPE_3__ active; int serial; int (* emit_fini_breadcrumb ) (struct i915_request*,scalar_t__) ;int saturated; int name; } ;
struct TYPE_8__ {int flags; int seqno; int context; } ;
struct TYPE_6__ {int link; int semaphores; } ;
struct i915_request {int lock; TYPE_4__ fence; TYPE_2__ sched; scalar_t__ postfix; TYPE_1__* ring; int semaphore; int gem_context; struct intel_engine_cs* engine; } ;
struct TYPE_5__ {scalar_t__ vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct i915_request*) ;
 int FUNC_6 (struct i915_request*) ;
 int FUNC_7 (struct i915_request*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct intel_engine_cs*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct i915_request*,scalar_t__) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (struct i915_request*) ;

bool FUNC_19(struct i915_request *VAR_5)
{
 struct intel_engine_cs *VAR_6 = VAR_5->engine;
 bool VAR_7 = 0;

 FUNC_1("%s fence %llx:%lld, current %d\n",
    VAR_6->name,
    VAR_5->fence.context, VAR_5->fence.seqno,
    FUNC_3(VAR_5));

 FUNC_0(!FUNC_10());
 FUNC_12(&VAR_6->active.lock);
 if (FUNC_5(VAR_5))
  goto xfer;

 if (FUNC_4(VAR_5->gem_context))
  FUNC_7(VAR_5, -VAR_2);
 if (VAR_5->sched.semaphores &&
     FUNC_8(&VAR_5->semaphore))
  VAR_6->saturated |= VAR_5->sched.semaphores;

 VAR_6->emit_fini_breadcrumb(VAR_5,
         VAR_5->ring->vaddr + VAR_5->postfix);

 FUNC_18(VAR_5);
 VAR_6->serial++;
 VAR_7 = 1;

xfer:
 FUNC_13(&VAR_5->lock, VAR_4);

 if (!FUNC_16(VAR_3, &VAR_5->fence.flags))
  FUNC_11(&VAR_5->sched.link, &VAR_6->active.requests);

 if (FUNC_17(VAR_0, &VAR_5->fence.flags) &&
     !FUNC_17(VAR_1, &VAR_5->fence.flags) &&
     !FUNC_6(VAR_5))
  FUNC_9(VAR_6);

 FUNC_2(VAR_5);

 FUNC_14(&VAR_5->lock);

 return VAR_7;
}
