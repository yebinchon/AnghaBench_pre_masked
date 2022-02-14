
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dce110_clk_src {TYPE_3__* bios; } ;
struct clock_source {int id; scalar_t__ dp_clk_src; } ;
struct TYPE_4__ {int FORCE_PROGRAMMING_OF_PLL; } ;
struct bp_pixel_clock_parameters {TYPE_1__ flags; int pll_id; int controller_id; int member_0; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* set_pixel_clock ) (TYPE_3__*,struct bp_pixel_clock_parameters*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dce110_clk_src* FUNC_0 (struct clock_source*) ;
 int FUNC_1 (TYPE_3__*,struct bp_pixel_clock_parameters*) ;

__attribute__((used)) static bool FUNC_2(
  struct clock_source *VAR_2)
{
 struct dce110_clk_src *VAR_3 = FUNC_0(VAR_2);
 enum bp_result VAR_4;
 struct bp_pixel_clock_parameters VAR_5 = {0};

 if (VAR_2->dp_clk_src)
  return 1;


 VAR_5.controller_id = VAR_1;
 VAR_5.pll_id = VAR_2->id;
 VAR_5.flags.FORCE_PROGRAMMING_OF_PLL = 1;


 VAR_4 = VAR_3->bios->funcs->set_pixel_clock(
   VAR_3->bios,
   &VAR_5);

 return VAR_4 == VAR_0;
}
