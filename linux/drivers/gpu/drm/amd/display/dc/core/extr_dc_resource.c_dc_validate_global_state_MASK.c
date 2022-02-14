
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pipe_ctx {int clock_source; struct dc_stream_state* stream; TYPE_4__* plane_state; } ;
struct dc_stream_state {int signal; } ;
struct TYPE_13__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {int stream_count; TYPE_5__ res_ctx; struct dc_stream_state** streams; } ;
struct dc {TYPE_6__* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_14__ {int pipe_count; TYPE_3__* funcs; int dp_clock_source; } ;
struct TYPE_9__ {scalar_t__ swizzle; } ;
struct TYPE_10__ {TYPE_1__ gfx9; } ;
struct TYPE_12__ {TYPE_2__ tiling_info; } ;
struct TYPE_11__ {int (* validate_global ) (struct dc*,struct dc_state*) ;int (* get_default_swizzle_mode ) (TYPE_4__*) ;int (* validate_bandwidth ) (struct dc*,struct dc_state*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dc_stream_state*,struct dc_state*) ;
 int FUNC_2 (struct dc*,struct dc_state*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_5 (struct dc*,struct dc_state*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct dc*,struct dc_state*,int) ;

enum dc_status FUNC_8(
  struct dc *VAR_4,
  struct dc_state *VAR_5,
  bool VAR_6)
{
 enum dc_status VAR_7 = VAR_0;
 int VAR_8, VAR_9;

 if (!VAR_5)
  return VAR_0;

 if (VAR_4->res_pool->funcs->validate_global) {
  VAR_7 = VAR_4->res_pool->funcs->validate_global(VAR_4, VAR_5);
  if (VAR_7 != VAR_2)
   return VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->stream_count; VAR_8++) {
  struct dc_stream_state *VAR_10 = VAR_5->streams[VAR_8];

  for (VAR_9 = 0; VAR_9 < VAR_4->res_pool->pipe_count; VAR_9++) {
   struct pipe_ctx *VAR_11 = &VAR_5->res_ctx.pipe_ctx[VAR_9];

   if (VAR_11->stream != VAR_10)
    continue;

   if (VAR_4->res_pool->funcs->get_default_swizzle_mode &&
     VAR_11->plane_state &&
     VAR_11->plane_state->tiling_info.gfx9.swizzle == VAR_3) {
    VAR_7 = VAR_4->res_pool->funcs->get_default_swizzle_mode(VAR_11->plane_state);
    if (VAR_7 != VAR_2)
     return VAR_7;
   }





   if (FUNC_0(VAR_11->stream->signal) &&
    !FUNC_1(VAR_10, VAR_5)) {

    FUNC_4(
      &VAR_5->res_ctx,
      VAR_4->res_pool,
      VAR_11->clock_source);

    VAR_11->clock_source = VAR_4->res_pool->dp_clock_source;
    FUNC_3(
      &VAR_5->res_ctx,
      VAR_4->res_pool,
       VAR_11->clock_source);
   }
  }
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5);

 if (VAR_7 == VAR_2)
  if (!VAR_4->res_pool->funcs->validate_bandwidth(VAR_4, VAR_5, VAR_6))
   VAR_7 = VAR_1;

 return VAR_7;
}
