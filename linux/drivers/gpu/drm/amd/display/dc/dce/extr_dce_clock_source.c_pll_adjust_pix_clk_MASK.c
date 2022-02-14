
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pll_settings {int actual_pix_clk_100hz; int adjusted_pix_clk_100hz; int pix_clk_post_divider; int reference_divider; } ;
struct TYPE_4__ {int ENABLE_SS; } ;
struct pixel_clk_params {int signal_type; int requested_pix_clk_100hz; int requested_sym_clk; TYPE_1__ flags; int encoder_object_id; int color_depth; int pixel_encoding; } ;
struct dce110_clk_src {TYPE_3__* bios; } ;
struct bp_adjust_pixel_clock_parameters {int pixel_clock; int signal_type; int adjusted_pixel_clock; int pixel_clock_post_divider; int reference_divider; int ss_enable; int encoder_object_id; int member_0; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* adjust_pixel_clock ) (TYPE_3__*,struct bp_adjust_pixel_clock_parameters*) ;} ;


 int VAR_0 ;



 int VAR_1 ;




 int FUNC_0 (TYPE_3__*,struct bp_adjust_pixel_clock_parameters*) ;

__attribute__((used)) static bool FUNC_1(
  struct dce110_clk_src *VAR_2,
  struct pixel_clk_params *VAR_3,
  struct pll_settings *VAR_4)
{
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;
 struct bp_adjust_pixel_clock_parameters VAR_7 = {
       0 };
 enum bp_result VAR_8;
 switch (VAR_3->signal_type) {
 case 128: {
  VAR_6 = VAR_3->requested_pix_clk_100hz;
  if (VAR_3->pixel_encoding != VAR_1) {
   switch (VAR_3->color_depth) {
   case 134:
    VAR_6 = (VAR_6 * 5) >> 2;
    break;
   case 133:
    VAR_6 = (VAR_6 * 6) >> 2;
    break;
   case 132:
    VAR_6 = VAR_6 * 2;
    break;
   default:
    break;
   }
  }
  VAR_5 = VAR_6;
 }
  break;

 case 131:
 case 130:
 case 129:
  VAR_6 = VAR_3->requested_sym_clk * 10;
  VAR_5 = VAR_3->requested_pix_clk_100hz;
  break;

 default:
  VAR_6 = VAR_3->requested_pix_clk_100hz;
  VAR_5 = VAR_3->requested_pix_clk_100hz;
  break;
 }

 VAR_7.pixel_clock = VAR_6 / 10;
 VAR_7.
  encoder_object_id = VAR_3->encoder_object_id;
 VAR_7.signal_type = VAR_3->signal_type;
 VAR_7.
  ss_enable = VAR_3->flags.ENABLE_SS;
 VAR_8 = VAR_2->bios->funcs->adjust_pixel_clock(
   VAR_2->bios, &VAR_7);
 if (VAR_8 == VAR_0) {
  VAR_4->actual_pix_clk_100hz = VAR_5;
  VAR_4->adjusted_pix_clk_100hz =
   VAR_7.adjusted_pixel_clock * 10;
  VAR_4->reference_divider =
   VAR_7.reference_divider;
  VAR_4->pix_clk_post_divider =
   VAR_7.pixel_clock_post_divider;

  return 1;
 }

 return 0;
}
