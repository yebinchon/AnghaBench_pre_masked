
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* tg; TYPE_7__* opp; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_14__ {scalar_t__ timing_3d_format; } ;
struct dc_stream_state {TYPE_6__ timing; } ;
struct dc {TYPE_1__* ctx; } ;
struct crtc_stereo_flags {int PROGRAM_STEREO; int member_0; } ;
struct TYPE_15__ {TYPE_2__* funcs; } ;
struct TYPE_13__ {TYPE_3__* funcs; } ;
struct TYPE_11__ {int (* program_stereo ) (TYPE_5__*,TYPE_6__*,struct crtc_stereo_flags*) ;} ;
struct TYPE_10__ {int (* opp_program_stereo ) (TYPE_7__*,int,TYPE_6__*) ;} ;
struct TYPE_9__ {int gpio_service; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct dc_stream_state*,struct crtc_stereo_flags*) ;
 int FUNC_2 (TYPE_7__*,int,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,struct crtc_stereo_flags*) ;

__attribute__((used)) static void FUNC_4(struct pipe_ctx *VAR_1, struct dc *VAR_2)
{
 struct crtc_stereo_flags VAR_3 = { 0 };
 struct dc_stream_state *VAR_4 = VAR_1->stream;

 FUNC_1(VAR_4, &VAR_3);

 if (VAR_4->timing.timing_3d_format == VAR_0) {
  if (!FUNC_0(1, VAR_2->ctx->gpio_service))
   FUNC_0(0, VAR_2->ctx->gpio_service);
 } else {
  FUNC_0(0, VAR_2->ctx->gpio_service);
 }

 VAR_1->stream_res.opp->funcs->opp_program_stereo(
  VAR_1->stream_res.opp,
  VAR_3.PROGRAM_STEREO == 1 ? 1:0,
  &VAR_4->timing);

 VAR_1->stream_res.tg->funcs->program_stereo(
  VAR_1->stream_res.tg,
  &VAR_4->timing,
  &VAR_3);

 return;
}
