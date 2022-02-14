
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pll_settings {int actual_pix_clk_100hz; int adjusted_pix_clk_100hz; int calculated_pix_clk_100hz; } ;
struct pixel_clk_params {int requested_pix_clk_100hz; scalar_t__ signal_type; int color_depth; } ;
struct dce110_clk_src {int dummy; } ;





 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0 (
  struct dce110_clk_src *VAR_1,
  struct pll_settings *VAR_2,
  struct pixel_clk_params *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_3->requested_pix_clk_100hz;

 if (VAR_3->signal_type == VAR_0) {
  switch (VAR_3->color_depth) {
  case 130:
   VAR_4 = (VAR_4 * 5) >> 2;
   break;
  case 129:
   VAR_4 = (VAR_4 * 6) >> 2;
   break;
  case 128:
   VAR_4 = VAR_4 * 2;
   break;
  default:
   break;
  }
 }
 VAR_2->actual_pix_clk_100hz = VAR_4;
 VAR_2->adjusted_pix_clk_100hz = VAR_4;
 VAR_2->calculated_pix_clk_100hz = VAR_3->requested_pix_clk_100hz;
}
