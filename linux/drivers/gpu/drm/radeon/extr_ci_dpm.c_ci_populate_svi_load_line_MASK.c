
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct ci_pt_defaults {int svi_load_line_vddc; int svi_load_line_en; } ;
struct TYPE_2__ {int SviLoadLineTrimVddC; scalar_t__ SviLoadLineOffsetVddC; int SviLoadLineVddC; int SviLoadLineEn; } ;
struct ci_power_info {TYPE_1__ smc_powertune_table; struct ci_pt_defaults* powertune_defaults; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);
 const struct ci_pt_defaults *VAR_2 = VAR_1->powertune_defaults;

 VAR_1->smc_powertune_table.SviLoadLineEn = VAR_2->svi_load_line_en;
 VAR_1->smc_powertune_table.SviLoadLineVddC = VAR_2->svi_load_line_vddc;
 VAR_1->smc_powertune_table.SviLoadLineTrimVddC = 3;
 VAR_1->smc_powertune_table.SviLoadLineOffsetVddC = 0;

 return 0;
}
