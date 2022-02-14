
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; int scanline_offset; TYPE_1__ base; int active; } ;
struct drm_display_mode {int private_flags; int crtc_vtotal; int flags; } ;
struct drm_vblank_crtc {struct drm_display_mode hwmode; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_vblank_crtc* vblank; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_crtc*) ;
 size_t FUNC_5 (TYPE_1__*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct intel_crtc *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_6(VAR_5);
 const struct drm_display_mode *VAR_7;
 struct drm_vblank_crtc *VAR_8;
 enum pipe VAR_9 = VAR_4->pipe;
 int VAR_10, VAR_11;

 if (!VAR_4->active)
  return -1;

 VAR_8 = &VAR_4->base.dev->vblank[FUNC_5(&VAR_4->base)];
 VAR_7 = &VAR_8->hwmode;

 if (VAR_7->private_flags & VAR_3)
  return FUNC_4(VAR_4);

 VAR_11 = VAR_7->crtc_vtotal;
 if (VAR_7->flags & VAR_0)
  VAR_11 /= 2;

 if (FUNC_2(VAR_6, 2))
  VAR_10 = FUNC_1(FUNC_3(VAR_9)) & VAR_1;
 else
  VAR_10 = FUNC_1(FUNC_3(VAR_9)) & VAR_2;
 if (FUNC_0(VAR_6) && !VAR_10) {
  int VAR_12, VAR_13;

  for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
   FUNC_7(1);
   VAR_13 = FUNC_1(FUNC_3(VAR_9)) & VAR_2;
   if (VAR_13 != VAR_10) {
    VAR_10 = VAR_13;
    break;
   }
  }
 }





 return (VAR_10 + VAR_4->scanline_offset) % VAR_11;
}
