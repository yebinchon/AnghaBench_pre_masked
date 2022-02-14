
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ucEngineClockHigh; int ucMemoryClockHigh; int ulFlags; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ evergreen; } ;
typedef void* u16 ;
struct rv7xx_power_info {int max_vddc; int acpi_vddc; int acpi_pcie_gen2; int min_vddc_in_table; int max_vddc_in_table; } ;
struct rv7xx_pl {int sclk; int mclk; int vddc; int flags; void* vddci; } ;
struct radeon_ps {int class; int class2; } ;
struct TYPE_11__ {int sclk; int mclk; int vddc; void* vddci; } ;
struct TYPE_12__ {TYPE_4__ max_clock_voltage_on_ac; } ;
struct TYPE_13__ {TYPE_5__ dyn_state; } ;
struct TYPE_14__ {TYPE_6__ dpm; } ;
struct TYPE_10__ {int default_mclk; int default_sclk; } ;
struct radeon_device {TYPE_7__ pm; TYPE_3__ clock; } ;
struct ni_ps {int performance_level_count; struct rv7xx_pl* performance_levels; } ;
struct TYPE_9__ {int supported; struct rv7xx_pl* pl; } ;
struct evergreen_power_info {TYPE_2__ ulv; void* acpi_vddci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ni_ps* FUNC_3 (struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,void**,void**,void**) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_6,
          struct radeon_ps *VAR_7, int VAR_8,
          union pplib_clock_info *VAR_9)
{
 struct rv7xx_power_info *VAR_10 = FUNC_5(VAR_6);
 struct evergreen_power_info *VAR_11 = FUNC_0(VAR_6);
 struct ni_ps *VAR_12 = FUNC_3(VAR_7);
 struct rv7xx_pl *VAR_13 = &VAR_12->performance_levels[VAR_8];

 VAR_12->performance_level_count = VAR_8 + 1;

 VAR_13->sclk = FUNC_1(VAR_9->evergreen.usEngineClockLow);
 VAR_13->sclk |= VAR_9->evergreen.ucEngineClockHigh << 16;
 VAR_13->mclk = FUNC_1(VAR_9->evergreen.usMemoryClockLow);
 VAR_13->mclk |= VAR_9->evergreen.ucMemoryClockHigh << 16;

 VAR_13->vddc = FUNC_1(VAR_9->evergreen.usVDDC);
 VAR_13->vddci = FUNC_1(VAR_9->evergreen.usVDDCI);
 VAR_13->flags = FUNC_2(VAR_9->evergreen.ulFlags);


 if (VAR_13->vddc == 0xff01) {
  if (VAR_10->max_vddc)
   VAR_13->vddc = VAR_10->max_vddc;
 }

 if (VAR_7->class & VAR_1) {
  VAR_10->acpi_vddc = VAR_13->vddc;
  VAR_11->acpi_vddci = VAR_13->vddci;
  if (VAR_12->performance_levels[0].flags & VAR_5)
   VAR_10->acpi_pcie_gen2 = 1;
  else
   VAR_10->acpi_pcie_gen2 = 0;
 }

 if (VAR_7->class2 & VAR_0) {
  VAR_11->ulv.supported = 1;
  VAR_11->ulv.pl = VAR_13;
 }

 if (VAR_10->min_vddc_in_table > VAR_13->vddc)
  VAR_10->min_vddc_in_table = VAR_13->vddc;

 if (VAR_10->max_vddc_in_table < VAR_13->vddc)
  VAR_10->max_vddc_in_table = VAR_13->vddc;


 if (VAR_7->class & VAR_2) {
  u16 VAR_14, VAR_15, VAR_16;
  FUNC_4(VAR_6, &VAR_14, &VAR_15, &VAR_16);
  VAR_13->mclk = VAR_6->clock.default_mclk;
  VAR_13->sclk = VAR_6->clock.default_sclk;
  VAR_13->vddc = VAR_14;
  VAR_13->vddci = VAR_15;
 }

 if ((VAR_7->class & VAR_3) ==
     VAR_4) {
  VAR_6->pm.dpm.dyn_state.max_clock_voltage_on_ac.sclk = VAR_13->sclk;
  VAR_6->pm.dpm.dyn_state.max_clock_voltage_on_ac.mclk = VAR_13->mclk;
  VAR_6->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddc = VAR_13->vddc;
  VAR_6->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddci = VAR_13->vddci;
 }
}
