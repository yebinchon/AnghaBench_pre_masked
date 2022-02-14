
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int dummy; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; TYPE_1__** engine; } ;
struct TYPE_3__ {int kernel_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct i915_request*) ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (struct i915_request*,int ,long const) ;
 int FUNC_5 (struct drm_i915_private*) ;
 struct i915_request* FUNC_6 (int ,long const) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(void *VAR_5)
{
 const long VAR_6 = VAR_3 / 4;
 struct drm_i915_private *VAR_7 = VAR_5;
 struct i915_request *VAR_8;
 int VAR_9 = -VAR_0;



 FUNC_7(&VAR_7->drm.struct_mutex);
 VAR_8 = FUNC_6(VAR_7->engine[VAR_4]->kernel_context, VAR_6);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto out_unlock;
 }
 FUNC_2(VAR_8);

 if (FUNC_4(VAR_8, 0, 0) != -VAR_2) {
  FUNC_9("request wait (busy query) succeeded (expected timeout before submit!)\n");
  goto out_request;
 }

 if (FUNC_4(VAR_8, 0, VAR_6) != -VAR_2) {
  FUNC_9("request wait succeeded (expected timeout before submit!)\n");
  goto out_request;
 }

 if (FUNC_1(VAR_8)) {
  FUNC_9("request completed before submit!!\n");
  goto out_request;
 }

 FUNC_0(VAR_8);

 if (FUNC_4(VAR_8, 0, 0) != -VAR_2) {
  FUNC_9("request wait (busy query) succeeded (expected timeout after submit!)\n");
  goto out_request;
 }

 if (FUNC_1(VAR_8)) {
  FUNC_9("request completed immediately!\n");
  goto out_request;
 }

 if (FUNC_4(VAR_8, 0, VAR_6 / 2) != -VAR_2) {
  FUNC_9("request wait succeeded (expected timeout!)\n");
  goto out_request;
 }

 if (FUNC_4(VAR_8, 0, VAR_6) == -VAR_2) {
  FUNC_9("request wait timed out!\n");
  goto out_request;
 }

 if (!FUNC_1(VAR_8)) {
  FUNC_9("request not complete after waiting!\n");
  goto out_request;
 }

 if (FUNC_4(VAR_8, 0, VAR_6) == -VAR_2) {
  FUNC_9("request wait timed out when already complete!\n");
  goto out_request;
 }

 VAR_9 = 0;
out_request:
 FUNC_3(VAR_8);
out_unlock:
 FUNC_5(VAR_7);
 FUNC_8(&VAR_7->drm.struct_mutex);
 return VAR_9;
}
