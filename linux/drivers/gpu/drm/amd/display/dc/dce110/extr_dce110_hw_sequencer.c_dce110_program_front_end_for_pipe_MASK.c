
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
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


typedef int tbl_entry ;
struct xfm_grph_csc_adjustment {int * temperature_matrix; int gamut_adjust_type; int * regval; int color_space; } ;
struct TYPE_46__ {int y; int x; int height; int width; } ;
struct TYPE_45__ {int y; int x; int height; int width; } ;
struct TYPE_29__ {int alpha_en; } ;
struct TYPE_30__ {TYPE_8__ recout; TYPE_7__ viewport; TYPE_14__ lb_params; } ;
struct TYPE_33__ {TYPE_15__ scl_data; struct mem_input* mi; TYPE_23__* xfm; } ;
struct pipe_ctx {size_t pipe_idx; scalar_t__ bottom_pipe; TYPE_18__ plane_res; struct dc_plane_state* plane_state; TYPE_22__* stream; } ;
struct out_csc_color_matrix {int * temperature_matrix; int gamut_adjust_type; int * regval; int color_space; } ;
struct mem_input {TYPE_17__* funcs; int inst; } ;
struct TYPE_44__ {int height; int width; int y; int x; } ;
struct TYPE_43__ {int height; int width; int y; int x; } ;
struct TYPE_42__ {int height; int width; int y; int x; } ;
struct TYPE_35__ {int low_part; int high_part; } ;
struct TYPE_40__ {TYPE_1__ addr; } ;
struct TYPE_41__ {TYPE_2__ grph; } ;
struct TYPE_34__ {scalar_t__ full_update; scalar_t__ gamma_change; scalar_t__ in_transfer_func_change; } ;
struct TYPE_36__ {TYPE_19__ bits; } ;
struct dc_plane_state {TYPE_6__ clip_rect; TYPE_5__ dst_rect; TYPE_4__ src_rect; TYPE_3__ address; TYPE_20__ update_flags; int rotation; int tiling_info; int format; int visible; int plane_size; } ;
struct TYPE_37__ {int (* set_output_transfer_func ) (struct pipe_ctx*,TYPE_22__*) ;int (* set_input_transfer_func ) (struct pipe_ctx*,struct dc_plane_state*) ;} ;
struct TYPE_31__ {scalar_t__ gpu_vm_support; } ;
struct dc {TYPE_21__ hwss; TYPE_16__ config; int hwseq; TYPE_10__* current_state; } ;
typedef int adjust ;
struct TYPE_47__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_39__ {TYPE_13__* funcs; } ;
struct TYPE_27__ {int enable_remap; int * matrix; } ;
struct TYPE_26__ {int enable_adjustment; int * matrix; } ;
struct TYPE_38__ {TYPE_12__ gamut_remap_matrix; TYPE_11__ csc_color_matrix; int output_color_space; } ;
struct TYPE_32__ {int (* mem_input_program_pte_vm ) (struct mem_input*,int ,int *,int ) ;int (* set_blank ) (struct mem_input*,int ) ;int (* mem_input_program_surface_config ) (struct mem_input*,int ,int *,int *,int ,int *,int) ;} ;
struct TYPE_28__ {int (* transform_set_gamut_remap ) (TYPE_23__*,struct xfm_grph_csc_adjustment*) ;int (* opp_set_csc_adjustment ) (TYPE_23__*,struct xfm_grph_csc_adjustment*) ;} ;
struct TYPE_25__ {TYPE_9__ res_ctx; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,void*,int ,int ,int ,int ,int ,int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct xfm_grph_csc_adjustment*,int ,int) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*) ;
 int FUNC_5 (struct pipe_ctx*) ;
 int FUNC_6 (TYPE_23__*,struct xfm_grph_csc_adjustment*) ;
 int FUNC_7 (TYPE_23__*,struct xfm_grph_csc_adjustment*) ;
 int FUNC_8 (struct mem_input*,int ,int *,int *,int ,int *,int) ;
 int FUNC_9 (struct mem_input*,int ) ;
 int FUNC_10 (struct mem_input*,int ,int *,int ) ;
 int FUNC_11 (struct pipe_ctx*,struct dc_plane_state*) ;
 int FUNC_12 (struct pipe_ctx*,TYPE_22__*) ;

__attribute__((used)) static void FUNC_13(
  struct dc *VAR_3, struct pipe_ctx *VAR_4)
{
 struct mem_input *VAR_5 = VAR_4->plane_res.mi;
 struct pipe_ctx *VAR_6 = ((void*)0);
 struct dc_plane_state *VAR_7 = VAR_4->plane_state;
 struct xfm_grph_csc_adjustment VAR_8;
 struct out_csc_color_matrix VAR_9;
 unsigned int VAR_10;
 FUNC_0();
 FUNC_3(&VAR_9, 0, sizeof(VAR_9));

