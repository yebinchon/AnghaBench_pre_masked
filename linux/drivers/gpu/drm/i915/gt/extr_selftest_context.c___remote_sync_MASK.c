
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;
struct i915_request {int dummy; } ;


 scalar_t__ FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 struct i915_request* FUNC_3 (struct intel_context*) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_context*,struct i915_request*) ;
 int FUNC_6 (struct intel_context*) ;
 int FUNC_7 (struct i915_request*) ;

__attribute__((used)) static int FUNC_8(struct intel_context *VAR_0, struct intel_context *VAR_1)
{
 struct i915_request *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  goto unpin;
 }

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2);
  goto unpin;
 }

 VAR_3 = FUNC_7(VAR_2);

unpin:
 FUNC_6(VAR_1);
 return VAR_3;
}
