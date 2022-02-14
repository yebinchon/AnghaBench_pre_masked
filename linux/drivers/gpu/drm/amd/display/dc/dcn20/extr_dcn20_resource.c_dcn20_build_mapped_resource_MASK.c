
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
 struct pipe_ctx* FUNC_1 (int *,struct dc_stream_state*) ;

enum dc_status FUNC_2(const struct dc *VAR_2, struct dc_state *VAR_3, struct dc_stream_state *VAR_4)
{
 enum dc_status VAR_5 = VAR_1;
 struct pipe_ctx *VAR_6 = FUNC_1(&VAR_3->res_ctx, VAR_4);
 if (!VAR_6)
  return VAR_0;


 VAR_5 = FUNC_0(VAR_6);

 return VAR_5;
}