 if (VAR_3->current_state)
  VAR_6 = &VAR_3->current_state->res_ctx.pipe_ctx[VAR_4->pipe_idx];

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.gamut_adjust_type = VAR_1;

 FUNC_2(VAR_3->hwseq, VAR_5->inst, 1);

 FUNC_5(VAR_4);
 if (VAR_4->stream->csc_color_matrix.enable_adjustment
   == 1) {
  VAR_9.color_space =
   VAR_4->stream->output_color_space;

  for (VAR_10 = 0; VAR_10 < 12; VAR_10++)
   VAR_9.regval[VAR_10] =
   VAR_4->stream->csc_color_matrix.matrix[VAR_10];

  VAR_4->plane_res.xfm->funcs->opp_set_csc_adjustment
    (VAR_4->plane_res.xfm, &VAR_9);
 }

 if (VAR_4->stream->gamut_remap_matrix.enable_remap == 1) {
  VAR_8.gamut_adjust_type = VAR_2;

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   VAR_8.temperature_matrix[VAR_10] =
    VAR_4->stream->gamut_remap_matrix.matrix[VAR_10];
 }

 VAR_4->plane_res.xfm->funcs->transform_set_gamut_remap(VAR_4->plane_res.xfm, &VAR_8);

 VAR_4->plane_res.scl_data.lb_params.alpha_en = VAR_4->bottom_pipe != 0;

 FUNC_4(VAR_3, VAR_4);

 VAR_5->funcs->mem_input_program_surface_config(
   VAR_5,
   VAR_7->format,
   &VAR_7->tiling_info,
   &VAR_7->plane_size,
   VAR_7->rotation,
   ((void*)0),
   0);
 if (VAR_5->funcs->set_blank)
  VAR_5->funcs->set_blank(VAR_5, VAR_4->plane_state->visible);

 if (VAR_3->config.gpu_vm_support)
  VAR_5->funcs->mem_input_program_pte_vm(
    VAR_4->plane_res.mi,
    VAR_7->format,
    &VAR_7->tiling_info,
    VAR_7->rotation);


 if (VAR_4->plane_state->update_flags.bits.full_update ||
   VAR_4->plane_state->update_flags.bits.in_transfer_func_change ||
   VAR_4->plane_state->update_flags.bits.gamma_change)
  VAR_3->hwss.set_input_transfer_func(VAR_4, VAR_4->plane_state);

 if (VAR_4->plane_state->update_flags.bits.full_update)
  VAR_3->hwss.set_output_transfer_func(VAR_4, VAR_4->stream);

 FUNC_1(
   "Pipe:%d %p: addr hi:0x%x, "
   "addr low:0x%x, "
   "src: %d, %d, %d,"
   " %d; dst: %d, %d, %d, %d;"
   "clip: %d, %d, %d, %d\n",
   VAR_4->pipe_idx,
   (void *) VAR_4->plane_state,
   VAR_4->plane_state->address.grph.addr.high_part,
   VAR_4->plane_state->address.grph.addr.low_part,
   VAR_4->plane_state->src_rect.x,
   VAR_4->plane_state->src_rect.y,
   VAR_4->plane_state->src_rect.width,
   VAR_4->plane_state->src_rect.height,
   VAR_4->plane_state->dst_rect.x,
   VAR_4->plane_state->dst_rect.y,
   VAR_4->plane_state->dst_rect.width,
   VAR_4->plane_state->dst_rect.height,
   VAR_4->plane_state->clip_rect.x,
   VAR_4->plane_state->clip_rect.y,
   VAR_4->plane_state->clip_rect.width,
   VAR_4->plane_state->clip_rect.height);

 FUNC_1(
   "Pipe %d: width, height, x, y\n"
   "viewport:%d, %d, %d, %d\n"
   "recout:  %d, %d, %d, %d\n",
   VAR_4->pipe_idx,
   VAR_4->plane_res.scl_data.viewport.width,
   VAR_4->plane_res.scl_data.viewport.height,
   VAR_4->plane_res.scl_data.viewport.x,
   VAR_4->plane_res.scl_data.viewport.y,
   VAR_4->plane_res.scl_data.recout.width,
   VAR_4->plane_res.scl_data.recout.height,
   VAR_4->plane_res.scl_data.recout.x,
   VAR_4->plane_res.scl_data.recout.y);
}
