
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int requested_pix_clk_100hz; int requested_sym_clk; } ;
struct TYPE_8__ {TYPE_3__ pix_clk_params; } ;
struct pipe_ctx {TYPE_4__ stream_res; TYPE_2__* stream; scalar_t__ top_pipe; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct TYPE_6__ {int signal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

uint32_t FUNC_1(struct dc_state *VAR_1)
{
 uint32_t VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct pipe_ctx *VAR_4 = &VAR_1->res_ctx.pipe_ctx[VAR_3];

  if (VAR_4->stream == ((void*)0))
   continue;


  if (VAR_4->top_pipe)
   continue;

  if (VAR_4->stream_res.pix_clk_params.requested_pix_clk_100hz / 10 > VAR_2)
   VAR_2 = VAR_4->stream_res.pix_clk_params.requested_pix_clk_100hz / 10;




  if (FUNC_0(VAR_4->stream->signal) &&
    VAR_4->stream_res.pix_clk_params.requested_sym_clk > VAR_2)
   VAR_2 = VAR_4->stream_res.pix_clk_params.requested_sym_clk;
 }

 return VAR_2;
}
