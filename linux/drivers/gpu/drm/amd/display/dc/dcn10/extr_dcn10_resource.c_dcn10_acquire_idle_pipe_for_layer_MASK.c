
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_pool {TYPE_3__** dpps; int * ipps; int * hubps; } ;
struct resource_context {int dummy; } ;
struct TYPE_5__ {int mpcc_inst; TYPE_3__* dpp; int ipp; int hubp; } ;
struct TYPE_4__ {int opp; int abm; int tg; } ;
struct pipe_ctx {size_t pipe_idx; TYPE_2__ plane_res; TYPE_1__ stream_res; int stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {struct resource_context res_ctx; } ;
struct TYPE_6__ {int inst; } ;


 int FUNC_0 (int ) ;
 struct pipe_ctx* FUNC_1 (struct resource_context*,struct resource_pool const*,struct pipe_ctx*) ;
 struct pipe_ctx* FUNC_2 (struct resource_context*,struct dc_stream_state*) ;

__attribute__((used)) static struct pipe_ctx *FUNC_3(
  struct dc_state *VAR_0,
  const struct resource_pool *VAR_1,
  struct dc_stream_state *VAR_2)
{
 struct resource_context *VAR_3 = &VAR_0->res_ctx;
 struct pipe_ctx *VAR_4 = FUNC_2(VAR_3, VAR_2);
 struct pipe_ctx *VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4);

 if (!VAR_4) {
  FUNC_0(0);
  return ((void*)0);
 }

 if (!VAR_5)
  return ((void*)0);

 VAR_5->stream = VAR_4->stream;
 VAR_5->stream_res.tg = VAR_4->stream_res.tg;
 VAR_5->stream_res.abm = VAR_4->stream_res.abm;
 VAR_5->stream_res.opp = VAR_4->stream_res.opp;

 VAR_5->plane_res.hubp = VAR_1->hubps[VAR_5->pipe_idx];
 VAR_5->plane_res.ipp = VAR_1->ipps[VAR_5->pipe_idx];
 VAR_5->plane_res.dpp = VAR_1->dpps[VAR_5->pipe_idx];
 VAR_5->plane_res.mpcc_inst = VAR_1->dpps[VAR_5->pipe_idx]->inst;

 return VAR_5;
}
