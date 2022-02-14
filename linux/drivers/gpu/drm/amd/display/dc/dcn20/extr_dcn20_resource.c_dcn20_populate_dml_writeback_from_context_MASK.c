
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource_context {TYPE_3__* pipe_ctx; } ;
struct TYPE_15__ {int v_taps_c; int h_taps_c; } ;
struct TYPE_14__ {int crop_width; int crop_height; } ;
struct TYPE_16__ {scalar_t__ out_format; scalar_t__ output_depth; TYPE_5__ scaler_taps; int dest_height; int dest_width; TYPE_4__ cnv_params; } ;
struct dc_writeback_info {int wb_enabled; TYPE_6__ dwb_params; } ;
struct dc {TYPE_1__* res_pool; } ;
struct TYPE_17__ {int wb_htaps_luma; int wb_vtaps_luma; double wb_hratio; double wb_vratio; int wb_pixel_format; int wb_vtaps_chroma; int wb_htaps_chroma; int wb_dst_height; int wb_dst_width; int wb_src_width; int wb_src_height; } ;
struct TYPE_18__ {int wb_enable; TYPE_7__ wb; int num_active_wb; } ;
struct TYPE_19__ {TYPE_8__ dout; } ;
typedef TYPE_9__ display_e2e_pipe_params_st ;
struct TYPE_13__ {TYPE_2__* stream; } ;
struct TYPE_12__ {struct dc_writeback_info* writeback_info; } ;
struct TYPE_11__ {int pipe_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0(
  struct dc *VAR_5, struct resource_context *VAR_6, display_e2e_pipe_params_st *VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_9 = 0, VAR_8 = 0; VAR_9 < VAR_5->res_pool->pipe_count; VAR_9++) {
  struct dc_writeback_info *VAR_10 = &VAR_6->pipe_ctx[VAR_9].stream->writeback_info[0];

  if (!VAR_6->pipe_ctx[VAR_9].stream)
   continue;


  VAR_7[VAR_8].dout.wb_enable = (VAR_10->wb_enabled == 1) ? 1 : 0;
  VAR_7[VAR_8].dout.num_active_wb++;
  VAR_7[VAR_8].dout.wb.wb_src_height = VAR_10->dwb_params.cnv_params.crop_height;
  VAR_7[VAR_8].dout.wb.wb_src_width = VAR_10->dwb_params.cnv_params.crop_width;
  VAR_7[VAR_8].dout.wb.wb_dst_width = VAR_10->dwb_params.dest_width;
  VAR_7[VAR_8].dout.wb.wb_dst_height = VAR_10->dwb_params.dest_height;
  VAR_7[VAR_8].dout.wb.wb_htaps_luma = 1;
  VAR_7[VAR_8].dout.wb.wb_vtaps_luma = 1;
  VAR_7[VAR_8].dout.wb.wb_htaps_chroma = VAR_10->dwb_params.scaler_taps.h_taps_c;
  VAR_7[VAR_8].dout.wb.wb_vtaps_chroma = VAR_10->dwb_params.scaler_taps.v_taps_c;
  VAR_7[VAR_8].dout.wb.wb_hratio = 1.0;
  VAR_7[VAR_8].dout.wb.wb_vratio = 1.0;
  if (VAR_10->dwb_params.out_format == VAR_4) {
   if (VAR_10->dwb_params.output_depth == VAR_0)
    VAR_7[VAR_8].dout.wb.wb_pixel_format = VAR_2;
   else
    VAR_7[VAR_8].dout.wb.wb_pixel_format = VAR_1;
  } else
   VAR_7[VAR_8].dout.wb.wb_pixel_format = VAR_3;

  VAR_8++;
 }

}
