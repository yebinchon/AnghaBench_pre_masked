
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_pool {int * dp_clock_source; } ;
struct pipe_ctx {int * clock_source; TYPE_1__* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int res_ctx; } ;
struct TYPE_4__ {int disable_disp_pll_sharing; } ;
struct dc {TYPE_2__ config; struct resource_pool* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_3__ {scalar_t__ signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,struct resource_pool const*) ;
 int * FUNC_2 (int *,struct pipe_ctx*) ;
 struct pipe_ctx* FUNC_3 (int *,struct dc_stream_state*) ;
 int FUNC_4 (int *,struct resource_pool const*,int *) ;

enum dc_status FUNC_5(
  const struct dc *VAR_4,
  struct dc_state *VAR_5,
  struct dc_stream_state *VAR_6)
{

 const struct resource_pool *VAR_7 = VAR_4->res_pool;
 struct pipe_ctx *VAR_8 = FUNC_3(
    &VAR_5->res_ctx, VAR_6);

 if (!VAR_8)
  return VAR_0;

 if (FUNC_0(VAR_8->stream->signal)
  || VAR_8->stream->signal == VAR_3)
  VAR_8->clock_source = VAR_7->dp_clock_source;
 else {
  VAR_8->clock_source = ((void*)0);

  if (!VAR_4->config.disable_disp_pll_sharing)
   VAR_8->clock_source = FUNC_2(
    &VAR_5->res_ctx,
    VAR_8);

  if (VAR_8->clock_source == ((void*)0))
   VAR_8->clock_source =
    FUNC_1(
     &VAR_5->res_ctx,
     VAR_7);
 }

 if (VAR_8->clock_source == ((void*)0))
  return VAR_1;

 FUNC_4(
  &VAR_5->res_ctx, VAR_7,
  VAR_8->clock_source);

 return VAR_2;
}
