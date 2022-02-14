
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;
struct i915_request {int dummy; } ;
struct flex {int dummy; } ;


 scalar_t__ FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*,struct intel_context*,struct flex const*,unsigned int) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct intel_context*) ;

__attribute__((used)) static int FUNC_5(struct intel_context *VAR_0,
       const struct flex *VAR_1, unsigned int VAR_2)
{
 struct i915_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_0, VAR_1, VAR_2);

 FUNC_3(VAR_3);
 return VAR_4;
}
