
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_ctx {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {int res_ctx; } ;
struct dc {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_ctx*) ;
 int FUNC_1 (struct pipe_ctx*) ;
 struct pipe_ctx* FUNC_2 (int *,struct dc_stream_state*) ;

__attribute__((used)) static enum dc_status FUNC_3(
  const struct dc *VAR_2,
  struct dc_state *VAR_3,
  struct dc_stream_state *VAR_4)
{
 struct pipe_ctx *VAR_5 = FUNC_2(&VAR_3->res_ctx, VAR_4);

 if (!VAR_5)
  return VAR_0;

 FUNC_0(VAR_5);

 FUNC_1(VAR_5);

 return VAR_1;
}
