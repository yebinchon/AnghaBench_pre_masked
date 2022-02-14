
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct mcif_arb_params {int* cli_watermark; int* pstate_watermark; double time_per_pixel; int slice_lines; int arbitration_slice; int max_scaled_time; } ;
struct TYPE_11__ {TYPE_9__* pipe_ctx; } ;
struct TYPE_13__ {struct mcif_arb_params* mcif_wb_arb; } ;
struct TYPE_14__ {TYPE_2__ bw_writeback; } ;
struct TYPE_15__ {TYPE_3__ dcn; } ;
struct TYPE_18__ {int dml; TYPE_4__ bw; } ;
struct dc_state {TYPE_10__ res_ctx; TYPE_7__ bw_ctx; } ;
struct dc {TYPE_1__* res_pool; } ;
typedef enum mmhubbub_wbif_mode { ____Placeholder_mmhubbub_wbif_mode } mmhubbub_wbif_mode ;
typedef int display_e2e_pipe_params_st ;
struct TYPE_20__ {TYPE_8__* stream; } ;
struct TYPE_19__ {double phy_pix_clk; TYPE_6__* writeback_info; } ;
struct TYPE_16__ {scalar_t__ out_format; scalar_t__ output_depth; } ;
struct TYPE_17__ {int wb_enabled; TYPE_5__ dwb_params; } ;
struct TYPE_12__ {int pipe_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (double,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(
  struct dc *VAR_6,
  struct dc_state *VAR_7,
  display_e2e_pipe_params_st *VAR_8,
  int VAR_9)
{
 enum mmhubbub_wbif_mode VAR_10;
 struct mcif_arb_params *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;


 VAR_15 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_6->res_pool->pipe_count; VAR_12++) {

  if (!VAR_7->res_ctx.pipe_ctx[VAR_12].stream)
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (VAR_7->res_ctx.pipe_ctx[VAR_12].stream->writeback_info[VAR_13].wb_enabled == 0)
    continue;


   VAR_11 = &VAR_7->bw_ctx.bw.dcn.bw_writeback.mcif_wb_arb[VAR_15];

   if (VAR_7->res_ctx.pipe_ctx[VAR_12].stream->writeback_info[VAR_13].dwb_params.out_format == VAR_5) {
    if (VAR_7->res_ctx.pipe_ctx[VAR_12].stream->writeback_info[VAR_13].dwb_params.output_depth == VAR_0)
     VAR_10 = VAR_4;
    else
     VAR_10 = VAR_3;
   } else
    VAR_10 = VAR_2;

   for (VAR_14 = 0; VAR_14 < sizeof(VAR_11->cli_watermark)/sizeof(VAR_11->cli_watermark[0]); VAR_14++) {
    VAR_11->cli_watermark[VAR_14] = FUNC_2(&VAR_7->bw_ctx.dml, VAR_8, VAR_9) * 1000;
    VAR_11->pstate_watermark[VAR_14] = FUNC_1(&VAR_7->bw_ctx.dml, VAR_8, VAR_9) * 1000;
   }
   VAR_11->time_per_pixel = 16.0 / VAR_7->res_ctx.pipe_ctx[VAR_12].stream->phy_pix_clk;
   VAR_11->slice_lines = 32;
   VAR_11->arbitration_slice = 2;
   VAR_11->max_scaled_time = FUNC_0(VAR_11->time_per_pixel,
    VAR_10,
    VAR_11->cli_watermark[0]);

   VAR_15++;

   if (VAR_15 >= VAR_1)
    return;
  }
  if (VAR_15 >= VAR_1)
   return;
 }
}
