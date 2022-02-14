
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dclk; int vclk; } ;
struct smu8_power_state {TYPE_1__ uvd_clocks; } ;
struct TYPE_5__ {int DCLK; int VCLK; } ;
struct TYPE_6__ {int magic; } ;
struct pp_power_state {TYPE_2__ uvd_clocks; TYPE_3__ hardware; } ;
struct pp_hwmgr {int dummy; } ;


 struct smu8_power_state* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long,struct pp_power_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
      unsigned long VAR_3, struct pp_power_state *VAR_4)
{
 int VAR_5;
 struct smu8_power_state *VAR_6;

 VAR_4->hardware.magic = VAR_1;

 VAR_6 = FUNC_0(&(VAR_4->hardware));

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4,
   VAR_0);

 VAR_6->uvd_clocks.vclk = VAR_4->uvd_clocks.VCLK;
 VAR_6->uvd_clocks.dclk = VAR_4->uvd_clocks.DCLK;

 return VAR_5;
}
