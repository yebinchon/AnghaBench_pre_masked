
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_17__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_30__ {TYPE_13__* mi; } ;
struct TYPE_28__ {TYPE_14__* tg; TYPE_12__* audio; } ;
struct pipe_ctx {TYPE_10__* stream; TYPE_6__ plane_res; TYPE_4__ stream_res; struct clock_source* clock_source; scalar_t__ top_pipe; } ;
struct TYPE_24__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_17__ res_ctx; } ;
struct TYPE_33__ {int (* disable_plane ) (struct dc*,struct pipe_ctx*) ;} ;
struct TYPE_26__ {int dynamic_audio; } ;
struct dc {TYPE_9__ hwss; int res_pool; TYPE_7__* current_state; TYPE_2__ caps; } ;
struct clock_source {TYPE_8__* funcs; } ;
struct TYPE_32__ {int (* cs_power_down ) (struct clock_source*) ;} ;
struct TYPE_20__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_31__ {int stream_count; TYPE_11__ res_ctx; } ;
struct TYPE_29__ {int (* free_mem_input ) (TYPE_13__*,int ) ;} ;
struct TYPE_27__ {int (* disable_crtc ) (TYPE_14__*) ;int (* set_blank ) (TYPE_14__*,int) ;} ;
struct TYPE_25__ {int (* az_disable ) (TYPE_12__*) ;} ;
struct TYPE_23__ {TYPE_3__* funcs; } ;
struct TYPE_22__ {TYPE_5__* funcs; } ;
struct TYPE_21__ {TYPE_1__* funcs; } ;
struct TYPE_19__ {int dpms_off; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct pipe_ctx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_14__*) ;
 scalar_t__ FUNC_4 (struct pipe_ctx*,struct pipe_ctx*) ;
 scalar_t__ FUNC_5 (TYPE_17__*,int ,struct clock_source*) ;
 int FUNC_6 (TYPE_12__*) ;
 int FUNC_7 (TYPE_14__*,int) ;
 int FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (TYPE_13__*,int ) ;
 int FUNC_10 (struct clock_source*) ;
 int FUNC_11 (struct dc*,struct pipe_ctx*) ;
 int FUNC_12 (TYPE_11__*,int ,TYPE_12__*,int) ;

__attribute__((used)) static void FUNC_13(
  struct dc *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3;



 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct pipe_ctx *VAR_4 =
   &VAR_1->current_state->res_ctx.pipe_ctx[VAR_3];
  struct pipe_ctx *VAR_5 = &VAR_2->res_ctx.pipe_ctx[VAR_3];







  if (!VAR_4->stream || VAR_4->top_pipe)
   continue;

  if (!VAR_5->stream ||
    FUNC_4(VAR_4, VAR_5)) {
   struct clock_source *VAR_6 = VAR_4->clock_source;




   if (!VAR_5->stream || !VAR_5->stream->dpms_off) {
    FUNC_1(VAR_4);


    if (VAR_4->stream_res.audio) {

     VAR_4->stream_res.audio->funcs->
       az_disable(VAR_4->stream_res.audio);


     if (VAR_1->caps.dynamic_audio == 1) {


      FUNC_12(&VAR_1->current_state->res_ctx, VAR_1->res_pool,
        VAR_4->stream_res.audio, 0);
      VAR_4->stream_res.audio = ((void*)0);
     }
    }
   }

   VAR_4->stream_res.tg->funcs->set_blank(VAR_4->stream_res.tg, 1);
   if (!FUNC_3(VAR_4->stream_res.tg)) {
    FUNC_2("DC: failed to blank crtc!\n");
    FUNC_0();
   }
   VAR_4->stream_res.tg->funcs->disable_crtc(VAR_4->stream_res.tg);
   VAR_4->plane_res.mi->funcs->free_mem_input(
     VAR_4->plane_res.mi, VAR_1->current_state->stream_count);

   if (VAR_6 && 0 == FUNC_5(&VAR_2->res_ctx,
          VAR_1->res_pool,
          VAR_6))
    VAR_6->funcs->cs_power_down(VAR_6);

   VAR_1->hwss.disable_plane(VAR_1, VAR_4);

   VAR_4->stream = ((void*)0);
  }
 }
}
