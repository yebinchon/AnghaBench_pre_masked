
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timing_generator {TYPE_5__* funcs; } ;
struct TYPE_9__ {struct timing_generator* tg; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_8__ {int v_addressable; int h_addressable; } ;
struct dc_stream_state {TYPE_3__ timing; } ;
struct dc {TYPE_2__* current_state; } ;
struct crc_params {int continuous_mode; int enable; int selection; int windowb_y_end; int windowb_x_end; scalar_t__ windowb_y_start; scalar_t__ windowb_x_start; int windowa_y_end; int windowa_x_end; scalar_t__ windowa_y_start; scalar_t__ windowa_x_start; } ;
struct TYPE_10__ {int (* configure_crc ) (struct timing_generator*,struct crc_params*) ;} ;
struct TYPE_6__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_7__ {TYPE_1__ res_ctx; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct timing_generator*,struct crc_params*) ;

bool FUNC_2(struct dc *VAR_2, struct dc_stream_state *VAR_3,
        bool VAR_4, bool VAR_5)
{
 int VAR_6;
 struct pipe_ctx *VAR_7;
 struct crc_params VAR_8;
 struct timing_generator *VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = &VAR_2->current_state->res_ctx.pipe_ctx[VAR_6];
  if (VAR_7->stream == VAR_3)
   break;
 }

 if (VAR_6 == VAR_0)
  return 0;


 VAR_8.windowa_x_start = 0;
 VAR_8.windowa_y_start = 0;
 VAR_8.windowa_x_end = VAR_7->stream->timing.h_addressable;
 VAR_8.windowa_y_end = VAR_7->stream->timing.v_addressable;
 VAR_8.windowb_x_start = 0;
 VAR_8.windowb_y_start = 0;
 VAR_8.windowb_x_end = VAR_7->stream->timing.h_addressable;
 VAR_8.windowb_y_end = VAR_7->stream->timing.v_addressable;


 VAR_8.selection = VAR_1;
 VAR_8.continuous_mode = VAR_5;
 VAR_8.enable = VAR_4;

 VAR_9 = VAR_7->stream_res.tg;


 if (VAR_9->funcs->configure_crc)
  return VAR_9->funcs->configure_crc(VAR_9, &VAR_8);
 FUNC_0("CRC capture not supported.");
 return 0;
}
