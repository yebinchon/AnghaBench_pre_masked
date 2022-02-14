
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_13__ {TYPE_4__* tg; } ;
struct pipe_ctx {TYPE_5__ stream_res; TYPE_3__* stream; } ;
struct TYPE_9__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct dc {TYPE_7__* ctx; struct compressor* fbc_compressor; } ;
struct TYPE_14__ {int quad_part; } ;
struct compressor {TYPE_8__* funcs; TYPE_6__ compr_surface_address; } ;
struct compr_addr_and_pitch_params {int inst; int source_view_height; int source_view_width; int member_2; int member_1; int member_0; } ;
struct TYPE_16__ {int (* enable_fbc ) (struct compressor*,struct compr_addr_and_pitch_params*) ;int (* set_fbc_invalidation_triggers ) (struct compressor*,int) ;int (* surface_address_and_pitch ) (struct compressor*,struct compr_addr_and_pitch_params*) ;} ;
struct TYPE_15__ {int fbc_gpu_addr; } ;
struct TYPE_12__ {int inst; } ;
struct TYPE_10__ {int v_addressable; int h_addressable; } ;
struct TYPE_11__ {TYPE_2__ timing; } ;


 scalar_t__ FUNC_0 (struct dc*,struct dc_state*,size_t*) ;
 int FUNC_1 (struct compressor*,struct compr_addr_and_pitch_params*) ;
 int FUNC_2 (struct compressor*,int) ;
 int FUNC_3 (struct compressor*,struct compr_addr_and_pitch_params*) ;

__attribute__((used)) static void FUNC_4(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 uint32_t VAR_2 = 0;

 if (FUNC_0(VAR_0, VAR_1, &VAR_2)) {

  struct compr_addr_and_pitch_params VAR_3 = {0, 0, 0};
  struct compressor *VAR_4 = VAR_0->fbc_compressor;
  struct pipe_ctx *VAR_5 = &VAR_1->res_ctx.pipe_ctx[VAR_2];

  VAR_3.source_view_width = VAR_5->stream->timing.h_addressable;
  VAR_3.source_view_height = VAR_5->stream->timing.v_addressable;
  VAR_3.inst = VAR_5->stream_res.tg->inst;
  VAR_4->compr_surface_address.quad_part = VAR_0->ctx->fbc_gpu_addr;

  VAR_4->funcs->surface_address_and_pitch(VAR_4, &VAR_3);
  VAR_4->funcs->set_fbc_invalidation_triggers(VAR_4, 1);

  VAR_4->funcs->enable_fbc(VAR_4, &VAR_3);
 }
}
