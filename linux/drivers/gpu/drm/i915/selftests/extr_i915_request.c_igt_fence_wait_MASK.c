
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int fence; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; TYPE_1__** engine; } ;
struct TYPE_3__ {int kernel_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int,long const) ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 struct i915_request* FUNC_4 (int ,long const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(void *VAR_5)
{
 const long VAR_6 = VAR_3 / 4;
 struct drm_i915_private *VAR_7 = VAR_5;
 struct i915_request *VAR_8;
 int VAR_9 = -VAR_0;



 FUNC_5(&VAR_7->drm.struct_mutex);
 VAR_8 = FUNC_4(VAR_7->engine[VAR_4]->kernel_context, VAR_6);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto out_locked;
 }

 if (FUNC_1(&VAR_8->fence, 0, VAR_6) != -VAR_2) {
  FUNC_7("fence wait success before submit (expected timeout)!\n");
  goto out_locked;
 }

 FUNC_2(VAR_8);
 FUNC_6(&VAR_7->drm.struct_mutex);

 if (FUNC_0(&VAR_8->fence)) {
  FUNC_7("fence signaled immediately!\n");
  goto out_device;
 }

 if (FUNC_1(&VAR_8->fence, 0, VAR_6 / 2) != -VAR_2) {
  FUNC_7("fence wait success after submit (expected timeout)!\n");
  goto out_device;
 }

 if (FUNC_1(&VAR_8->fence, 0, VAR_6) <= 0) {
  FUNC_7("fence wait timed out (expected success)!\n");
  goto out_device;
 }

 if (!FUNC_0(&VAR_8->fence)) {
  FUNC_7("fence unsignaled after waiting!\n");
  goto out_device;
 }

 if (FUNC_1(&VAR_8->fence, 0, VAR_6) <= 0) {
  FUNC_7("fence wait timed out when complete (expected success)!\n");
  goto out_device;
 }

 VAR_9 = 0;
out_device:
 FUNC_5(&VAR_7->drm.struct_mutex);
out_locked:
 FUNC_3(VAR_7);
 FUNC_6(&VAR_7->drm.struct_mutex);
 return VAR_9;
}
