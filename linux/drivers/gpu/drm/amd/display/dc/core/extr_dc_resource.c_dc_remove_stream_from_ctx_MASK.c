
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ audio; int stream_enc; } ;
struct pipe_ctx {struct pipe_ctx* next_odm_pipe; int clock_source; TYPE_1__ stream_res; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int stream_count; struct pipe_ctx* stream_status; struct dc_stream_state** streams; int res_ctx; } ;
struct dc_context {int dummy; } ;
struct dc {TYPE_3__* res_pool; struct dc_context* ctx; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_8__ {TYPE_2__* funcs; } ;
struct TYPE_7__ {int (* remove_stream_from_ctx ) (struct dc*,struct dc_state*,struct dc_stream_state*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct dc_stream_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dc_stream_state*) ;
 int FUNC_3 (struct pipe_ctx*,int ,int) ;
 struct pipe_ctx* FUNC_4 (int *,struct dc_stream_state*) ;
 int FUNC_5 (int *,TYPE_3__*,int ) ;
 int FUNC_6 (struct dc*,struct dc_state*,struct dc_stream_state*) ;
 int FUNC_7 (int *,TYPE_3__*,scalar_t__,int) ;
 int FUNC_8 (int *,TYPE_3__*,int ,int) ;

enum dc_status FUNC_9(
   struct dc *VAR_2,
   struct dc_state *VAR_3,
   struct dc_stream_state *VAR_4)
{
 int VAR_5;
 struct dc_context *VAR_6 = VAR_2->ctx;
 struct pipe_ctx *VAR_7 = FUNC_4(&VAR_3->res_ctx, VAR_4);
 struct pipe_ctx *VAR_8;

 if (!VAR_7) {
  FUNC_1("Pipe not found for stream %p !\n", VAR_4);
  return VAR_0;
 }

 VAR_8 = VAR_7->next_odm_pipe;


 FUNC_0(VAR_7->stream_res.stream_enc);
 FUNC_8(
   &VAR_3->res_ctx,
    VAR_2->res_pool,
   VAR_7->stream_res.stream_enc,
   0);

 if (VAR_7->stream_res.audio)
  FUNC_7(
   &VAR_3->res_ctx,
   VAR_2->res_pool,
   VAR_7->stream_res.audio,
   0);

 FUNC_5(&VAR_3->res_ctx,
       VAR_2->res_pool,
       VAR_7->clock_source);

 if (VAR_2->res_pool->funcs->remove_stream_from_ctx)
  VAR_2->res_pool->funcs->remove_stream_from_ctx(VAR_2, VAR_3, VAR_4);

 while (VAR_8) {
  struct pipe_ctx *VAR_9 = VAR_8->next_odm_pipe;

  FUNC_3(VAR_8, 0, sizeof(*VAR_8));
  VAR_8 = VAR_9;
 }
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));

 for (VAR_5 = 0; VAR_5 < VAR_3->stream_count; VAR_5++)
  if (VAR_3->streams[VAR_5] == VAR_4)
   break;

 if (VAR_3->streams[VAR_5] != VAR_4) {
  FUNC_1("Context doesn't have stream %p !\n", VAR_4);
  return VAR_0;
 }

 FUNC_2(VAR_3->streams[VAR_5]);
 VAR_3->stream_count--;


 for (; VAR_5 < VAR_3->stream_count; VAR_5++) {
  VAR_3->streams[VAR_5] = VAR_3->streams[VAR_5 + 1];
  VAR_3->stream_status[VAR_5] = VAR_3->stream_status[VAR_5 + 1];
 }

 VAR_3->streams[VAR_3->stream_count] = ((void*)0);
 FUNC_3(
   &VAR_3->stream_status[VAR_3->stream_count],
   0,
   sizeof(VAR_3->stream_status[0]));

 return VAR_1;
}
