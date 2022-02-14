
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_timeline {int vm; } ;
struct i915_ppgtt {int vm; } ;
struct i915_gem_context {int vm; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {int gt; TYPE_1__ drm; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct intel_timeline* FUNC_1 (struct intel_timeline*) ;
 struct intel_timeline* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_5 (struct intel_timeline*) ;
 int FUNC_6 (struct intel_timeline*) ;
 int FUNC_7 (struct intel_timeline*,int *) ;
 int FUNC_8 (struct intel_timeline*,struct intel_timeline*) ;
 struct intel_timeline* FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct intel_timeline*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 struct intel_timeline* FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (int *) ;
 struct intel_timeline* FUNC_14 (int *,int *) ;
 int FUNC_15 (struct intel_timeline*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct intel_timeline*) ;

__attribute__((used)) static struct i915_gem_context *
FUNC_18(struct drm_i915_private *VAR_2, unsigned int VAR_3)
{
 struct i915_gem_context *VAR_4;

 FUNC_16(&VAR_2->drm.struct_mutex);

 if (VAR_3 & VAR_1 &&
     !FUNC_3(VAR_2))
  return FUNC_2(-VAR_0);


 FUNC_11(VAR_2);

 VAR_4 = FUNC_9(VAR_2);
 if (FUNC_5(VAR_4))
  return VAR_4;

 if (FUNC_4(VAR_2)) {
  struct i915_ppgtt *VAR_5;

  VAR_5 = FUNC_12(VAR_2);
  if (FUNC_5(VAR_5)) {
   FUNC_0("PPGTT setup failed (%ld)\n",
      FUNC_6(VAR_5));
   FUNC_10(VAR_4);
   return FUNC_1(VAR_5);
  }

  FUNC_7(VAR_4, &VAR_5->vm);
  FUNC_13(&VAR_5->vm);
 }

 if (VAR_3 & VAR_1) {
  struct intel_timeline *VAR_6;

  VAR_6 = FUNC_14(&VAR_2->gt, ((void*)0));
  if (FUNC_5(VAR_6)) {
   FUNC_10(VAR_4);
   return FUNC_1(VAR_6);
  }

  FUNC_8(VAR_4, VAR_6);
  FUNC_15(VAR_6);
 }

 FUNC_17(VAR_4);

 return VAR_4;
}
