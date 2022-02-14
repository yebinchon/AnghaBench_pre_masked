
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_state {int res_ctx; } ;
struct dc {TYPE_2__* clk_mgr; int res_pool; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* update_clocks ) (TYPE_2__*,struct dc_state*,int) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,struct dc_state*,int) ;

void FUNC_2(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 FUNC_0(&VAR_1->res_ctx, VAR_0->res_pool);

 VAR_0->clk_mgr->funcs->update_clocks(
   VAR_0->clk_mgr,
   VAR_1,
   1);
}
