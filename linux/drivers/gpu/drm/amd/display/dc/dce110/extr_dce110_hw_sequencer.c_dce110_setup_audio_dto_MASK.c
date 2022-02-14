
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* audio; } ;
struct pipe_ctx {TYPE_5__* stream; TYPE_4__ stream_res; scalar_t__ top_pipe; } ;
struct TYPE_9__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct dc {TYPE_1__* res_pool; } ;
struct audio_output {int pll_info; int crtc_info; } ;
struct TYPE_13__ {TYPE_3__* funcs; } ;
struct TYPE_12__ {scalar_t__ signal; } ;
struct TYPE_10__ {int (* wall_dto_setup ) (TYPE_6__*,scalar_t__,int *,int *) ;} ;
struct TYPE_8__ {int pipe_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dc_state*,struct pipe_ctx*,struct audio_output*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_6__*,scalar_t__,int *,int *) ;
 int FUNC_3 (TYPE_6__*,scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_4(
  struct dc *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
  struct pipe_ctx *VAR_4 = &VAR_2->res_ctx.pipe_ctx[VAR_3];

  if (VAR_4->stream == ((void*)0))
   continue;

  if (VAR_4->top_pipe)
   continue;

  if (VAR_4->stream->signal != VAR_0)
   continue;

  if (VAR_4->stream_res.audio != ((void*)0)) {
   struct audio_output VAR_5;

   FUNC_0(VAR_2, VAR_4, &VAR_5);

   VAR_4->stream_res.audio->funcs->wall_dto_setup(
    VAR_4->stream_res.audio,
    VAR_4->stream->signal,
    &VAR_5.crtc_info,
    &VAR_5.pll_info);
   break;
  }
 }


 if (VAR_3 == VAR_1->res_pool->pipe_count) {
  for (VAR_3 = 0; VAR_3 < VAR_1->res_pool->pipe_count; VAR_3++) {
   struct pipe_ctx *VAR_6 = &VAR_2->res_ctx.pipe_ctx[VAR_3];

   if (VAR_6->stream == ((void*)0))
    continue;

   if (VAR_6->top_pipe)
    continue;

   if (!FUNC_1(VAR_6->stream->signal))
    continue;

   if (VAR_6->stream_res.audio != ((void*)0)) {
    struct audio_output VAR_7;

    FUNC_0(VAR_2, VAR_6, &VAR_7);

    VAR_6->stream_res.audio->funcs->wall_dto_setup(
     VAR_6->stream_res.audio,
     VAR_6->stream->signal,
     &VAR_7.crtc_info,
     &VAR_7.pll_info);
    break;
   }
  }
 }
}
