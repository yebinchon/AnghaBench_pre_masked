
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_fbc {int flip_pending; int active; int busy_bits; int params; struct intel_crtc* crtc; int enabled; int lock; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct TYPE_4__ {int enable_fbc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (struct intel_crtc*) ;
 int FUNC_3 (struct drm_i915_private*,char*) ;
 int FUNC_4 (struct intel_crtc*,int *) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_7(VAR_1->base.dev);
 struct intel_fbc *VAR_3 = &VAR_2->fbc;

 FUNC_0(!FUNC_6(&VAR_3->lock));

 if (!VAR_3->enabled || VAR_3->crtc != VAR_1)
  return;

 VAR_3->flip_pending = 0;
 FUNC_0(VAR_3->active);

 if (!VAR_0.enable_fbc) {
  FUNC_3(VAR_2, "disabled at runtime per module param");
  FUNC_1(VAR_2);

  return;
 }

 FUNC_4(VAR_1, &VAR_3->params);

 if (!FUNC_2(VAR_1))
  return;

 if (!VAR_3->busy_bits) {
  FUNC_3(VAR_2, "FBC enabled (active or scheduled)");
  FUNC_5(VAR_2);
 } else
  FUNC_3(VAR_2, "frontbuffer write");
}
