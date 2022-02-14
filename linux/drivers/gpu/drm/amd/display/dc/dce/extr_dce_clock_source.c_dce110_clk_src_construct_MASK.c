
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dce110_clk_src_shift {int dummy; } ;
struct dce110_clk_src_regs {int dummy; } ;
struct dce110_clk_src_mask {int PLL_REF_DIV; int PLL_POST_DIV_PIXCLK; } ;
struct TYPE_6__ {int id; int * funcs; struct dc_context* ctx; } ;
struct dce110_clk_src {int ref_freq_khz; int calc_pll_hdmi; int calc_pll; TYPE_3__ base; struct dc_bios* bios; struct dce110_clk_src_mask const* cs_mask; int ext_clk_khz; struct dce110_clk_src_shift const* cs_shift; struct dce110_clk_src_regs const* regs; } ;
struct dc_context {int dummy; } ;
struct TYPE_4__ {int crystal_frequency; } ;
struct TYPE_5__ {TYPE_1__ pll_info; int external_clock_source_frequency_for_dp; } ;
struct dc_bios {TYPE_2__ fw_info; int fw_info_valid; } ;
struct calc_pll_clock_source_init_data {int min_pix_clk_pll_post_divider; int min_pll_ref_divider; int min_override_input_pxl_clk_pll_freq_khz; int max_override_input_pxl_clk_pll_freq_khz; struct dc_context* ctx; void* num_fract_fb_divider_decimal_point_precision; void* num_fract_fb_divider_decimal_point; int max_pll_ref_divider; int max_pix_clk_pll_post_divider; struct dc_bios* bp; } ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,struct calc_pll_clock_source_init_data*) ;
 int VAR_2 ;
 int FUNC_2 (struct dce110_clk_src*) ;

bool FUNC_3(
 struct dce110_clk_src *VAR_3,
 struct dc_context *VAR_4,
 struct dc_bios *VAR_5,
 enum clock_source_id VAR_6,
 const struct dce110_clk_src_regs *VAR_7,
 const struct dce110_clk_src_shift *VAR_8,
 const struct dce110_clk_src_mask *VAR_9)
{
 struct calc_pll_clock_source_init_data VAR_10;
 struct calc_pll_clock_source_init_data VAR_11;

 VAR_3->base.ctx = VAR_4;
 VAR_3->bios = VAR_5;
 VAR_3->base.id = VAR_6;
 VAR_3->base.funcs = &VAR_2;

 VAR_3->regs = VAR_7;
 VAR_3->cs_shift = VAR_8;
 VAR_3->cs_mask = VAR_9;

 if (!VAR_3->bios->fw_info_valid) {
  FUNC_0(0);
  goto unexpected_failure;
 }

 VAR_3->ext_clk_khz = VAR_3->bios->fw_info.external_clock_source_frequency_for_dp;


 VAR_11.bp = VAR_5;
 VAR_11.min_pix_clk_pll_post_divider = 1;
 VAR_11.max_pix_clk_pll_post_divider =
   VAR_3->cs_mask->PLL_POST_DIV_PIXCLK;
 VAR_11.min_pll_ref_divider = 1;
 VAR_11.max_pll_ref_divider = VAR_3->cs_mask->PLL_REF_DIV;

 VAR_11.min_override_input_pxl_clk_pll_freq_khz = 0;

 VAR_11.max_override_input_pxl_clk_pll_freq_khz = 0;

 VAR_11.num_fract_fb_divider_decimal_point =
   VAR_1;

 VAR_11.num_fract_fb_divider_decimal_point_precision =
   VAR_1;
 VAR_11.ctx = VAR_4;


 VAR_10.bp = VAR_5;
 VAR_10.min_pix_clk_pll_post_divider = 1;
 VAR_10.max_pix_clk_pll_post_divider =
   VAR_3->cs_mask->PLL_POST_DIV_PIXCLK;
 VAR_10.min_pll_ref_divider = 1;
 VAR_10.max_pll_ref_divider = VAR_3->cs_mask->PLL_REF_DIV;

 VAR_10.min_override_input_pxl_clk_pll_freq_khz = 13500;

 VAR_10.max_override_input_pxl_clk_pll_freq_khz = 27000;

 VAR_10.num_fract_fb_divider_decimal_point =
   VAR_1;

 VAR_10.num_fract_fb_divider_decimal_point_precision =
   VAR_1;
 VAR_10.ctx = VAR_4;

 VAR_3->ref_freq_khz = VAR_3->bios->fw_info.pll_info.crystal_frequency;

 if (VAR_3->base.id == VAR_0)
  return 1;


 FUNC_2(VAR_3);

 if (!FUNC_1(
   &VAR_3->calc_pll,
   &VAR_11)) {
  FUNC_0(0);
  goto unexpected_failure;
 }


 VAR_10.
   min_override_input_pxl_clk_pll_freq_khz = VAR_3->ref_freq_khz/2;
 VAR_10.
   max_override_input_pxl_clk_pll_freq_khz = VAR_3->ref_freq_khz;


 if (!FUNC_1(
   &VAR_3->calc_pll_hdmi, &VAR_10)) {
  FUNC_0(0);
  goto unexpected_failure;
 }

 return 1;

unexpected_failure:
 return 0;
}
