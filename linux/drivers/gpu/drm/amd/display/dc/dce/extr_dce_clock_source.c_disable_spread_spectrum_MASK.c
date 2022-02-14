
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct dce110_clk_src {TYPE_3__* bios; TYPE_1__ base; } ;
struct bp_spread_spectrum_parameters {int pll_id; int member_0; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* enable_spread_spectrum_on_ppll ) (TYPE_3__*,struct bp_spread_spectrum_parameters*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct bp_spread_spectrum_parameters*,int) ;

__attribute__((used)) static bool FUNC_1(struct dce110_clk_src *VAR_1)
{
 enum bp_result VAR_2;
 struct bp_spread_spectrum_parameters VAR_3 = {0};

 VAR_3.pll_id = VAR_1->base.id;


 VAR_2 = VAR_1->bios->funcs->enable_spread_spectrum_on_ppll(
   VAR_1->bios,
   &VAR_3,
   0);

 return VAR_2 == VAR_0;
}
