
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {scalar_t__ wakeref_serial; scalar_t__ serial; int kernel_context; int wakeref; int gt; } ;
struct TYPE_3__ {int priority; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct i915_request {TYPE_2__ sched; int timeline; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 struct i915_request* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i915_request*,int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct i915_request*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(struct intel_engine_cs *VAR_2)
{
 struct i915_request *VAR_3;
 unsigned long VAR_4;
 bool VAR_5 = 1;


 if (VAR_2->wakeref_serial == VAR_2->serial)
  return 1;


 if (FUNC_8(VAR_2->gt))
  return 1;
 VAR_4 = FUNC_5(VAR_2->kernel_context);

 VAR_3 = FUNC_2(VAR_2->kernel_context, VAR_0);
 if (FUNC_0(VAR_3))

  goto out_unlock;

 FUNC_9(VAR_3->timeline);


 VAR_2->wakeref_serial = VAR_2->serial + 1;
 FUNC_7(VAR_3);


 VAR_3->sched.attr.priority = VAR_1;
 FUNC_1(VAR_3);


 FUNC_4(&VAR_2->wakeref);
 FUNC_3(VAR_3, ((void*)0));

 VAR_5 = 0;
out_unlock:
 FUNC_6(VAR_2->kernel_context, VAR_4);
 return VAR_5;
}
