
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int res_ctx; } ;
struct dc {TYPE_1__* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_2__ {int underlay_pipe_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pipe_ctx*) ;
 int FUNC_1 (struct pipe_ctx*,int ) ;
 int FUNC_2 (struct pipe_ctx*) ;
 struct pipe_ctx* FUNC_3 (int *,struct dc_stream_state*) ;

__attribute__((used)) static enum dc_status FUNC_4(
  const struct dc *VAR_3,
  struct dc_state *VAR_4,
  struct dc_stream_state *VAR_5)
{
 struct pipe_ctx *VAR_6 = FUNC_3(&VAR_4->res_ctx, VAR_5);

 if (!VAR_6)
  return VAR_0;

 if (!FUNC_1(VAR_6,
   VAR_3->res_pool->underlay_pipe_index))
  return VAR_2;

 FUNC_0(VAR_6);



 FUNC_2(VAR_6);

 return VAR_1;
}
