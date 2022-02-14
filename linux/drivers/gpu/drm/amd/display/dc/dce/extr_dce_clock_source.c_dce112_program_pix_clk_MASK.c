
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pll_settings {unsigned int actual_pix_clk_100hz; int use_external_clk; } ;
struct TYPE_9__ {int SUPPORT_YCBCR420; } ;
struct pixel_clk_params {unsigned int controller_id; TYPE_4__ flags; int color_depth; int signal_type; int encoder_object_id; } ;
struct dce110_clk_src {TYPE_5__* bios; } ;
struct clock_source {scalar_t__ id; TYPE_1__* ctx; } ;
struct TYPE_7__ {int SET_XTALIN_REF_SRC; int SUPPORT_YUV_420; int SET_GENLOCK_REF_DIV_SRC; } ;
struct bp_pixel_clock_parameters {unsigned int controller_id; scalar_t__ pll_id; unsigned int target_pixel_clock_100hz; TYPE_2__ flags; int signal_type; int encoder_object_id; int member_0; } ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_8__ {scalar_t__ (* set_pixel_clock ) (TYPE_5__*,struct bp_pixel_clock_parameters*) ;} ;
struct TYPE_6__ {scalar_t__ dce_version; int dce_environment; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,unsigned int) ;
 struct dce110_clk_src* FUNC_3 (struct clock_source*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dce110_clk_src*,int ,int ,int ) ;
 int FUNC_6 (struct dce110_clk_src*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,struct bp_pixel_clock_parameters*) ;

__attribute__((used)) static bool FUNC_8(
  struct clock_source *VAR_9,
  struct pixel_clk_params *VAR_10,
  struct pll_settings *VAR_11)
{
 struct dce110_clk_src *VAR_12 = FUNC_3(VAR_9);
 struct bp_pixel_clock_parameters VAR_13 = {0};
 if (VAR_9->id != VAR_2 &&
   !FUNC_4(VAR_10->signal_type) &&
   VAR_9->ctx->dce_version <= VAR_4)
  FUNC_6(VAR_12);


 VAR_13.controller_id = VAR_10->controller_id;
 VAR_13.pll_id = VAR_9->id;
 VAR_13.target_pixel_clock_100hz = VAR_11->actual_pix_clk_100hz;
 VAR_13.encoder_object_id = VAR_10->encoder_object_id;
 VAR_13.signal_type = VAR_10->signal_type;

 if (VAR_9->id != VAR_1) {
  VAR_13.flags.SET_GENLOCK_REF_DIV_SRC =
      VAR_11->use_external_clk;
  VAR_13.flags.SET_XTALIN_REF_SRC =
      !VAR_11->use_external_clk;
  if (VAR_10->flags.SUPPORT_YCBCR420) {
   VAR_13.flags.SUPPORT_YUV_420 = 1;
  }
 }
 if (VAR_12->bios->funcs->set_pixel_clock(
   VAR_12->bios, &VAR_13) != VAR_0)
  return 0;

 if (VAR_9->id != VAR_1)
  FUNC_5(VAR_12,
     VAR_10->signal_type,
     VAR_10->color_depth,
     VAR_10->flags.SUPPORT_YCBCR420);

 return 1;
}
