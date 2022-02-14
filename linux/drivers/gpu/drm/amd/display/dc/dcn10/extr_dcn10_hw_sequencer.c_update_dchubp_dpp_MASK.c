
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_24__ ;
typedef struct TYPE_39__ TYPE_23__ ;
typedef struct TYPE_38__ TYPE_22__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct plane_size {int surface_size; } ;
struct TYPE_32__ {TYPE_5__* opp; TYPE_16__* tg; } ;
struct TYPE_34__ {int viewport_c; int viewport; } ;
struct TYPE_28__ {int dppclk_khz; } ;
struct TYPE_36__ {TYPE_19__ scl_data; TYPE_13__ bw; struct dpp* dpp; struct hubp* hubp; } ;
struct pipe_ctx {TYPE_17__ stream_res; TYPE_4__* stream; TYPE_20__ plane_res; int ttu_regs; int dlg_regs; int pipe_dlg_param; int rq_regs; struct dc_plane_state* plane_state; } ;
struct hubp {int power_gated; TYPE_18__* funcs; } ;
struct dpp {int inst; TYPE_10__* funcs; } ;
struct TYPE_45__ {int dppclk_khz; } ;
struct TYPE_46__ {TYPE_6__ clk; } ;
struct TYPE_47__ {TYPE_7__ dcn; } ;
struct TYPE_48__ {TYPE_8__ bw; } ;
struct dc_state {TYPE_9__ bw_ctx; } ;
struct TYPE_38__ {scalar_t__ plane_size_change; scalar_t__ scaling_change; scalar_t__ bpp_change; scalar_t__ dcc_change; scalar_t__ swizzle_change; scalar_t__ rotation_change; scalar_t__ horizontal_mirror_change; scalar_t__ pixel_format_change; scalar_t__ full_update; scalar_t__ position_change; scalar_t__ global_alpha_change; scalar_t__ per_pixel_alpha_change; } ;
struct TYPE_39__ {TYPE_22__ bits; } ;
struct dc_plane_state {int horizontal_mirror; int dcc; int rotation; int tiling_info; int format; TYPE_23__ update_flags; struct plane_size plane_size; } ;
struct TYPE_37__ {int (* update_plane_addr ) (struct dc*,struct pipe_ctx*) ;int (* program_output_csc ) (struct dc*,struct pipe_ctx*,int ,int ,int ) ;int (* program_gamut_remap ) (struct pipe_ctx*) ;int (* set_cursor_sdr_white_level ) (struct pipe_ctx*) ;int (* set_cursor_attribute ) (struct pipe_ctx*) ;int (* set_cursor_position ) (struct pipe_ctx*) ;int (* update_mpcc ) (struct dc*,struct pipe_ctx*) ;} ;
struct dc {TYPE_21__ hwss; TYPE_15__* clk_mgr; TYPE_12__* res_pool; } ;
struct TYPE_44__ {int inst; } ;
struct TYPE_42__ {int matrix; } ;
struct TYPE_35__ {scalar_t__ quad_part; } ;
struct TYPE_41__ {TYPE_1__ address; } ;
struct TYPE_43__ {TYPE_3__ csc_color_matrix; int output_color_space; TYPE_2__ cursor_attributes; } ;
struct TYPE_40__ {TYPE_11__* funcs; } ;
struct TYPE_33__ {int (* set_blank ) (struct hubp*,int) ;int (* hubp_program_surface_config ) (struct hubp*,int ,int *,struct plane_size*,int ,int *,int ,unsigned int) ;int (* mem_program_viewport ) (struct hubp*,int *,int *) ;int (* hubp_setup_interdependent ) (struct hubp*,int *,int *) ;int (* hubp_setup ) (struct hubp*,int *,int *,int *,int *) ;int (* hubp_vtg_sel ) (struct hubp*,int ) ;} ;
struct TYPE_31__ {int inst; } ;
struct TYPE_29__ {int dispclk_khz; int dppclk_khz; } ;
struct TYPE_30__ {TYPE_14__ clks; } ;
struct TYPE_27__ {TYPE_24__* dccg; } ;
struct TYPE_26__ {int (* update_dpp_dto ) (TYPE_24__*,int ,int ,int) ;} ;
struct TYPE_25__ {int (* dpp_dppclk_control ) (struct dpp*,int,int) ;} ;


 scalar_t__ FUNC_0 (struct pipe_ctx*) ;
 int FUNC_1 (struct dpp*,int,int) ;
 int FUNC_2 (struct pipe_ctx*) ;
 int FUNC_3 (struct pipe_ctx*) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*,int ,int ,int ) ;
 int FUNC_5 (struct hubp*,int ,int *,struct plane_size*,int ,int *,int ,unsigned int) ;
 int FUNC_6 (struct dc*,struct pipe_ctx*) ;
 int FUNC_7 (struct hubp*,int) ;
 int FUNC_8 (TYPE_24__*,int ,int ,int) ;
 int FUNC_9 (struct hubp*,int ) ;
 int FUNC_10 (struct hubp*,int *,int *,int *,int *) ;
 int FUNC_11 (struct hubp*,int *,int *) ;
 int FUNC_12 (struct dc*,struct pipe_ctx*) ;
 int FUNC_13 (struct hubp*,int *,int *) ;
 int FUNC_14 (struct pipe_ctx*) ;
 int FUNC_15 (struct pipe_ctx*) ;
 int FUNC_16 (struct dpp*,struct dc_plane_state*) ;
 int FUNC_17 (struct pipe_ctx*) ;

