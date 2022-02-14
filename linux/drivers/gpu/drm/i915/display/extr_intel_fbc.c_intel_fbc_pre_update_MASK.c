
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_plane_state {int dummy; } ;
struct intel_fbc {int flip_pending; int lock; struct intel_crtc* crtc; int enabled; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,char const*) ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_3 (struct intel_crtc*,struct intel_plane_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct drm_i915_private* FUNC_6 (int ) ;

void FUNC_7(struct intel_crtc *VAR_0,
     struct intel_crtc_state *VAR_1,
     struct intel_plane_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_0->base.dev);
 struct intel_fbc *VAR_4 = &VAR_3->fbc;
 const char *VAR_5 = "update pending";

 if (!FUNC_0(VAR_3))
  return;

 FUNC_4(&VAR_4->lock);

 if (!FUNC_3(VAR_0, VAR_2)) {
  VAR_5 = "more than one pipe active";
  goto deactivate;
 }

 if (!VAR_4->enabled || VAR_4->crtc != VAR_0)
  goto unlock;

 FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_4->flip_pending = 1;

deactivate:
 FUNC_1(VAR_3, VAR_5);
unlock:
 FUNC_5(&VAR_4->lock);
}
