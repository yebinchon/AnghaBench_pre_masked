
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_state {int res_ctx; } ;
struct dc {int res_pool; struct clk_mgr* clk_mgr; } ;
struct clk_mgr {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* update_clocks ) (struct clk_mgr*,struct dc_state*,int) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct clk_mgr*,struct dc_state*,int) ;

void FUNC_2(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 struct clk_mgr *VAR_2 = VAR_0->clk_mgr;

 FUNC_0(&VAR_1->res_ctx, VAR_0->res_pool);

 VAR_2->funcs->update_clocks(
   VAR_2,
   VAR_1,
   0);
}
