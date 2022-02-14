
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {TYPE_4__* funcs; } ;
struct TYPE_7__ {struct timing_generator* tg; } ;
struct pipe_ctx {TYPE_3__ stream_res; struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc {TYPE_2__* current_state; } ;
struct TYPE_8__ {int (* get_crc ) (struct timing_generator*,int *,int *,int *) ;} ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_6__ {TYPE_1__ res_ctx; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct timing_generator*,int *,int *,int *) ;

bool FUNC_2(struct dc *VAR_1, struct dc_stream_state *VAR_2,
         uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 int VAR_6;
 struct pipe_ctx *VAR_7;
 struct timing_generator *VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_6];
  if (VAR_7->stream == VAR_2)
   break;
 }

 if (VAR_6 == VAR_0)
  return 0;

 VAR_8 = VAR_7->stream_res.tg;

 if (VAR_8->funcs->get_crc)
  return VAR_8->funcs->get_crc(VAR_8, VAR_3, VAR_4, VAR_5);
 FUNC_0("CRC capture not supported.");
 return 0;
}
