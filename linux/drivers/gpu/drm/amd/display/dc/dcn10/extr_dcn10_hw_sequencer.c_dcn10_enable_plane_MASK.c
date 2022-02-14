
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_8__* hubp; } ;
struct TYPE_12__ {TYPE_7__* opp; } ;
struct pipe_ctx {TYPE_5__ plane_res; TYPE_3__ stream_res; } ;
struct dce_hwseq {int dummy; } ;
struct dc_state {int dummy; } ;
struct TYPE_15__ {scalar_t__ sanity_checks; } ;
struct TYPE_13__ {scalar_t__ gpu_vm_support; } ;
struct dc {TYPE_6__ debug; TYPE_4__ config; struct dce_hwseq* hwseq; } ;
struct TYPE_17__ {TYPE_1__* funcs; int inst; } ;
struct TYPE_16__ {TYPE_2__* funcs; } ;
struct TYPE_11__ {int (* opp_pipe_clock_control ) (TYPE_7__*,int) ;} ;
struct TYPE_10__ {int (* hubp_clk_cntl ) (TYPE_8__*,int) ;} ;


 int FUNC_0 (struct dce_hwseq*,TYPE_8__*) ;
 int FUNC_1 (struct dc*) ;
 int FUNC_2 (struct dce_hwseq*,int ) ;
 int FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (struct dc*) ;

__attribute__((used)) static void FUNC_6(
 struct dc *VAR_0,
 struct pipe_ctx *VAR_1,
 struct dc_state *VAR_2)
{
 struct dce_hwseq *VAR_3 = VAR_0->hwseq;

 if (VAR_0->debug.sanity_checks) {
  FUNC_1(VAR_0);
 }

 FUNC_5(VAR_0);

 FUNC_2(VAR_0->hwseq,
  VAR_1->plane_res.hubp->inst);


 VAR_1->plane_res.hubp->funcs->hubp_clk_cntl(VAR_1->plane_res.hubp, 1);


 VAR_1->stream_res.opp->funcs->opp_pipe_clock_control(
   VAR_1->stream_res.opp,
   1);
 if (VAR_0->config.gpu_vm_support)
  FUNC_0(VAR_3, VAR_1->plane_res.hubp);

 if (VAR_0->debug.sanity_checks) {
  FUNC_1(VAR_0);
 }
}
