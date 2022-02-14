
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {unsigned int pipe_idx; TYPE_7__* plane_state; TYPE_4__* stream; } ;
struct dc_state {int stream_count; struct resource_context res_ctx; } ;
struct dc {TYPE_2__* res_pool; TYPE_1__* ctx; int fbc_compressor; } ;
struct TYPE_12__ {scalar_t__ array_mode; } ;
struct TYPE_13__ {TYPE_5__ gfx8; } ;
struct TYPE_14__ {TYPE_6__ tiling_info; } ;
struct TYPE_11__ {TYPE_3__* link; } ;
struct TYPE_10__ {scalar_t__ connector_signal; scalar_t__ psr_enabled; } ;
struct TYPE_9__ {unsigned int underlay_pipe_index; size_t pipe_count; } ;
struct TYPE_8__ {int fbc_gpu_addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct dc *VAR_2,
  struct dc_state *VAR_3,
  uint32_t *VAR_4)
{
 uint32_t VAR_5;
 struct pipe_ctx *VAR_6 = ((void*)0);
 struct resource_context *VAR_7 = &VAR_3->res_ctx;
 unsigned int VAR_8 = VAR_2->res_pool->underlay_pipe_index;


 FUNC_0(VAR_2->fbc_compressor);


 if (!VAR_2->ctx->fbc_gpu_addr)
  return 0;


 if (VAR_3->stream_count != 1)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->res_pool->pipe_count; VAR_5++) {
  if (VAR_7->pipe_ctx[VAR_5].stream) {

   VAR_6 = &VAR_7->pipe_ctx[VAR_5];

   if (!VAR_6)
    continue;


   if (VAR_6->pipe_idx != VAR_8) {
    *VAR_4 = VAR_5;
    break;
   }
  }
 }

 if (VAR_5 == VAR_2->res_pool->pipe_count)
  return 0;

 if (!VAR_6->stream->link)
  return 0;


 if (VAR_6->stream->link->connector_signal != VAR_1)
  return 0;


 if (VAR_6->stream->link->psr_enabled)
  return 0;


 if (!VAR_6->plane_state)
  return 0;


 if (VAR_6->plane_state->tiling_info.gfx8.array_mode == VAR_0)
  return 0;

 return 1;
}
