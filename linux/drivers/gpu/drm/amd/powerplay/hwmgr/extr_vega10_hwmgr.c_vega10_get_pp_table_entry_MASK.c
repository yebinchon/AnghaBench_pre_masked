
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dclk; int vclk; } ;
struct vega10_power_state {int dc_compatible; TYPE_2__ uvd_clks; } ;
struct TYPE_7__ {int DCLK; int VCLK; } ;
struct TYPE_5__ {int disallowOnDC; } ;
struct TYPE_8__ {int magic; } ;
struct pp_power_state {TYPE_3__ uvd_clocks; TYPE_1__ validation; TYPE_4__ hardware; } ;
struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 struct vega10_power_state* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long,struct pp_power_state*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  unsigned long VAR_3, struct pp_power_state *VAR_4)
{
 int VAR_5;
 struct vega10_power_state *VAR_6;

 VAR_4->hardware.magic = VAR_0;

 VAR_6 = FUNC_0(&VAR_4->hardware);

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4,
   VAR_1);






 if (!VAR_4->validation.disallowOnDC)
  VAR_6->dc_compatible = 1;

 VAR_6->uvd_clks.vclk = VAR_4->uvd_clocks.VCLK;
 VAR_6->uvd_clks.dclk = VAR_4->uvd_clocks.DCLK;

 return 0;
}
