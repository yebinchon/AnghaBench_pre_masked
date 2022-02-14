
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_dsi {int lane_count; int pixel_format; } ;
struct TYPE_3__ {int ctrl; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 struct intel_dsi* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

u32 FUNC_6(struct intel_encoder *VAR_3,
       struct intel_crtc_state *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 struct intel_dsi *VAR_8 = FUNC_3(&VAR_3->base);
 struct drm_i915_private *VAR_9 = FUNC_5(VAR_3->base.dev);
 int VAR_10 = FUNC_4(VAR_8->pixel_format);

 VAR_4->dsi_pll.ctrl = FUNC_2(VAR_0);

 VAR_7 = VAR_4->dsi_pll.ctrl & VAR_1;

 VAR_6 = (VAR_7 * VAR_2) / 2;

 VAR_5 = FUNC_0(VAR_6 * VAR_8->lane_count, VAR_10);

 FUNC_1("Calculated pclk=%u\n", VAR_5);
 return VAR_5;
}
