
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int rotation; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_plane {TYPE_1__ base; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_4__ adjusted_mode; scalar_t__ enable; } ;
struct intel_crtc_state {TYPE_5__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; TYPE_3__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct TYPE_8__ {int format; } ;


 int FUNC_0 (char*,...) ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int,struct drm_format_name_buf*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_plane* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const struct intel_crtc_state *VAR_10,
         const struct intel_plane_state *VAR_11)
{
 struct intel_plane *VAR_12 = FUNC_6(VAR_11->base.plane);
 struct drm_i915_private *VAR_13 = FUNC_5(VAR_12->base.dev);
 const struct drm_framebuffer *VAR_14 = VAR_11->base.fb;
 unsigned int VAR_15 = VAR_11->base.rotation;
 struct drm_format_name_buf VAR_16;

 if (!VAR_14)
  return 0;

 if (VAR_15 & ~(VAR_3 | VAR_4) &&
     FUNC_4(VAR_14->modifier)) {
  FUNC_0("RC support only with 0/180 degree rotation (%x)\n",
         VAR_15);
  return -VAR_5;
 }

 if (VAR_15 & VAR_2 &&
     VAR_14->modifier == VAR_0) {
  FUNC_0("horizontal flip is not supported with linear surface formats\n");
  return -VAR_5;
 }

 if (FUNC_3(VAR_15)) {
  if (VAR_14->modifier != VAR_6 &&
      VAR_14->modifier != VAR_8) {
   FUNC_0("Y/Yf tiling required for 90/270!\n");
   return -VAR_5;
  }





  switch (VAR_14->format->format) {
  case 135:
   if (FUNC_1(VAR_13) >= 11)
    break;

  case 136:
  case 133:
  case 134:
  case 137:
  case 138:
  case 130:
  case 129:
  case 128:
  case 132:
  case 131:
   FUNC_0("Unsupported pixel format %s for 90/270!\n",
          FUNC_2(VAR_14->format->format,
         &VAR_16));
   return -VAR_5;
  default:
   break;
  }
 }


 if (VAR_10->base.enable &&
     VAR_10->base.adjusted_mode.flags & VAR_1 &&
     (VAR_14->modifier == VAR_6 ||
      VAR_14->modifier == VAR_8 ||
      VAR_14->modifier == VAR_7 ||
      VAR_14->modifier == VAR_9)) {
  FUNC_0("Y/Yf tiling not supported in IF-ID mode\n");
  return -VAR_5;
 }

 return 0;
}
