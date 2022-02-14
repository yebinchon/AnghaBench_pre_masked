
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int vscan; int flags; int hdisplay; int hsync_start; int hsync_end; int htotal; int vdisplay; int vsync_start; int vsync_end; int vtotal; } ;
struct drm_device {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_device *VAR_13,
   const struct drm_display_mode *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_3(VAR_13);
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 if (VAR_14->vscan > 1)
  return VAR_10;

 if (VAR_14->flags & VAR_3)
  return VAR_9;

 if (VAR_14->flags & (VAR_2 |
      VAR_4 |
      VAR_5))
  return VAR_8;

 if (VAR_14->flags & (VAR_0 |
      VAR_6 |
      VAR_1))
  return VAR_7;

 if (FUNC_0(VAR_15) >= 9 ||
     FUNC_1(VAR_15) || FUNC_2(VAR_15)) {
  VAR_16 = 8192;
  VAR_18 = 4096;
  VAR_17 = 8192;
  VAR_19 = 8192;
 } else if (FUNC_0(VAR_15) >= 3) {
  VAR_16 = 4096;
  VAR_18 = 4096;
  VAR_17 = 8192;
  VAR_19 = 8192;
 } else {
  VAR_16 = 2048;
  VAR_18 = 2048;
  VAR_17 = 4096;
  VAR_19 = 4096;
 }

 if (VAR_14->hdisplay > VAR_16 ||
     VAR_14->hsync_start > VAR_17 ||
     VAR_14->hsync_end > VAR_17 ||
     VAR_14->htotal > VAR_17)
  return VAR_9;

 if (VAR_14->vdisplay > VAR_18 ||
     VAR_14->vsync_start > VAR_19 ||
     VAR_14->vsync_end > VAR_19 ||
     VAR_14->vtotal > VAR_19)
  return VAR_12;

 return VAR_11;
}
