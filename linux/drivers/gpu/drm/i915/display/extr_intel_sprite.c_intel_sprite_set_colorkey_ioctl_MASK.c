
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_plane* primary; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {scalar_t__ type; int dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_intel_sprite_colorkey {int flags; int plane_id; } ;
struct drm_i915_private {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct TYPE_4__ {scalar_t__ id; int pipe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct drm_plane_state*) ;
 int FUNC_4 (struct drm_atomic_state*) ;
 struct drm_plane_state* FUNC_5 (struct drm_atomic_state*,struct drm_plane*) ;
 struct drm_atomic_state* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 int FUNC_8 (struct drm_atomic_state*) ;
 int FUNC_9 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_10 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_11 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_12 (struct drm_modeset_acquire_ctx*) ;
 struct drm_plane* FUNC_13 (struct drm_device*,struct drm_file*,int ) ;
 scalar_t__ FUNC_14 (struct drm_i915_private*) ;
 struct intel_crtc* FUNC_15 (struct drm_i915_private*,int ) ;
 int FUNC_16 (int ,struct drm_intel_sprite_colorkey*) ;
 struct drm_i915_private* FUNC_17 (struct drm_device*) ;
 TYPE_2__* FUNC_18 (struct drm_plane*) ;
 int FUNC_19 (struct drm_plane_state*) ;

int FUNC_20(struct drm_device *VAR_9, void *VAR_10,
        struct drm_file *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_17(VAR_9);
 struct drm_intel_sprite_colorkey *VAR_13 = VAR_10;
 struct drm_plane *VAR_14;
 struct drm_plane_state *VAR_15;
 struct drm_atomic_state *VAR_16;
 struct drm_modeset_acquire_ctx VAR_17;
 int VAR_18 = 0;


 VAR_13->flags &= ~VAR_6;

 if (VAR_13->flags & ~(VAR_5 | VAR_7))
  return -VAR_2;


 if ((VAR_13->flags & (VAR_5 | VAR_7)) == (VAR_5 | VAR_7))
  return -VAR_2;

 if ((FUNC_2(VAR_12) || FUNC_1(VAR_12)) &&
     VAR_13->flags & VAR_5)
  return -VAR_2;

 VAR_14 = FUNC_13(VAR_9, VAR_11, VAR_13->plane_id);
 if (!VAR_14 || VAR_14->type != VAR_0)
  return -VAR_3;






 if (FUNC_0(VAR_12) >= 9 &&
     FUNC_18(VAR_14)->id >= VAR_8 &&
     VAR_13->flags & VAR_5)
  return -VAR_2;

 FUNC_10(&VAR_17, 0);

 VAR_16 = FUNC_6(VAR_14->dev);
 if (!VAR_16) {
  VAR_18 = -VAR_4;
  goto out;
 }
 VAR_16->acquire_ctx = &VAR_17;

 while (1) {
  VAR_15 = FUNC_5(VAR_16, VAR_14);
  VAR_18 = FUNC_3(VAR_15);
  if (!VAR_18)
   FUNC_16(FUNC_19(VAR_15), VAR_13);





  if (!VAR_18 && FUNC_14(VAR_12)) {
   struct intel_crtc *VAR_19 =
    FUNC_15(VAR_12,
       FUNC_18(VAR_14)->pipe);

   VAR_15 = FUNC_5(VAR_16,
         VAR_19->base.primary);
   VAR_18 = FUNC_3(VAR_15);
   if (!VAR_18)
    FUNC_16(FUNC_19(VAR_15), VAR_13);
  }

  if (!VAR_18)
   VAR_18 = FUNC_4(VAR_16);

  if (VAR_18 != -VAR_1)
   break;

  FUNC_7(VAR_16);
  FUNC_11(&VAR_17);
 }

 FUNC_8(VAR_16);
out:
 FUNC_12(&VAR_17);
 FUNC_9(&VAR_17);
 return VAR_18;
}
