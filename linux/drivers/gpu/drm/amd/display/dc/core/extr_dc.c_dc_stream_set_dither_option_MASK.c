
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {TYPE_10__* opp; } ;
struct TYPE_18__ {int depth; } ;
struct TYPE_19__ {TYPE_5__ lb_params; } ;
struct TYPE_20__ {TYPE_6__ scl_data; TYPE_11__* xfm; } ;
struct pipe_ctx {TYPE_9__ stream_res; TYPE_7__ plane_res; struct dc_stream_state* stream; } ;
struct bit_depth_reduction_params {int dummy; } ;
struct dc_stream_state {int dither_option; struct bit_depth_reduction_params bit_depth_params; struct dc_link* link; } ;
struct dc_link {TYPE_3__* dc; } ;
typedef int params ;
typedef enum dc_dither_option { ____Placeholder_dc_dither_option } dc_dither_option ;
struct TYPE_21__ {int (* opp_program_bit_depth_reduction ) (TYPE_10__*,struct bit_depth_reduction_params*) ;} ;
struct TYPE_17__ {int (* transform_set_pixel_storage_depth ) (TYPE_11__*,int ,struct bit_depth_reduction_params*) ;} ;
struct TYPE_16__ {TYPE_2__* current_state; } ;
struct TYPE_14__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_15__ {TYPE_1__ res_ctx; } ;
struct TYPE_13__ {TYPE_4__* funcs; } ;
struct TYPE_12__ {TYPE_8__* funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bit_depth_reduction_params*,int ,int) ;
 int FUNC_1 (struct dc_stream_state*,struct bit_depth_reduction_params*) ;
 int FUNC_2 (TYPE_11__*,int ,struct bit_depth_reduction_params*) ;
 int FUNC_3 (TYPE_10__*,struct bit_depth_reduction_params*) ;

void FUNC_4(struct dc_stream_state *VAR_2,
  enum dc_dither_option VAR_3)
{
 struct bit_depth_reduction_params VAR_4;
 struct dc_link *VAR_5 = VAR_2->link;
 struct pipe_ctx *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_5->dc->current_state->res_ctx.pipe_ctx[VAR_7].stream ==
    VAR_2) {
   VAR_6 = &VAR_5->dc->current_state->res_ctx.pipe_ctx[VAR_7];
   break;
  }
 }

 if (!VAR_6)
  return;
 if (VAR_3 > VAR_0)
  return;

 VAR_2->dither_option = VAR_3;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_2, &VAR_4);
 VAR_2->bit_depth_params = VAR_4;

 if (VAR_6->plane_res.xfm &&
     VAR_6->plane_res.xfm->funcs->transform_set_pixel_storage_depth) {
  VAR_6->plane_res.xfm->funcs->transform_set_pixel_storage_depth(
   VAR_6->plane_res.xfm,
   VAR_6->plane_res.scl_data.lb_params.depth,
   &VAR_2->bit_depth_params);
 }

 VAR_6->stream_res.opp->funcs->
  opp_program_bit_depth_reduction(VAR_6->stream_res.opp, &VAR_4);
}
