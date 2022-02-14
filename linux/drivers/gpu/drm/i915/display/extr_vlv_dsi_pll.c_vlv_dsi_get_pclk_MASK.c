
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
struct TYPE_3__ {int ctrl; int div; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 struct intel_dsi* FUNC_5 (TYPE_2__*) ;
 int* VAR_9 ;
 int FUNC_6 (int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;

u32 FUNC_11(struct intel_encoder *VAR_10,
       struct intel_crtc_state *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_7(VAR_10->base.dev);
 struct intel_dsi *VAR_13 = FUNC_5(&VAR_10->base);
 int VAR_14 = FUNC_6(VAR_13->pixel_format);
 u32 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21;
 int VAR_22 = FUNC_4(VAR_12) ? 100000 : 25000;
 int VAR_23;

 FUNC_2("\n");

 FUNC_8(VAR_12);
 VAR_17 = FUNC_10(VAR_12, VAR_0);
 VAR_18 = FUNC_10(VAR_12, VAR_1);
 FUNC_9(VAR_12);

 VAR_11->dsi_pll.ctrl = VAR_17 & ~VAR_2;
 VAR_11->dsi_pll.div = VAR_18;


 VAR_17 &= VAR_7;
 VAR_17 = VAR_17 >> (VAR_8 - 2);


 VAR_21 = (VAR_18 & VAR_5) >> VAR_6;
 VAR_21 = 1 << VAR_21;


 VAR_18 &= VAR_3;
 VAR_18 = VAR_18 >> VAR_4;

 while (VAR_17) {
  VAR_17 = VAR_17 >> 1;
  VAR_20++;
 }
 VAR_20--;

 if (!VAR_20) {
  FUNC_3("wrong P1 divisor\n");
  return 0;
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_9); VAR_23++) {
  if (VAR_9[VAR_23] == VAR_18)
   break;
 }

 if (VAR_23 == FUNC_0(VAR_9)) {
  FUNC_3("wrong m_seed programmed\n");
  return 0;
 }

 VAR_19 = VAR_23 + 62;

 VAR_15 = (VAR_19 * VAR_22) / (VAR_20 * VAR_21);

 VAR_16 = FUNC_1(VAR_15 * VAR_13->lane_count, VAR_14);

 return VAR_16;
}
