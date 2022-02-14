
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_5__ {int mode; int crtc; } ;
struct intel_crtc_state {int pipe_src_w; int pipe_src_h; TYPE_3__ pch_pfit; TYPE_2__ base; } ;
struct TYPE_4__ {int mode; int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_crtc*) ;
 int FUNC_5 (struct intel_crtc_state const*) ;
 int FUNC_6 (struct intel_crtc_state const*) ;
 int FUNC_7 (struct intel_crtc_state const*) ;
 int FUNC_8 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(const struct intel_crtc_state *VAR_0,
         const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_10(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_9(VAR_2->base.dev);


 VAR_2->base.mode = VAR_1->base.mode;
 FUNC_1(FUNC_3(VAR_2->pipe),
     ((VAR_1->pipe_src_w - 1) << 16) |
     (VAR_1->pipe_src_h - 1));


 if (FUNC_2(VAR_3) >= 9) {
  FUNC_7(VAR_1);

  if (VAR_1->pch_pfit.enabled)
   FUNC_8(VAR_1);
 } else if (FUNC_0(VAR_3)) {
  if (VAR_1->pch_pfit.enabled)
   FUNC_6(VAR_1);
  else if (VAR_0->pch_pfit.enabled)
   FUNC_5(VAR_0);
 }

 if (FUNC_2(VAR_3) >= 11)
  FUNC_4(VAR_2);
}
