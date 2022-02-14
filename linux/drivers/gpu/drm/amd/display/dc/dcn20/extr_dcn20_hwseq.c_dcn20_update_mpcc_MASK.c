
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {TYPE_9__* opp; } ;
struct TYPE_12__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_10__ stream_res; TYPE_5__* plane_state; TYPE_1__ plane_res; } ;
struct TYPE_13__ {int member_0; } ;
struct mpcc_blnd_cfg {int overlap_only; int global_gain; int global_alpha; int background_color_bpc; int top_gain; int bottom_inside_gain; int bottom_outside_gain; int pre_multiplied_alpha; scalar_t__ bottom_gain_mode; int alpha_mode; int black_color; TYPE_2__ member_0; } ;
struct mpcc {int dummy; } ;
struct mpc_tree {int dummy; } ;
struct mpc {TYPE_7__* funcs; } ;
struct hubp {int inst; int mpcc_id; int opp_id; } ;
struct TYPE_17__ {scalar_t__ visual_confirm; scalar_t__ sanity_checks; } ;
struct dc {TYPE_8__* res_pool; TYPE_6__ debug; } ;
struct TYPE_20__ {int inst; struct mpc_tree mpc_tree_params; } ;
struct TYPE_19__ {struct mpc* mpc; } ;
struct TYPE_18__ {struct mpcc* (* insert_plane ) (struct mpc*,struct mpc_tree*,struct mpcc_blnd_cfg*,int *,int *,int,int) ;int (* assert_mpcc_idle_before_connect ) (struct mpc*,int) ;int (* remove_mpcc ) (struct mpc*,struct mpc_tree*,struct mpcc*) ;struct mpcc* (* get_mpcc_for_dpp ) (struct mpc_tree*,int) ;int (* update_blending ) (struct mpc*,struct mpcc_blnd_cfg*,int) ;} ;
struct TYPE_14__ {int full_update; } ;
struct TYPE_15__ {TYPE_3__ bits; } ;
struct TYPE_16__ {int per_pixel_alpha; int global_alpha_value; TYPE_4__ update_flags; scalar_t__ global_alpha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pipe_ctx*,int *) ;
 int FUNC_2 (struct pipe_ctx*,int *) ;
 int FUNC_3 (struct mpc*,struct mpcc_blnd_cfg*,int) ;
 struct mpcc* FUNC_4 (struct mpc_tree*,int) ;
 int FUNC_5 (struct mpc*,struct mpc_tree*,struct mpcc*) ;
 int FUNC_6 (struct mpc*,int) ;
 struct mpcc* FUNC_7 (struct mpc*,struct mpc_tree*,struct mpcc_blnd_cfg*,int *,int *,int,int) ;

__attribute__((used)) static void FUNC_8(struct dc *VAR_4, struct pipe_ctx *VAR_5)
{
 struct hubp *VAR_6 = VAR_5->plane_res.hubp;
 struct mpcc_blnd_cfg VAR_7 = { 0 };
 bool VAR_8 = VAR_5->plane_state->per_pixel_alpha;
 int VAR_9;
 struct mpcc *VAR_10;
 struct mpc *VAR_11 = VAR_4->res_pool->mpc;
 struct mpc_tree *VAR_12 = &(VAR_5->stream_res.opp->mpc_tree_params);


 if (VAR_4->debug.visual_confirm == VAR_2) {
  FUNC_1(
    VAR_5, &VAR_7.black_color);
 } else if (VAR_4->debug.visual_confirm == VAR_3) {
  FUNC_2(
    VAR_5, &VAR_7.black_color);
 }

 if (VAR_8)
  VAR_7.alpha_mode = VAR_1;
 else
  VAR_7.alpha_mode = VAR_0;

 VAR_7.overlap_only = 0;
 VAR_7.global_gain = 0xff;

 if (VAR_5->plane_state->global_alpha)
  VAR_7.global_alpha = VAR_5->plane_state->global_alpha_value;
 else
  VAR_7.global_alpha = 0xff;

 VAR_7.background_color_bpc = 4;
 VAR_7.bottom_gain_mode = 0;
 VAR_7.top_gain = 0x1f000;
 VAR_7.bottom_inside_gain = 0x1f000;
 VAR_7.bottom_outside_gain = 0x1f000;
 VAR_7.pre_multiplied_alpha = VAR_8;
 VAR_9 = VAR_6->inst;


 if (!VAR_5->plane_state->update_flags.bits.full_update) {
  VAR_11->funcs->update_blending(VAR_11, &VAR_7, VAR_9);
  return;
 }


 VAR_10 = VAR_11->funcs->get_mpcc_for_dpp(VAR_12, VAR_9);

 if (VAR_10 != ((void*)0))
  VAR_11->funcs->remove_mpcc(VAR_11, VAR_12, VAR_10);
 else
  if (VAR_4->debug.sanity_checks)
   VAR_11->funcs->assert_mpcc_idle_before_connect(
     VAR_4->res_pool->mpc, VAR_9);


 VAR_10 = VAR_11->funcs->insert_plane(VAR_4->res_pool->mpc,
   VAR_12,
   &VAR_7,
   ((void*)0),
   ((void*)0),
   VAR_6->inst,
   VAR_9);

 FUNC_0(VAR_10 != ((void*)0));
 VAR_6->opp_id = VAR_5->stream_res.opp->inst;
 VAR_6->mpcc_id = VAR_9;
}
