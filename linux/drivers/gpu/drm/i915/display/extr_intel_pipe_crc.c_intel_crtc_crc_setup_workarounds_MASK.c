
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode_changed; scalar_t__ active; } ;
struct intel_crtc_state {int has_psr; int crc_enabled; scalar_t__ cpu_transcoder; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {scalar_t__ pipe; TYPE_1__ base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_i915_private {int drm; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct intel_crtc_state*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_5 (int *) ;
 int FUNC_6 (struct drm_atomic_state*) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 int FUNC_8 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_9 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_10 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_11 (struct drm_modeset_acquire_ctx*) ;
 struct intel_crtc_state* FUNC_12 (struct drm_atomic_state*,struct intel_crtc*) ;
 struct drm_i915_private* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct intel_crtc *VAR_4, bool VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_13(VAR_4->base.dev);
 struct intel_crtc_state *VAR_7;
 struct drm_atomic_state *VAR_8;
 struct drm_modeset_acquire_ctx VAR_9;
 int VAR_10;

 FUNC_9(&VAR_9, 0);

 VAR_8 = FUNC_5(&VAR_6->drm);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_8->acquire_ctx = &VAR_9;

retry:
 VAR_7 = FUNC_12(VAR_8, VAR_4);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);
  goto put_state;
 }

 VAR_7->base.mode_changed = VAR_7->has_psr;
 VAR_7->crc_enabled = VAR_5;

 if (FUNC_1(VAR_6) &&
     VAR_7->base.active && VAR_4->pipe == VAR_2 &&
     VAR_7->cpu_transcoder == VAR_3)
  VAR_7->base.mode_changed = 1;

 VAR_10 = FUNC_4(VAR_8);

put_state:
 if (VAR_10 == -VAR_0) {
  FUNC_6(VAR_8);
  FUNC_10(&VAR_9);
  goto retry;
 }

 FUNC_7(VAR_8);
unlock:
 FUNC_3(VAR_10, "Toggling workaround to %i returns %i\n", VAR_5, VAR_10);
 FUNC_11(&VAR_9);
 FUNC_8(&VAR_9);
}
