
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


struct hubbub {TYPE_7__* funcs; } ;
struct TYPE_9__ {int watermarks; } ;
struct TYPE_10__ {TYPE_1__ dcn; } ;
struct TYPE_11__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct dc {TYPE_5__* res_pool; TYPE_8__* clk_mgr; } ;
struct TYPE_16__ {TYPE_6__* funcs; } ;
struct TYPE_15__ {int (* program_watermarks ) (struct hubbub*,int *,int,int) ;} ;
struct TYPE_14__ {int (* update_clocks ) (TYPE_8__*,struct dc_state*,int) ;} ;
struct TYPE_12__ {int dchub_ref_clock_inKhz; } ;
struct TYPE_13__ {TYPE_4__ ref_clocks; struct hubbub* hubbub; } ;


 int FUNC_0 (TYPE_8__*,struct dc_state*,int) ;
 int FUNC_1 (struct hubbub*,int *,int,int) ;

void FUNC_2(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 struct hubbub *VAR_2 = VAR_0->res_pool->hubbub;

 VAR_0->clk_mgr->funcs->update_clocks(
   VAR_0->clk_mgr,
   VAR_1,
   0);


 VAR_2->funcs->program_watermarks(VAR_2,
     &VAR_1->bw_ctx.bw.dcn.watermarks,
     VAR_0->res_pool->ref_clocks.dchub_ref_clock_inKhz / 1000,
     0);
}
