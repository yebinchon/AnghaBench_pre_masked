
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_execlists {struct i915_request** inflight; } ;
struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; struct intel_engine_execlists execlists; } ;
struct i915_request {int dummy; } ;


 int FUNC_0 (struct i915_request**) ;
 int FUNC_1 (struct intel_engine_cs* const) ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request**,struct i915_request**,int) ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_0)
{
 struct intel_engine_cs * const VAR_1 = (struct intel_engine_cs *)VAR_0;
 struct intel_engine_execlists * const VAR_2 = &VAR_1->execlists;
 struct i915_request **VAR_3, *VAR_4;
 unsigned long VAR_5;

 FUNC_5(&VAR_1->active.lock, VAR_5);

 for (VAR_3 = VAR_2->inflight; (VAR_4 = *VAR_3); VAR_3++) {
  if (!FUNC_2(VAR_4))
   break;

  FUNC_4(VAR_4);
 }
 if (VAR_3 != VAR_2->inflight) {
  int VAR_6 = VAR_3 - VAR_2->inflight;
  int VAR_7 = FUNC_0(VAR_2->inflight) - VAR_6;
  FUNC_3(VAR_2->inflight, VAR_3, VAR_7 * sizeof(*VAR_3));
 }

 FUNC_1(VAR_1);

 FUNC_6(&VAR_1->active.lock, VAR_5);
}
