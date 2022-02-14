
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tg_color {int color_g_y; int color_r_cr; int member_0; } ;
struct stream_resource {TYPE_4__* tg; TYPE_5__* abm; } ;
struct pipe_ctx {struct dc_stream_state* stream; struct stream_resource stream_res; } ;
struct TYPE_10__ {scalar_t__ pixel_encoding; } ;
struct dc_stream_state {int output_color_space; int abm_level; TYPE_1__ timing; } ;
struct dc {int dummy; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_14__ {TYPE_2__* funcs; } ;
struct TYPE_13__ {TYPE_3__* funcs; scalar_t__ inst; } ;
struct TYPE_12__ {int (* set_blank ) (TYPE_4__*,int) ;int (* set_blank_color ) (TYPE_4__*,struct tg_color*) ;} ;
struct TYPE_11__ {int (* set_abm_immediate_disable ) (TYPE_5__*) ;int (* set_abm_level ) (TYPE_5__*,int ) ;int (* set_pipe ) (TYPE_5__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dc*,int,struct tg_color*) ;
 int FUNC_1 (TYPE_4__*,struct tg_color*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_7(
  struct dc *VAR_1,
  struct pipe_ctx *VAR_2,
  bool VAR_3)
{
 enum dc_color_space VAR_4;
 struct tg_color VAR_5 = {0};
 struct stream_resource *VAR_6 = &VAR_2->stream_res;
 struct dc_stream_state *VAR_7 = VAR_2->stream;


 VAR_4 = VAR_7->output_color_space;
 FUNC_0(VAR_1, VAR_4, &VAR_5);






 if (VAR_7->timing.pixel_encoding == VAR_0)
  VAR_5.color_r_cr = VAR_5.color_g_y;


 if (VAR_6->tg->funcs->set_blank_color)
  VAR_6->tg->funcs->set_blank_color(
    VAR_6->tg,
    &VAR_5);

 if (!VAR_3) {
  if (VAR_6->tg->funcs->set_blank)
   VAR_6->tg->funcs->set_blank(VAR_6->tg, VAR_3);
  if (VAR_6->abm) {
   VAR_6->abm->funcs->set_pipe(VAR_6->abm, VAR_6->tg->inst + 1);
   VAR_6->abm->funcs->set_abm_level(VAR_6->abm, VAR_7->abm_level);
  }
 } else if (VAR_3) {
  if (VAR_6->abm)
   VAR_6->abm->funcs->set_abm_immediate_disable(VAR_6->abm);
  if (VAR_6->tg->funcs->set_blank)
   VAR_6->tg->funcs->set_blank(VAR_6->tg, VAR_3);
 }
}