void FUNC_18(
 struct dc *VAR_0,
 struct pipe_ctx *VAR_1,
 struct dc_state *VAR_2)
{
 struct hubp *VAR_3 = VAR_1->plane_res.hubp;
 struct dpp *VAR_4 = VAR_1->plane_res.dpp;
 struct dc_plane_state *VAR_5 = VAR_1->plane_state;
 struct plane_size VAR_6 = VAR_5->plane_size;
 unsigned int VAR_7 = 0;





 if (VAR_5->update_flags.bits.full_update) {
  bool VAR_8 = VAR_2->bw_ctx.bw.dcn.clk.dppclk_khz <=
    VAR_0->clk_mgr->clks.dispclk_khz / 2;

  VAR_4->funcs->dpp_dppclk_control(
    VAR_4,
    VAR_8,
    1);

  if (VAR_0->res_pool->dccg)
   VAR_0->res_pool->dccg->funcs->update_dpp_dto(
     VAR_0->res_pool->dccg,
     VAR_4->inst,
     VAR_1->plane_res.bw.dppclk_khz,
     0);
  else
   VAR_0->clk_mgr->clks.dppclk_khz = VAR_8 ?
      VAR_0->clk_mgr->clks.dispclk_khz / 2 :
       VAR_0->clk_mgr->clks.dispclk_khz;
 }





 if (VAR_5->update_flags.bits.full_update) {
  VAR_3->funcs->hubp_vtg_sel(VAR_3, VAR_1->stream_res.tg->inst);

  VAR_3->funcs->hubp_setup(
   VAR_3,
   &VAR_1->dlg_regs,
   &VAR_1->ttu_regs,
   &VAR_1->rq_regs,
   &VAR_1->pipe_dlg_param);
  VAR_3->funcs->hubp_setup_interdependent(
   VAR_3,
   &VAR_1->dlg_regs,
   &VAR_1->ttu_regs);
 }

 VAR_6.surface_size = VAR_1->plane_res.scl_data.viewport;

 if (VAR_5->update_flags.bits.full_update ||
  VAR_5->update_flags.bits.bpp_change)
  FUNC_16(VAR_4, VAR_5);

 if (VAR_5->update_flags.bits.full_update ||
  VAR_5->update_flags.bits.per_pixel_alpha_change ||
  VAR_5->update_flags.bits.global_alpha_change)
  VAR_0->hwss.update_mpcc(VAR_0, VAR_1);

 if (VAR_5->update_flags.bits.full_update ||
  VAR_5->update_flags.bits.per_pixel_alpha_change ||
  VAR_5->update_flags.bits.global_alpha_change ||
  VAR_5->update_flags.bits.scaling_change ||
  VAR_5->update_flags.bits.position_change) {
  FUNC_17(VAR_1);
 }

 if (VAR_5->update_flags.bits.full_update ||
  VAR_5->update_flags.bits.scaling_change ||
  VAR_5->update_flags.bits.position_change) {
  VAR_3->funcs->mem_program_viewport(
   VAR_3,
   &VAR_1->plane_res.scl_data.viewport,
   &VAR_1->plane_res.scl_data.viewport_c);
 }

 if (VAR_1->stream->cursor_attributes.address.quad_part != 0) {
  VAR_0->hwss.set_cursor_position(VAR_1);
  VAR_0->hwss.set_cursor_attribute(VAR_1);

  if (VAR_0->hwss.set_cursor_sdr_white_level)
   VAR_0->hwss.set_cursor_sdr_white_level(VAR_1);
 }

 if (VAR_5->update_flags.bits.full_update) {

  VAR_0->hwss.program_gamut_remap(VAR_1);

  VAR_0->hwss.program_output_csc(VAR_0,
    VAR_1,
    VAR_1->stream->output_color_space,
    VAR_1->stream->csc_color_matrix.matrix,
    VAR_1->stream_res.opp->inst);
 }

 if (VAR_5->update_flags.bits.full_update ||
  VAR_5->update_flags.bits.pixel_format_change ||
  VAR_5->update_flags.bits.horizontal_mirror_change ||
  VAR_5->update_flags.bits.rotation_change ||
  VAR_5->update_flags.bits.swizzle_change ||
  VAR_5->update_flags.bits.dcc_change ||
  VAR_5->update_flags.bits.bpp_change ||
  VAR_5->update_flags.bits.scaling_change ||
  VAR_5->update_flags.bits.plane_size_change) {
  VAR_3->funcs->hubp_program_surface_config(
   VAR_3,
   VAR_5->format,
   &VAR_5->tiling_info,
   &VAR_6,
   VAR_5->rotation,
   &VAR_5->dcc,
   VAR_5->horizontal_mirror,
   VAR_7);
 }

 VAR_3->power_gated = 0;

 VAR_0->hwss.update_plane_addr(VAR_0, VAR_1);

 if (FUNC_0(VAR_1))
  VAR_3->funcs->set_blank(VAR_3, 0);
}
