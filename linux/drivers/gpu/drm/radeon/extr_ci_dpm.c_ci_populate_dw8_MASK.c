
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_pt_defaults {scalar_t__ tdc_waterfall_ctl; } ;
struct TYPE_2__ {scalar_t__ TdcWaterfallCtl; } ;
struct ci_power_info {TYPE_1__ smc_powertune_table; int sram_end; struct ci_pt_defaults* powertune_defaults; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_0(VAR_6);
 const struct ci_pt_defaults *VAR_8 = VAR_7->powertune_defaults;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6,
         VAR_3 +
         FUNC_2(VAR_4, VAR_1) +
         FUNC_2(VAR_2, VAR_5),
         (u32 *)&VAR_7->smc_powertune_table.TdcWaterfallCtl,
         VAR_7->sram_end);
 if (VAR_9)
  return -VAR_0;
 else
  VAR_7->smc_powertune_table.TdcWaterfallCtl = VAR_8->tdc_waterfall_ctl;

 return 0;
}
