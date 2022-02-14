
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tg_color {int member_0; } ;
struct stream_resource {TYPE_6__* abm; TYPE_4__* tg; TYPE_8__* opp; } ;
struct pipe_ctx {struct stream_resource stream_res; struct pipe_ctx* next_odm_pipe; struct dc_stream_state* stream; } ;
struct TYPE_13__ {int h_addressable; int h_border_left; int h_border_right; int v_addressable; int v_border_bottom; int v_border_top; int display_color_depth; } ;
struct dc_stream_state {int output_color_space; int abm_level; TYPE_3__ timing; } ;
struct TYPE_12__ {scalar_t__ visual_confirm; } ;
struct dc {TYPE_2__ debug; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
typedef enum controller_dp_test_pattern { ____Placeholder_controller_dp_test_pattern } controller_dp_test_pattern ;
struct TYPE_17__ {TYPE_1__* funcs; } ;
struct TYPE_16__ {TYPE_5__* funcs; } ;
struct TYPE_15__ {int (* set_abm_level ) (TYPE_6__*,int ) ;int (* set_pipe ) (TYPE_6__*,scalar_t__) ;int (* set_abm_immediate_disable ) (TYPE_6__*) ;} ;
struct TYPE_14__ {scalar_t__ inst; } ;
struct TYPE_11__ {int (* opp_set_disp_pattern_generator ) (TYPE_8__*,int,int ,struct tg_color*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dc*,int,struct tg_color*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_8__*,int,int ,struct tg_color*,int,int) ;
 int FUNC_3 (TYPE_8__*,int,int ,struct tg_color*,int,int) ;
 int FUNC_4 (TYPE_6__*,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,int ) ;

void FUNC_6(
  struct dc *VAR_5,
  struct pipe_ctx *VAR_6,
  bool VAR_7)
{
 struct tg_color VAR_8 = {0};
 struct stream_resource *VAR_9 = &VAR_6->stream_res;
 struct dc_stream_state *VAR_10 = VAR_6->stream;
 enum dc_color_space VAR_11 = VAR_10->output_color_space;
 enum controller_dp_test_pattern VAR_12 = VAR_2;
 struct pipe_ctx *VAR_13;
 int VAR_14 = 1;

 int VAR_15 = VAR_10->timing.h_addressable + VAR_10->timing.h_border_left + VAR_10->timing.h_border_right;
 int VAR_16 = VAR_10->timing.v_addressable + VAR_10->timing.v_border_bottom + VAR_10->timing.v_border_top;


 FUNC_0(VAR_5, VAR_11, &VAR_8);

 for (VAR_13 = VAR_6->next_odm_pipe; VAR_13; VAR_13 = VAR_13->next_odm_pipe)
  VAR_14++;

 VAR_15 = VAR_15 / VAR_14;

 if (VAR_7) {
  if (VAR_9->abm)
   VAR_9->abm->funcs->set_abm_immediate_disable(VAR_9->abm);

  if (VAR_5->debug.visual_confirm != VAR_4)
   VAR_12 = VAR_1;
 } else {
  VAR_12 = VAR_3;
 }

 VAR_9->opp->funcs->opp_set_disp_pattern_generator(
   VAR_9->opp,
   VAR_12,
   VAR_10->timing.display_color_depth,
   &VAR_8,
   VAR_15,
   VAR_16);

 for (VAR_13 = VAR_6->next_odm_pipe; VAR_13; VAR_13 = VAR_13->next_odm_pipe) {
  VAR_13->stream_res.opp->funcs->opp_set_disp_pattern_generator(
    VAR_13->stream_res.opp,
    VAR_5->debug.visual_confirm != VAR_4 && VAR_7 ?
      VAR_0 : VAR_12,
    VAR_10->timing.display_color_depth,
    &VAR_8,
    VAR_15,
    VAR_16);
 }

 if (!VAR_7)
  if (VAR_9->abm) {
   VAR_9->abm->funcs->set_pipe(VAR_9->abm, VAR_9->tg->inst + 1);
   VAR_9->abm->funcs->set_abm_level(VAR_9->abm, VAR_10->abm_level);
  }
}
