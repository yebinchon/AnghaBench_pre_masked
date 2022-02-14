
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_vma {scalar_t__ fence; } ;
struct i915_ggtt_view {int dummy; } ;
struct TYPE_2__ {int pending_fb_pin; } ;
struct drm_i915_private {int runtime_pm; TYPE_1__ gpu_error; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {struct drm_device* dev; } ;
struct drm_device {int struct_mutex; } ;
typedef int intel_wakeref_t ;


 struct i915_vma* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 struct i915_vma* FUNC_8 (struct drm_i915_gem_object*,int,struct i915_ggtt_view const*,unsigned int) ;
 int FUNC_9 (struct drm_i915_gem_object*) ;
 int FUNC_10 (struct i915_vma*) ;
 int FUNC_11 (struct i915_vma*) ;
 scalar_t__ FUNC_12 (struct i915_vma*) ;
 int FUNC_13 (struct i915_vma*) ;
 struct drm_i915_gem_object* FUNC_14 (struct drm_framebuffer*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_framebuffer*,int ) ;
 int FUNC_19 (int *) ;
 struct drm_i915_private* FUNC_20 (struct drm_device*) ;

struct i915_vma *
FUNC_21(struct drm_framebuffer *VAR_2,
      const struct i915_ggtt_view *VAR_3,
      bool VAR_4,
      unsigned long *VAR_5)
{
 struct drm_device *VAR_6 = VAR_2->dev;
 struct drm_i915_private *VAR_7 = FUNC_20(VAR_6);
 struct drm_i915_gem_object *VAR_8 = FUNC_14(VAR_2);
 intel_wakeref_t VAR_9;
 struct i915_vma *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;

 FUNC_4(!FUNC_19(&VAR_6->struct_mutex));

 VAR_12 = FUNC_18(VAR_2, 0);






 if (FUNC_17(VAR_7) && VAR_12 < 256 * 1024)
  VAR_12 = 256 * 1024;
 VAR_9 = FUNC_15(&VAR_7->runtime_pm);
 FUNC_7(VAR_8);

 FUNC_6(&VAR_7->gpu_error.pending_fb_pin);

 VAR_11 = 0;
 if (FUNC_1(VAR_7))
  VAR_11 |= VAR_0;

 VAR_10 = FUNC_8(VAR_8,
         VAR_12, VAR_3, VAR_11);
 if (FUNC_3(VAR_10))
  goto err;

 if (VAR_4 && FUNC_12(VAR_10)) {
  int VAR_13;
  VAR_13 = FUNC_13(VAR_10);
  if (VAR_13 != 0 && FUNC_2(VAR_7) < 4) {
   FUNC_10(VAR_10);
   VAR_10 = FUNC_0(VAR_13);
   goto err;
  }

  if (VAR_13 == 0 && VAR_10->fence)
   *VAR_5 |= VAR_1;
 }

 FUNC_11(VAR_10);
err:
 FUNC_5(&VAR_7->gpu_error.pending_fb_pin);

 FUNC_9(VAR_8);
 FUNC_16(&VAR_7->runtime_pm, VAR_9);
 return VAR_10;
}
