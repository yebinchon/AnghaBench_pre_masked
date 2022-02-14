
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_plane_state {int dummy; } ;
struct intel_fbc {int enabled; int active; char* no_fbc_reason; int lock; struct intel_crtc* crtc; } ;
struct intel_crtc_state {int enable_fbc; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct intel_crtc*) ;
 int FUNC_4 (struct intel_crtc*,struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;

void FUNC_9(struct intel_crtc *VAR_0,
        struct intel_crtc_state *VAR_1,
        struct intel_plane_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_8(VAR_0->base.dev);
 struct intel_fbc *VAR_4 = &VAR_3->fbc;

 if (!FUNC_2(VAR_3))
  return;

 FUNC_5(&VAR_4->lock);

 if (VAR_4->enabled) {
  FUNC_1(VAR_4->crtc == ((void*)0));
  if (VAR_4->crtc == VAR_0) {
   FUNC_1(!VAR_1->enable_fbc);
   FUNC_1(VAR_4->active);
  }
  goto out;
 }

 if (!VAR_1->enable_fbc)
  goto out;

 FUNC_1(VAR_4->active);
 FUNC_1(VAR_4->crtc != ((void*)0));

 FUNC_4(VAR_0, VAR_1, VAR_2);
 if (FUNC_3(VAR_0)) {
  VAR_4->no_fbc_reason = "not enough stolen memory";
  goto out;
 }

 FUNC_0("Enabling FBC on pipe %c\n", FUNC_7(VAR_0->pipe));
 VAR_4->no_fbc_reason = "FBC enabled but not active yet\n";

 VAR_4->enabled = 1;
 VAR_4->crtc = VAR_0;
out:
 FUNC_6(&VAR_4->lock);
}
