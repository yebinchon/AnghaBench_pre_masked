
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct tg_color {int color_g_y; int color_r_cr; int member_0; } ;
struct TYPE_16__ {int depth; } ;
struct TYPE_13__ {TYPE_2__ lb_params; } ;
struct TYPE_22__ {TYPE_10__ scl_data; TYPE_9__* xfm; } ;
struct TYPE_20__ {TYPE_11__* tg; } ;
struct pipe_ctx {TYPE_8__ plane_res; TYPE_6__ stream_res; TYPE_4__* stream; } ;
struct TYPE_15__ {scalar_t__ visual_confirm; } ;
struct dc {TYPE_1__ debug; } ;
struct TYPE_23__ {TYPE_7__* funcs; } ;
struct TYPE_21__ {int (* transform_set_scaler ) (TYPE_9__*,TYPE_10__*) ;int (* transform_set_pixel_storage_depth ) (TYPE_9__*,int ,int *) ;} ;
struct TYPE_19__ {int (* set_overscan_blank_color ) (TYPE_11__*,struct tg_color*) ;} ;
struct TYPE_17__ {scalar_t__ pixel_encoding; } ;
struct TYPE_18__ {TYPE_3__ timing; int bit_depth_params; int output_color_space; } ;
struct TYPE_14__ {TYPE_5__* funcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dc const*,int ,struct tg_color*) ;
 int FUNC_1 (struct pipe_ctx const*,struct tg_color*) ;
 int FUNC_2 (TYPE_9__*,int ,int *) ;
 int FUNC_3 (TYPE_11__*,struct tg_color*) ;
 int FUNC_4 (TYPE_9__*,TYPE_10__*) ;

__attribute__((used)) static void FUNC_5(const struct dc *VAR_2,
  const struct pipe_ctx *VAR_3)
{
 struct tg_color VAR_4 = {0};







 if (VAR_2->debug.visual_confirm == VAR_1)
  FUNC_1(VAR_3, &VAR_4);
 else
  FUNC_0(VAR_2,
    VAR_3->stream->output_color_space,
    &VAR_4);

 VAR_3->plane_res.xfm->funcs->transform_set_pixel_storage_depth(
  VAR_3->plane_res.xfm,
  VAR_3->plane_res.scl_data.lb_params.depth,
  &VAR_3->stream->bit_depth_params);

 if (VAR_3->stream_res.tg->funcs->set_overscan_blank_color) {





  if (VAR_3->stream->timing.pixel_encoding == VAR_0)
   VAR_4.color_r_cr = VAR_4.color_g_y;

  VAR_3->stream_res.tg->funcs->set_overscan_blank_color(
    VAR_3->stream_res.tg,
    &VAR_4);
 }

 VAR_3->plane_res.xfm->funcs->transform_set_scaler(VAR_3->plane_res.xfm,
  &VAR_3->plane_res.scl_data);
}
