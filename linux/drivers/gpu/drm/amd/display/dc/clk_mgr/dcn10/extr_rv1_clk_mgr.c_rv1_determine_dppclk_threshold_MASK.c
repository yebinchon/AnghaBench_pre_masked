
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_clocks {int dispclk_khz; int dppclk_khz; int max_supported_dppclk_khz; } ;
struct TYPE_3__ {int dispclk_khz; int dppclk_khz; } ;
struct TYPE_4__ {TYPE_1__ clks; } ;
struct clk_mgr_internal {TYPE_2__ base; } ;



__attribute__((used)) static int FUNC_0(struct clk_mgr_internal *VAR_0, struct dc_clocks *VAR_1)
{
 bool VAR_2 = VAR_1->dispclk_khz > VAR_1->dppclk_khz;
 bool VAR_3 = VAR_1->dispclk_khz > VAR_0->base.clks.dispclk_khz;
 int VAR_4 = VAR_1->max_supported_dppclk_khz;
 bool VAR_5 = VAR_0->base.clks.dispclk_khz > VAR_0->base.clks.dppclk_khz;


 if (VAR_3) {

  if (VAR_5)
   return VAR_1->dispclk_khz;




  if (VAR_1->dispclk_khz <= VAR_4)
   return VAR_1->dispclk_khz;


  if (!VAR_2)
   return VAR_1->dispclk_khz;

 } else {





  if (!VAR_5)
   return VAR_1->dispclk_khz;




  if (VAR_0->base.clks.dispclk_khz <= VAR_4)
   return VAR_1->dispclk_khz;


  if (VAR_2)
   return VAR_1->dispclk_khz;
 }

 return VAR_4;
}
