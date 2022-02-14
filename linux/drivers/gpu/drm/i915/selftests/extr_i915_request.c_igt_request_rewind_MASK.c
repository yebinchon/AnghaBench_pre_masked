
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {int dummy; } ;
struct i915_request {TYPE_1__* engine; } ;
struct i915_gem_context {int dummy; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_3__ {int (* submit_request ) (struct i915_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct intel_context*) ;
 int VAR_4 ;
 struct intel_context* FUNC_2 (struct i915_gem_context*,int ) ;
 int FUNC_3 (struct i915_request*) ;
 scalar_t__ FUNC_4 (struct i915_request*) ;
 int FUNC_5 (struct i915_request*) ;
 int FUNC_6 (struct i915_request*) ;
 int FUNC_7 (struct i915_request*,int ,int) ;
 int FUNC_8 (struct intel_context*) ;
 int FUNC_9 (struct i915_request*) ;
 struct i915_gem_context* FUNC_10 (struct drm_i915_private*,char*) ;
 int FUNC_11 (struct i915_gem_context*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 struct i915_request* FUNC_13 (struct intel_context*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct i915_request*) ;

__attribute__((used)) static int FUNC_20(void *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5;
 struct i915_request *VAR_7, *VAR_8;
 struct i915_gem_context *VAR_9[2];
 struct intel_context *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_14(&VAR_6->drm.struct_mutex);
 VAR_9[0] = FUNC_10(VAR_6, "A");
 VAR_10 = FUNC_2(VAR_9[0], VAR_4);
 FUNC_0(FUNC_1(VAR_10));
 VAR_7 = FUNC_13(VAR_10, 2 * VAR_3);
 FUNC_8(VAR_10);
 if (!VAR_7) {
  VAR_11 = -VAR_1;
  goto err_context_0;
 }

 FUNC_5(VAR_7);
 FUNC_3(VAR_7);

 VAR_9[1] = FUNC_10(VAR_6, "B");
 VAR_10 = FUNC_2(VAR_9[1], VAR_4);
 FUNC_0(FUNC_1(VAR_10));
 VAR_8 = FUNC_13(VAR_10, 0);
 FUNC_8(VAR_10);
 if (!VAR_8) {
  VAR_11 = -VAR_1;
  goto err_context_1;
 }


 if (!FUNC_9(VAR_7)) {
  FUNC_16("failed to cancel request (already executed)!\n");
  FUNC_3(VAR_8);
  goto err_context_1;
 }
 FUNC_5(VAR_8);
 FUNC_3(VAR_8);
 FUNC_17();
 VAR_7->engine->submit_request(VAR_7);
 FUNC_18();

 FUNC_15(&VAR_6->drm.struct_mutex);

 if (FUNC_7(VAR_8, 0, VAR_3) == -VAR_2) {
  FUNC_16("timed out waiting for high priority request\n");
  goto err;
 }

 if (FUNC_4(VAR_7)) {
  FUNC_16("low priority request already completed\n");
  goto err;
 }

 VAR_11 = 0;
err:
 FUNC_6(VAR_8);
 FUNC_14(&VAR_6->drm.struct_mutex);
err_context_1:
 FUNC_11(VAR_9[1]);
 FUNC_6(VAR_7);
err_context_0:
 FUNC_11(VAR_9[0]);
 FUNC_12(VAR_6);
 FUNC_15(&VAR_6->drm.struct_mutex);
 return VAR_11;
}
