
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
struct TYPE_5__ {int rb_root; } ;
struct TYPE_6__ {TYPE_1__ queue; } ;
struct intel_engine_cs {TYPE_3__ active; TYPE_2__ execlists; } ;
struct TYPE_8__ {int link; } ;
struct i915_request {TYPE_4__ sched; struct intel_engine_cs* engine; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_engine_cs*,TYPE_4__*,int ) ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct intel_engine_cs*,struct i915_request*) ;

__attribute__((used)) static void FUNC_8(struct i915_request *VAR_0)
{
 struct intel_engine_cs *VAR_1 = VAR_0->engine;
 unsigned long VAR_2;


 FUNC_5(&VAR_1->active.lock, VAR_2);

 FUNC_3(VAR_1, &VAR_0->sched, FUNC_4(VAR_0));

 FUNC_0(FUNC_1(&VAR_1->execlists.queue.rb_root));
 FUNC_0(FUNC_2(&VAR_0->sched.link));

 FUNC_7(VAR_1, VAR_0);

 FUNC_6(&VAR_1->active.lock, VAR_2);
}
