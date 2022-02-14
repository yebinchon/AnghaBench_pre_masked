
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int div; int ctrl; } ;
struct intel_crtc_state {TYPE_2__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_8 (int,int) ;

void FUNC_9(struct intel_encoder *VAR_4,
   const struct intel_crtc_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_4->base.dev);

 FUNC_0("\n");

 FUNC_4(VAR_6);

 FUNC_7(VAR_6, VAR_0, 0);
 FUNC_7(VAR_6, VAR_1, VAR_5->dsi_pll.div);
 FUNC_7(VAR_6, VAR_0,
        VAR_5->dsi_pll.ctrl & ~VAR_3);




 FUNC_3(10, 50);

 FUNC_7(VAR_6, VAR_0, VAR_5->dsi_pll.ctrl);

 if (FUNC_8(FUNC_6(VAR_6, VAR_0) &
      VAR_2, 20)) {

  FUNC_5(VAR_6);
  FUNC_1("DSI PLL lock failed\n");
  return;
 }
 FUNC_5(VAR_6);

 FUNC_0("DSI PLL locked\n");
}
