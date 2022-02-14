
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dprefclk_khz; } ;
struct clk_mgr_internal {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_mgr_internal*,int ,int) ;

int FUNC_1(struct clk_mgr_internal *VAR_1)
{
 int VAR_2 = -1;

 VAR_2 = FUNC_0(
   VAR_1,
   VAR_0,
   VAR_1->base.dprefclk_khz / 1000);



 return VAR_2 * 1000;
}
