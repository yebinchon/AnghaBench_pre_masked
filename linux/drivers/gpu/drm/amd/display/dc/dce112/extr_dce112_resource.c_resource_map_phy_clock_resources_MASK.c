
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {int * clock_source; TYPE_1__* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int res_ctx; } ;
struct dc {TYPE_2__* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_5__ {int * dp_clock_source; } ;
struct TYPE_4__ {int signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,TYPE_2__*,struct dc_stream_state*) ;
 struct pipe_ctx* FUNC_3 (int *,struct dc_stream_state*) ;
 int FUNC_4 (int *,TYPE_2__*,int *) ;

enum dc_status FUNC_5(
  const struct dc *VAR_3,
  struct dc_state *VAR_4,
  struct dc_stream_state *VAR_5)
{


 struct pipe_ctx *VAR_6 = FUNC_3(
   &VAR_4->res_ctx, VAR_5);

 if (!VAR_6)
  return VAR_0;

 if (FUNC_0(VAR_6->stream->signal)
  || FUNC_1(VAR_6->stream->signal))
  VAR_6->clock_source =
    VAR_3->res_pool->dp_clock_source;
 else
  VAR_6->clock_source = FUNC_2(
   &VAR_4->res_ctx, VAR_3->res_pool,
   VAR_5);

 if (VAR_6->clock_source == ((void*)0))
  return VAR_1;

 FUNC_4(
  &VAR_4->res_ctx,
  VAR_3->res_pool,
  VAR_6->clock_source);

 return VAR_2;
}
