
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i915_gpu_state {int ref; int simulated; } ;
struct TYPE_7__ {TYPE_2__* primary; int dev; } ;
struct TYPE_5__ {int lock; struct i915_gpu_state* first_error; } ;
struct drm_i915_private {TYPE_3__ drm; TYPE_1__ gpu_error; } ;
typedef int intel_engine_mask_t ;
struct TYPE_8__ {int error_capture; } ;
struct TYPE_6__ {int index; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct i915_gpu_state*) ;
 scalar_t__ FUNC_2 (struct i915_gpu_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct i915_gpu_state*,int ,char const*) ;
 struct i915_gpu_state* FUNC_6 (struct drm_i915_private*) ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int*,int) ;

void FUNC_12(struct drm_i915_private *VAR_2,
         intel_engine_mask_t VAR_3,
         const char *VAR_4)
{
 static bool VAR_5;
 struct i915_gpu_state *VAR_6;
 unsigned long VAR_7;

 if (!VAR_1.error_capture)
  return;

 if (FUNC_2(VAR_2->gpu_error.first_error))
  return;

 VAR_6 = FUNC_6(VAR_2);
 if (FUNC_1(VAR_6))
  return;

 FUNC_4(VAR_2->drm.dev, "%s\n", FUNC_5(VAR_6, VAR_3, VAR_4));

 if (!VAR_6->simulated) {
  FUNC_9(&VAR_2->gpu_error.lock, VAR_7);
  if (!VAR_2->gpu_error.first_error) {
   VAR_2->gpu_error.first_error = VAR_6;
   VAR_6 = ((void*)0);
  }
  FUNC_10(&VAR_2->gpu_error.lock, VAR_7);
 }

 if (VAR_6) {
  FUNC_3(&VAR_6->ref);
  return;
 }

 if (!FUNC_11(&VAR_5, 1) &&
     FUNC_7() - VAR_0 < FUNC_0(180)) {
  FUNC_8("GPU hangs can indicate a bug anywhere in the entire gfx stack, including userspace.\n");
  FUNC_8("Please file a _new_ bug report on bugs.freedesktop.org against DRI -> DRM/Intel\n");
  FUNC_8("drm/i915 developers can then reassign to the right component if it's not a kernel issue.\n");
  FUNC_8("The GPU crash dump is required to analyze GPU hangs, so please always attach it.\n");
  FUNC_8("GPU crash dump saved to /sys/class/drm/card%d/error\n",
   VAR_2->drm.primary->index);
 }
}
