
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_pool {int pipe_count; TYPE_3__** dpps; int * opps; int * transforms; int * ipps; int * hubps; int * mis; int * timing_generators; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_5__ {int mpcc_inst; TYPE_3__* dpp; int xfm; int ipp; int hubp; int mi; } ;
struct TYPE_4__ {int opp; int tg; } ;
struct pipe_ctx {int pipe_idx; struct dc_stream_state* stream; TYPE_2__ plane_res; TYPE_1__ stream_res; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_6__ {int inst; } ;



__attribute__((used)) static int FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct dc_stream_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->pipe_count; VAR_3++) {
  if (!VAR_0->pipe_ctx[VAR_3].stream) {
   struct pipe_ctx *VAR_4 = &VAR_0->pipe_ctx[VAR_3];

   VAR_4->stream_res.tg = VAR_1->timing_generators[VAR_3];
   VAR_4->plane_res.mi = VAR_1->mis[VAR_3];
   VAR_4->plane_res.hubp = VAR_1->hubps[VAR_3];
   VAR_4->plane_res.ipp = VAR_1->ipps[VAR_3];
   VAR_4->plane_res.xfm = VAR_1->transforms[VAR_3];
   VAR_4->plane_res.dpp = VAR_1->dpps[VAR_3];
   VAR_4->stream_res.opp = VAR_1->opps[VAR_3];
   if (VAR_1->dpps[VAR_3])
    VAR_4->plane_res.mpcc_inst = VAR_1->dpps[VAR_3]->inst;
   VAR_4->pipe_idx = VAR_3;


   VAR_4->stream = VAR_2;
   return VAR_3;
  }
 }
 return -1;
}
