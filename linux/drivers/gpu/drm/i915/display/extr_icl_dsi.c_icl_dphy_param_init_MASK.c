
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mipi_config {int tclk_prepare_clkzero; int tclk_pre; int tclk_post; int ths_prepare_hszero; int ths_exit; int tclk_prepare; int ths_prepare; int ths_trail; int tclk_trail; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct intel_dsi {int dphy_reg; int dphy_data_lane_reg; TYPE_2__ base; } ;
struct TYPE_7__ {struct mipi_config* config; } ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (struct intel_dsi*) ;
 int FUNC_12 (struct intel_dsi*) ;
 int FUNC_13 (int ,int ) ;
 struct drm_i915_private* FUNC_14 (struct drm_device*) ;

__attribute__((used)) static void FUNC_15(struct intel_dsi *VAR_16)
{
 struct drm_device *VAR_17 = VAR_16->base.base.dev;
 struct drm_i915_private *VAR_18 = FUNC_14(VAR_17);
 struct mipi_config *VAR_19 = VAR_18->vbt.dsi.config;
 u32 VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27;
 u32 VAR_28, VAR_29;

 VAR_20 = FUNC_12(VAR_16);

 VAR_26 = FUNC_13(VAR_19->tclk_trail, VAR_19->ths_trail);
 VAR_25 = FUNC_13(VAR_19->ths_prepare,
        VAR_19->tclk_prepare);
 VAR_21 = FUNC_5(VAR_25 * 4, VAR_20);
 if (VAR_21 > VAR_12) {
  FUNC_6("prepare_cnt out of range (%d)\n", VAR_21);
  VAR_21 = VAR_12;
 }


 VAR_23 = FUNC_5(VAR_19->tclk_prepare_clkzero -
        VAR_25, VAR_20);
 if (VAR_23 > VAR_9) {
  FUNC_6("clk_zero_cnt out of range (%d)\n", VAR_23);
  VAR_23 = VAR_9;
 }


 VAR_24 = FUNC_5(VAR_26, VAR_20);
 if (VAR_24 > VAR_15) {
  FUNC_6("trail_cnt out of range (%d)\n", VAR_24);
  VAR_24 = VAR_15;
 }


 VAR_28 = FUNC_5(VAR_19->tclk_pre, VAR_20);
 if (VAR_28 > VAR_14) {
  FUNC_6("tclk_pre_cnt out of range (%d)\n", VAR_28);
  VAR_28 = VAR_14;
 }


 VAR_29 = FUNC_5(VAR_19->tclk_post, VAR_20);
 if (VAR_29 > VAR_13) {
  FUNC_6("tclk_post_cnt out of range (%d)\n", VAR_29);
  VAR_29 = VAR_13;
 }


 VAR_27 = FUNC_5(VAR_19->ths_prepare_hszero -
       VAR_25, VAR_20);
 if (VAR_27 > VAR_11) {
  FUNC_6("hs_zero_cnt out of range (%d)\n", VAR_27);
  VAR_27 = VAR_11;
 }


 VAR_22 = FUNC_5(VAR_19->ths_exit, VAR_20);
 if (VAR_22 > VAR_10) {
  FUNC_6("exit_zero_cnt out of range (%d)\n", VAR_22);
  VAR_22 = VAR_10;
 }


 VAR_16->dphy_reg = (VAR_1 |
          FUNC_2(VAR_21) |
          VAR_4 |
          FUNC_4(VAR_23) |
          VAR_2 |
          FUNC_1(VAR_28) |
          VAR_0 |
          FUNC_0(VAR_29) |
          VAR_3 |
          FUNC_3(VAR_24));


 VAR_16->dphy_data_lane_reg = (VAR_6 |
      FUNC_8(VAR_21) |
      VAR_8 |
      FUNC_10(VAR_27) |
      VAR_7 |
      FUNC_9(VAR_24) |
      VAR_5 |
      FUNC_7(VAR_22));

 FUNC_11(VAR_16);
}
