
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_pool {TYPE_2__** dpps; int * transforms; int * ipps; int * hubps; int * mis; } ;
struct resource_context {int dummy; } ;
struct TYPE_6__ {int * dsc; } ;
struct TYPE_4__ {int mpcc_inst; TYPE_2__* dpp; int xfm; int ipp; int hubp; int mi; } ;
struct pipe_ctx {int pipe_idx; int plane_state; struct pipe_ctx* top_pipe; struct pipe_ctx* bottom_pipe; TYPE_3__ stream_res; TYPE_1__ plane_res; } ;
struct TYPE_5__ {int inst; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pipe_ctx*) ;

__attribute__((used)) static void FUNC_2(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct pipe_ctx *VAR_2,
  struct pipe_ctx *VAR_3)
{
 int VAR_4 = VAR_3->pipe_idx;
 struct pipe_ctx *VAR_5 = VAR_3->bottom_pipe;

 *VAR_3 = *VAR_2;
 VAR_3->bottom_pipe = VAR_5;

 VAR_3->pipe_idx = VAR_4;
 VAR_3->plane_res.mi = VAR_1->mis[VAR_3->pipe_idx];
 VAR_3->plane_res.hubp = VAR_1->hubps[VAR_3->pipe_idx];
 VAR_3->plane_res.ipp = VAR_1->ipps[VAR_3->pipe_idx];
 VAR_3->plane_res.xfm = VAR_1->transforms[VAR_3->pipe_idx];
 VAR_3->plane_res.dpp = VAR_1->dpps[VAR_3->pipe_idx];
 VAR_3->plane_res.mpcc_inst = VAR_1->dpps[VAR_3->pipe_idx]->inst;



 if (VAR_2->bottom_pipe && VAR_2->bottom_pipe != VAR_3) {
  FUNC_0(!VAR_3->bottom_pipe);
  VAR_3->bottom_pipe = VAR_2->bottom_pipe;
  VAR_3->bottom_pipe->top_pipe = VAR_3;
 }
 VAR_2->bottom_pipe = VAR_3;
 VAR_3->top_pipe = VAR_2;

 FUNC_0(VAR_2->plane_state);
 FUNC_1(VAR_2);
 FUNC_1(VAR_3);
}
