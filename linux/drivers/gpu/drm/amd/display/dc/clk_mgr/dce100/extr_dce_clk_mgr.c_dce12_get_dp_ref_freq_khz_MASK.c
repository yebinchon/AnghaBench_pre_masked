
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_mgr_internal {int dummy; } ;
struct clk_mgr {int dprefclk_khz; } ;


 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct clk_mgr_internal*,int ) ;

int FUNC_2(struct clk_mgr *VAR_0)
{
 struct clk_mgr_internal *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_0->dprefclk_khz);
}
