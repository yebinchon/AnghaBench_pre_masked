
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pll_settings {int use_external_clk; int pix_clk_post_divider; int fract_feedback_divider; int feedback_divider; int reference_divider; int actual_pix_clk_100hz; } ;
struct TYPE_9__ {scalar_t__ ENABLE_SS; } ;
struct pixel_clk_params {int color_depth; int signal_type; TYPE_4__ flags; int encoder_object_id; int controller_id; } ;
struct dce110_clk_src {TYPE_5__* bios; } ;
struct clock_source {scalar_t__ id; TYPE_1__* ctx; } ;
struct TYPE_7__ {int SET_EXTERNAL_REF_DIV_SRC; } ;
struct bp_pixel_clock_parameters {scalar_t__ pll_id; TYPE_2__ flags; int pixel_clock_post_divider; int fractional_feedback_divider; int feedback_divider; int reference_divider; int signal_type; int encoder_object_id; int target_pixel_clock_100hz; int controller_id; int member_0; } ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_8__ {scalar_t__ (* set_pixel_clock ) (TYPE_5__*,struct bp_pixel_clock_parameters*) ;} ;
struct TYPE_6__ {scalar_t__ dce_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dce110_clk_src* FUNC_0 (struct clock_source*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dce110_clk_src*,int ,int ) ;
 int FUNC_3 (struct dce110_clk_src*) ;
 int FUNC_4 (struct dce110_clk_src*,int ,struct pll_settings*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,struct bp_pixel_clock_parameters*) ;

__attribute__((used)) static bool FUNC_6(
  struct clock_source *VAR_3,
  struct pixel_clk_params *VAR_4,
  struct pll_settings *VAR_5)
{
 struct dce110_clk_src *VAR_6 = FUNC_0(VAR_3);
 struct bp_pixel_clock_parameters VAR_7 = {0};





 if (VAR_3->id != VAR_1 &&
   !FUNC_1(VAR_4->signal_type) &&
   VAR_3->ctx->dce_version <= VAR_2)
  FUNC_3(VAR_6);


 VAR_7.controller_id = VAR_4->controller_id;
 VAR_7.pll_id = VAR_3->id;
 VAR_7.target_pixel_clock_100hz = VAR_5->actual_pix_clk_100hz;
 VAR_7.encoder_object_id = VAR_4->encoder_object_id;
 VAR_7.signal_type = VAR_4->signal_type;

 VAR_7.reference_divider = VAR_5->reference_divider;
 VAR_7.feedback_divider = VAR_5->feedback_divider;
 VAR_7.fractional_feedback_divider =
   VAR_5->fract_feedback_divider;
 VAR_7.pixel_clock_post_divider =
   VAR_5->pix_clk_post_divider;
 VAR_7.flags.SET_EXTERNAL_REF_DIV_SRC =
     VAR_5->use_external_clk;

 if (VAR_6->bios->funcs->set_pixel_clock(
   VAR_6->bios, &VAR_7) != VAR_0)
  return 0;





 if (VAR_3->id != VAR_1
   && !FUNC_1(VAR_4->signal_type)) {

  if (VAR_4->flags.ENABLE_SS)
   if (!FUNC_4(VAR_6,
       VAR_4->signal_type,
       VAR_5))
    return 0;


  FUNC_2(VAR_6,
     VAR_4->signal_type,
     VAR_4->color_depth);
 }

 return 1;
}
