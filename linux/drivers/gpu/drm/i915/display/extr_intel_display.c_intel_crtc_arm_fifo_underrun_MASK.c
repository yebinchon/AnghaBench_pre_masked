
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_crtc_state {scalar_t__ has_pch_encoder; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct intel_crtc*) ;
 int FUNC_2 (struct drm_i915_private*,int ,int) ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void FUNC_5(struct intel_crtc *VAR_0,
      struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0->base.dev);

 if (!FUNC_0(VAR_2, 2))
  FUNC_2(VAR_2, VAR_0->pipe, 1);

 if (VAR_1->has_pch_encoder) {
  enum pipe VAR_3 =
   FUNC_1(VAR_0);

  FUNC_3(VAR_2, VAR_3, 1);
 }
}
