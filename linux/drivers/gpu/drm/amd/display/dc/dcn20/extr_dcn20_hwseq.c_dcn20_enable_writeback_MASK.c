
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


struct timing_generator {TYPE_2__* funcs; } ;
struct mcif_wb {TYPE_8__* funcs; } ;
struct dwbc {TYPE_9__* funcs; } ;
struct TYPE_11__ {int dest_height; } ;
struct dc_writeback_info {size_t dwb_pipe_inst; int wb_enabled; TYPE_10__ dwb_params; int mcif_buf_params; } ;
struct dc_stream_status {size_t primary_otg_inst; } ;
struct dc {TYPE_7__* current_state; TYPE_1__* res_pool; } ;
struct TYPE_20__ {int (* enable ) (struct dwbc*,TYPE_10__*) ;} ;
struct TYPE_19__ {int (* enable_mcif ) (struct mcif_wb*) ;int (* config_mcif_arb ) (struct mcif_wb*,int *) ;int (* config_mcif_buf ) (struct mcif_wb*,int *,int ) ;} ;
struct TYPE_14__ {int * mcif_wb_arb; } ;
struct TYPE_15__ {TYPE_3__ bw_writeback; } ;
struct TYPE_16__ {TYPE_4__ dcn; } ;
struct TYPE_17__ {TYPE_5__ bw; } ;
struct TYPE_18__ {TYPE_6__ bw_ctx; } ;
struct TYPE_13__ {int (* set_dwb_source ) (struct timing_generator*,size_t) ;} ;
struct TYPE_12__ {struct timing_generator** timing_generators; struct mcif_wb** mcif_wb; struct dwbc** dwbc; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct timing_generator*,size_t) ;
 int FUNC_2 (struct mcif_wb*,int *,int ) ;
 int FUNC_3 (struct mcif_wb*,int *) ;
 int FUNC_4 (struct mcif_wb*) ;
 int FUNC_5 (struct dwbc*,TYPE_10__*) ;

__attribute__((used)) static void FUNC_6(
  struct dc *VAR_2,
  const struct dc_stream_status *VAR_3,
  struct dc_writeback_info *VAR_4)
{
 struct dwbc *VAR_5;
 struct mcif_wb *VAR_6;
 struct timing_generator *VAR_7;

 FUNC_0(VAR_4->dwb_pipe_inst < VAR_0);
 FUNC_0(VAR_4->wb_enabled);
 VAR_5 = VAR_2->res_pool->dwbc[VAR_4->dwb_pipe_inst];
 VAR_6 = VAR_2->res_pool->mcif_wb[VAR_4->dwb_pipe_inst];


 FUNC_0(VAR_3->primary_otg_inst < VAR_1);
 VAR_7 = VAR_2->res_pool->timing_generators[VAR_3->primary_otg_inst];
 VAR_7->funcs->set_dwb_source(VAR_7, VAR_4->dwb_pipe_inst);

 VAR_6->funcs->config_mcif_buf(VAR_6, &VAR_4->mcif_buf_params, VAR_4->dwb_params.dest_height);
 VAR_6->funcs->config_mcif_arb(VAR_6, &VAR_2->current_state->bw_ctx.bw.dcn.bw_writeback.mcif_wb_arb[VAR_4->dwb_pipe_inst]);

 VAR_6->funcs->enable_mcif(VAR_6);

 VAR_5->funcs->enable(VAR_5, &VAR_4->dwb_params);

}
