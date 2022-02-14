
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_execlists {struct i915_request** pending; struct i915_request** active; } ;
struct TYPE_2__ {int lock; int enabled_at; int start; scalar_t__ active; int enabled; } ;
struct intel_engine_cs {TYPE_1__ stats; struct intel_engine_execlists execlists; } ;
struct i915_request {int hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_engine_execlists*) ;
 int FUNC_1 (struct intel_engine_execlists*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct intel_engine_cs *VAR_2)
{
 struct intel_engine_execlists *VAR_3 = &VAR_2->execlists;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!FUNC_3(VAR_2))
  return -VAR_1;

 FUNC_0(VAR_3);
 FUNC_6(&VAR_2->stats.lock, VAR_4);

 if (FUNC_5(VAR_2->stats.enabled == ~0)) {
  VAR_5 = -VAR_0;
  goto unlock;
 }

 if (VAR_2->stats.enabled++ == 0) {
  struct i915_request * const *VAR_6;
  struct i915_request *VAR_7;

  VAR_2->stats.enabled_at = FUNC_4();


  for (VAR_6 = VAR_3->active; (VAR_7 = *VAR_6); VAR_6++)
   VAR_2->stats.active++;

  for (VAR_6 = VAR_3->pending; (VAR_7 = *VAR_6); VAR_6++) {

   if (!FUNC_2(VAR_7->hw_context))
    VAR_2->stats.active++;
  }

  if (VAR_2->stats.active)
   VAR_2->stats.start = VAR_2->stats.enabled_at;
 }

unlock:
 FUNC_7(&VAR_2->stats.lock, VAR_4);
 FUNC_1(VAR_3);

 return VAR_5;
}
