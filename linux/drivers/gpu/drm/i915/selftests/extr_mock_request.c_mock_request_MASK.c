
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {int dummy; } ;
struct TYPE_2__ {unsigned long delay; } ;
struct i915_request {TYPE_1__ mock; } ;


 scalar_t__ FUNC_0 (struct i915_request*) ;
 struct i915_request* FUNC_1 (struct intel_context*) ;

struct i915_request *
FUNC_2(struct intel_context *VAR_0, unsigned long VAR_1)
{
 struct i915_request *VAR_2;


 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 VAR_2->mock.delay = VAR_1;
 return VAR_2;
}
