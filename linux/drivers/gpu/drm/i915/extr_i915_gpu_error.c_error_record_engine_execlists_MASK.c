
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {struct i915_request** active; } ;
struct intel_engine_cs {struct intel_engine_execlists execlists; } ;
struct i915_request {int dummy; } ;
struct drm_i915_error_engine {unsigned int num_ports; int * execlist; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(const struct intel_engine_cs *VAR_0,
       struct drm_i915_error_engine *VAR_1)
{
 const struct intel_engine_execlists * const VAR_2 = &VAR_0->execlists;
 struct i915_request * const *VAR_3 = VAR_2->active;
 unsigned int VAR_4 = 0;

 while (*VAR_3)
  FUNC_0(*VAR_3++, &VAR_1->execlist[VAR_4++]);

 VAR_1->num_ports = VAR_4;
}
