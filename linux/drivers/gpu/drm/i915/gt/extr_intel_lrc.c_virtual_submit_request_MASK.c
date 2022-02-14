
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
struct TYPE_8__ {int tasklet; int queue_priority_hint; } ;
struct TYPE_10__ {scalar_t__ submit_request; TYPE_4__ active; TYPE_3__ execlists; int name; } ;
struct virtual_engine {TYPE_5__ base; struct i915_request* request; } ;
struct TYPE_7__ {int link; } ;
struct TYPE_6__ {int seqno; int context; } ;
struct i915_request {TYPE_2__ sched; TYPE_1__ fence; int engine; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct i915_request*) ;
 scalar_t__ FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct i915_request*) ;
 int FUNC_5 (struct i915_request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct i915_request*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 struct virtual_engine* FUNC_12 (int ) ;
 int FUNC_13 (struct virtual_engine*) ;

__attribute__((used)) static void FUNC_14(struct i915_request *VAR_1)
{
 struct virtual_engine *VAR_2 = FUNC_12(VAR_1->engine);
 struct i915_request *VAR_3;
 unsigned long VAR_4;

 FUNC_1("%s: rq=%llx:%lld\n",
    VAR_2->base.name,
    VAR_1->fence.context,
    VAR_1->fence.seqno);

 FUNC_0(VAR_2->base.submit_request != FUNC_14);

 FUNC_9(&VAR_2->base.active.lock, VAR_4);

 VAR_3 = VAR_2->request;
 if (VAR_3) {
  FUNC_0(!FUNC_3(VAR_3));
  FUNC_2(VAR_3);
  FUNC_5(VAR_3);
 }

 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1);

  VAR_2->base.execlists.queue_priority_hint = VAR_0;
  VAR_2->request = ((void*)0);
 } else {
  VAR_2->base.execlists.queue_priority_hint = FUNC_8(VAR_1);
  VAR_2->request = FUNC_4(VAR_1);

  FUNC_0(!FUNC_6(FUNC_13(VAR_2)));
  FUNC_7(&VAR_1->sched.link, FUNC_13(VAR_2));

  FUNC_11(&VAR_2->base.execlists.tasklet);
 }

 FUNC_10(&VAR_2->base.active.lock, VAR_4);
}
