
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mipi_config {int tclk_prepare_clkzero; int ths_prepare_hszero; int ths_prepare; int tclk_prepare; int tclk_trail; int ths_trail; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct intel_dsi {int lane_count; int dphy_reg; void* clk_hs_to_lp_count; void* clk_lp_to_hs_count; void* hs_to_lp_count; void* lp_byte_clk; TYPE_2__ base; } ;
struct TYPE_7__ {struct mipi_config* config; } ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct intel_dsi*) ;
 int FUNC_4 (struct intel_dsi*) ;
 int FUNC_5 (struct intel_dsi*) ;
 void* FUNC_6 (int,int) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct intel_dsi *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->base.base.dev;
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_6);
 struct mipi_config *VAR_8 = VAR_7->vbt.dsi.config;
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22, VAR_23;
 u32 VAR_24;

 VAR_9 = FUNC_5(VAR_5);

 switch (VAR_5->lane_count) {
 case 1:
 case 2:
  VAR_10 = 2;
  break;
 case 3:
  VAR_10 = 4;
  break;
 case 4:
 default:
  VAR_10 = 3;
  break;
 }


 VAR_12 = VAR_2;
 VAR_13 = FUNC_3(VAR_5);

 VAR_20 = VAR_8->tclk_prepare_clkzero;
 VAR_21 = VAR_8->ths_prepare_hszero;





 VAR_5->lp_byte_clk = FUNC_0(VAR_9 * VAR_13, 8 * VAR_12);
 VAR_24 = FUNC_2(VAR_7) ? 8 : 2;
 VAR_18 = FUNC_6(VAR_8->ths_prepare,
        VAR_8->tclk_prepare);


 VAR_14 = FUNC_0(VAR_18 * VAR_13, VAR_12 * VAR_24);

 if (VAR_14 > VAR_3) {
  FUNC_1("prepare count too high %u\n", VAR_14);
  VAR_14 = VAR_3;
 }


 VAR_15 = FUNC_0(
    (VAR_21 - VAR_18) * VAR_13,
    VAR_12 * VAR_24
    );







 if (VAR_15 < (55 * VAR_13 / VAR_12) && (55 * VAR_13) % VAR_12)
  VAR_15 += 1;

 if (VAR_15 > VAR_1) {
  FUNC_1("exit zero count too high %u\n", VAR_15);
  VAR_15 = VAR_1;
 }


 VAR_16 = FUNC_0(
    (VAR_20 - VAR_18)
    * VAR_13, VAR_12 * VAR_24);

 if (VAR_16 > VAR_0) {
  FUNC_1("clock zero count too high %u\n", VAR_16);
  VAR_16 = VAR_0;
 }


 VAR_19 = FUNC_6(VAR_8->tclk_trail, VAR_8->ths_trail);
 VAR_17 = FUNC_0(VAR_19 * VAR_13, VAR_12 * VAR_24);

 if (VAR_17 > VAR_4) {
  FUNC_1("trail count too high %u\n", VAR_17);
  VAR_17 = VAR_4;
 }


 VAR_5->dphy_reg = VAR_15 << 24 | VAR_17 << 16 |
      VAR_16 << 8 | VAR_14;
 VAR_11 = FUNC_0(VAR_9 * VAR_13, VAR_12);




 VAR_22 = FUNC_0(4 * VAR_11 + VAR_14 * VAR_24 +
      VAR_15 * VAR_24 + 10, 8);

 VAR_23 = FUNC_0(VAR_8->ths_trail + 2 * VAR_11, 8);

 VAR_5->hs_to_lp_count = FUNC_6(VAR_22, VAR_23);
 VAR_5->hs_to_lp_count += VAR_10;
 VAR_5->clk_lp_to_hs_count =
  FUNC_0(
   4 * VAR_11 + VAR_14 * 2 +
   VAR_16 * 2,
   8);

 VAR_5->clk_lp_to_hs_count += VAR_10;
 VAR_5->clk_hs_to_lp_count =
  FUNC_0(2 * VAR_11 + VAR_17 * 2 + 8,
   8);
 VAR_5->clk_hs_to_lp_count += VAR_10;

 FUNC_4(VAR_5);
}
