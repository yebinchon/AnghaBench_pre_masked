
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_overlay {int brightness; int contrast; int saturation; int color_key_enabled; scalar_t__ active; int regs; int color_key; } ;
struct drm_intel_overlay_attrs {int flags; int brightness; int contrast; int saturation; void* gamma5; void* gamma4; void* gamma3; void* gamma2; void* gamma1; void* gamma0; int color_key; } ;
struct drm_i915_private {struct intel_overlay* overlay; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct drm_intel_overlay_attrs*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct intel_overlay*,int ) ;

int FUNC_11(struct drm_device *VAR_12, void *VAR_13,
         struct drm_file *VAR_14)
{
 struct drm_intel_overlay_attrs *VAR_15 = VAR_13;
 struct drm_i915_private *VAR_16 = FUNC_9(VAR_12);
 struct intel_overlay *VAR_17;
 int VAR_18;

 VAR_17 = VAR_16->overlay;
 if (!VAR_17) {
  FUNC_0("userspace bug: no overlay\n");
  return -VAR_2;
 }

 FUNC_5(VAR_12);
 FUNC_7(&VAR_12->struct_mutex);

 VAR_18 = -VAR_1;
 if (!(VAR_15->flags & VAR_4)) {
  VAR_15->color_key = VAR_17->color_key;
  VAR_15->brightness = VAR_17->brightness;
  VAR_15->contrast = VAR_17->contrast;
  VAR_15->saturation = VAR_17->saturation;

  if (!FUNC_3(VAR_16, 2)) {
   VAR_15->gamma0 = FUNC_1(VAR_6);
   VAR_15->gamma1 = FUNC_1(VAR_7);
   VAR_15->gamma2 = FUNC_1(VAR_8);
   VAR_15->gamma3 = FUNC_1(VAR_9);
   VAR_15->gamma4 = FUNC_1(VAR_10);
   VAR_15->gamma5 = FUNC_1(VAR_11);
  }
 } else {
  if (VAR_15->brightness < -128 || VAR_15->brightness > 127)
   goto out_unlock;
  if (VAR_15->contrast > 255)
   goto out_unlock;
  if (VAR_15->saturation > 1023)
   goto out_unlock;

  VAR_17->color_key = VAR_15->color_key;
  VAR_17->brightness = VAR_15->brightness;
  VAR_17->contrast = VAR_15->contrast;
  VAR_17->saturation = VAR_15->saturation;

  FUNC_10(VAR_17, VAR_17->regs);

  if (VAR_15->flags & VAR_5) {
   if (FUNC_3(VAR_16, 2))
    goto out_unlock;

   if (VAR_17->active) {
    VAR_18 = -VAR_0;
    goto out_unlock;
   }

   VAR_18 = FUNC_4(VAR_15);
   if (VAR_18)
    goto out_unlock;

   FUNC_2(VAR_6, VAR_15->gamma0);
   FUNC_2(VAR_7, VAR_15->gamma1);
   FUNC_2(VAR_8, VAR_15->gamma2);
   FUNC_2(VAR_9, VAR_15->gamma3);
   FUNC_2(VAR_10, VAR_15->gamma4);
   FUNC_2(VAR_11, VAR_15->gamma5);
  }
 }
 VAR_17->color_key_enabled = (VAR_15->flags & VAR_3) == 0;

 VAR_18 = 0;
out_unlock:
 FUNC_8(&VAR_12->struct_mutex);
 FUNC_6(VAR_12);

 return VAR_18;
}
