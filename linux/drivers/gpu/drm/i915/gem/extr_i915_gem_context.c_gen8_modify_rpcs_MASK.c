
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_sseu {int dummy; } ;
struct intel_context {TYPE_1__* engine; int pin_mutex; } ;
struct i915_request {int dummy; } ;
struct TYPE_2__ {int kernel_context; } ;


 scalar_t__ FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*,struct intel_context*,struct intel_sseu) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (int ) ;
 int FUNC_5 (struct intel_context*) ;
 int FUNC_6 (struct intel_context*,struct i915_request*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct intel_context *VAR_0, struct intel_sseu VAR_1)
{
 struct i915_request *VAR_2;
 int VAR_3;

 FUNC_7(&VAR_0->pin_mutex);







 if (!FUNC_5(VAR_0))
  return 0;

 VAR_2 = FUNC_4(VAR_0->engine->kernel_context);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);


 VAR_3 = FUNC_6(VAR_0, VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1);

 FUNC_3(VAR_2);
 return VAR_3;
}
