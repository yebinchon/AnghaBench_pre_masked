
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ max_input_pxl_clk_pll_frequency; scalar_t__ min_input_pxl_clk_pll_frequency; int max_output_pxl_clk_pll_frequency; int min_output_pxl_clk_pll_frequency; int crystal_frequency; } ;
struct dc_firmware_info {TYPE_2__ pll_info; } ;
struct calc_pll_clock_source_init_data {scalar_t__ max_override_input_pxl_clk_pll_freq_khz; scalar_t__ min_override_input_pxl_clk_pll_freq_khz; scalar_t__ num_fract_fb_divider_decimal_point; scalar_t__ num_fract_fb_divider_decimal_point_precision; int max_pll_ref_divider; int min_pll_ref_divider; int max_pix_clk_pll_post_divider; int min_pix_clk_pll_post_divider; int ctx; TYPE_1__* bp; } ;
struct calc_pll_clock_source {scalar_t__ max_pll_input_freq_khz; scalar_t__ min_pll_input_freq_khz; scalar_t__ fract_fb_divider_decimal_points_num; scalar_t__ fract_fb_divider_precision; int fract_fb_divider_factor; int fract_fb_divider_precision_factor; int max_pll_ref_divider; int min_pll_ref_divider; int max_pix_clock_pll_post_divider; int min_pix_clock_pll_post_divider; int max_vco_khz; int min_vco_khz; int ref_freq_khz; int ctx; } ;
struct TYPE_3__ {struct dc_firmware_info fw_info; int fw_info_valid; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(
   struct calc_pll_clock_source *VAR_0,
   struct calc_pll_clock_source_init_data *VAR_1)
{
 uint32_t VAR_2;
 struct dc_firmware_info *VAR_3;
 if (VAR_0 == ((void*)0) ||
   VAR_1 == ((void*)0) ||
   VAR_1->bp == ((void*)0))
  return 0;

 if (!VAR_1->bp->fw_info_valid)
  return 0;

 VAR_3 = &VAR_1->bp->fw_info;
 VAR_0->ctx = VAR_1->ctx;
 VAR_0->ref_freq_khz = VAR_3->pll_info.crystal_frequency;
 VAR_0->min_vco_khz =
   VAR_3->pll_info.min_output_pxl_clk_pll_frequency;
 VAR_0->max_vco_khz =
   VAR_3->pll_info.max_output_pxl_clk_pll_frequency;

 if (VAR_1->max_override_input_pxl_clk_pll_freq_khz != 0)
  VAR_0->max_pll_input_freq_khz =
   VAR_1->max_override_input_pxl_clk_pll_freq_khz;
 else
  VAR_0->max_pll_input_freq_khz =
   VAR_3->pll_info.max_input_pxl_clk_pll_frequency;

 if (VAR_1->min_override_input_pxl_clk_pll_freq_khz != 0)
  VAR_0->min_pll_input_freq_khz =
   VAR_1->min_override_input_pxl_clk_pll_freq_khz;
 else
  VAR_0->min_pll_input_freq_khz =
   VAR_3->pll_info.min_input_pxl_clk_pll_frequency;

 VAR_0->min_pix_clock_pll_post_divider =
   VAR_1->min_pix_clk_pll_post_divider;
 VAR_0->max_pix_clock_pll_post_divider =
   VAR_1->max_pix_clk_pll_post_divider;
 VAR_0->min_pll_ref_divider =
   VAR_1->min_pll_ref_divider;
 VAR_0->max_pll_ref_divider =
   VAR_1->max_pll_ref_divider;

 if (VAR_1->num_fract_fb_divider_decimal_point == 0 ||
  VAR_1->num_fract_fb_divider_decimal_point_precision >
    VAR_1->num_fract_fb_divider_decimal_point) {
  FUNC_0(
   "The dec point num or precision is incorrect!");
  return 0;
 }
 if (VAR_1->num_fract_fb_divider_decimal_point_precision == 0) {
  FUNC_0(
   "Incorrect fract feedback divider precision num!");
  return 0;
 }

 VAR_0->fract_fb_divider_decimal_points_num =
    VAR_1->num_fract_fb_divider_decimal_point;
 VAR_0->fract_fb_divider_precision =
   VAR_1->num_fract_fb_divider_decimal_point_precision;
 VAR_0->fract_fb_divider_factor = 1;
 for (VAR_2 = 0; VAR_2 < VAR_0->fract_fb_divider_decimal_points_num; ++VAR_2)
  VAR_0->fract_fb_divider_factor *= 10;

 VAR_0->fract_fb_divider_precision_factor = 1;
 for (
  VAR_2 = 0;
  VAR_2 < (VAR_0->fract_fb_divider_decimal_points_num -
    VAR_0->fract_fb_divider_precision);
  ++VAR_2)
  VAR_0->fract_fb_divider_precision_factor *= 10;

 return 1;
}
