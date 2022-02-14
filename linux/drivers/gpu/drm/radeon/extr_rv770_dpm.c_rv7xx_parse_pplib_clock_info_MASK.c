
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ucEngineClockHigh; int ucMemoryClockHigh; int ulFlags; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_9__ {int ucEngineClockHigh; int ucMemoryClockHigh; int ulFlags; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_2__ r600; TYPE_1__ evergreen; } ;
typedef int u32 ;
typedef void* u16 ;
struct rv7xx_pl {int vddc; int flags; int mclk; int sclk; void* vddci; } ;
struct rv7xx_ps {struct rv7xx_pl low; struct rv7xx_pl high; struct rv7xx_pl medium; } ;
struct rv7xx_power_info {int max_vddc; int acpi_vddc; int acpi_pcie_gen2; int min_vddc_in_table; int max_vddc_in_table; } ;
struct radeon_ps {int class; int class2; } ;
struct TYPE_13__ {int sclk; int mclk; int vddc; void* vddci; } ;
struct TYPE_14__ {TYPE_5__ max_clock_voltage_on_ac; } ;
struct TYPE_15__ {TYPE_6__ dyn_state; } ;
struct TYPE_16__ {TYPE_7__ dpm; } ;
struct TYPE_12__ {int default_mclk; int default_sclk; } ;
struct radeon_device {scalar_t__ family; TYPE_8__ pm; TYPE_4__ clock; } ;
struct TYPE_11__ {int supported; struct rv7xx_pl* pl; } ;
struct evergreen_power_info {TYPE_3__ ulv; void* acpi_vddci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,void**,void**,void**) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_5 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_8,
      struct radeon_ps *VAR_9, int VAR_10,
      union pplib_clock_info *VAR_11)
{
 struct rv7xx_power_info *VAR_12 = FUNC_4(VAR_8);
 struct evergreen_power_info *VAR_13 = FUNC_0(VAR_8);
 struct rv7xx_ps *VAR_14 = FUNC_5(VAR_9);
 u32 VAR_15, VAR_16;
 struct rv7xx_pl *VAR_17;

 switch (VAR_10) {
 case 0:
  VAR_17 = &VAR_14->low;
  break;
 case 1:
  VAR_17 = &VAR_14->medium;
  break;
 case 2:
 default:
  VAR_17 = &VAR_14->high;
  break;
 }

 if (VAR_8->family >= VAR_7) {
  VAR_15 = FUNC_1(VAR_11->evergreen.usEngineClockLow);
  VAR_15 |= VAR_11->evergreen.ucEngineClockHigh << 16;
  VAR_16 = FUNC_1(VAR_11->evergreen.usMemoryClockLow);
  VAR_16 |= VAR_11->evergreen.ucMemoryClockHigh << 16;

  VAR_17->vddc = FUNC_1(VAR_11->evergreen.usVDDC);
  VAR_17->vddci = FUNC_1(VAR_11->evergreen.usVDDCI);
  VAR_17->flags = FUNC_2(VAR_11->evergreen.ulFlags);
 } else {
  VAR_15 = FUNC_1(VAR_11->r600.usEngineClockLow);
  VAR_15 |= VAR_11->r600.ucEngineClockHigh << 16;
  VAR_16 = FUNC_1(VAR_11->r600.usMemoryClockLow);
  VAR_16 |= VAR_11->r600.ucMemoryClockHigh << 16;

  VAR_17->vddc = FUNC_1(VAR_11->r600.usVDDC);
  VAR_17->flags = FUNC_2(VAR_11->r600.ulFlags);
 }

 VAR_17->mclk = VAR_16;
 VAR_17->sclk = VAR_15;


 if (VAR_17->vddc == 0xff01) {
  if (VAR_12->max_vddc)
   VAR_17->vddc = VAR_12->max_vddc;
 }

 if (VAR_9->class & VAR_1) {
  VAR_12->acpi_vddc = VAR_17->vddc;
  if (VAR_8->family >= VAR_7)
   VAR_13->acpi_vddci = VAR_17->vddci;
  if (VAR_14->low.flags & VAR_5)
   VAR_12->acpi_pcie_gen2 = 1;
  else
   VAR_12->acpi_pcie_gen2 = 0;
 }

 if (VAR_9->class2 & VAR_0) {
  if (VAR_8->family >= VAR_6) {
   VAR_13->ulv.supported = 1;
   VAR_13->ulv.pl = VAR_17;
  }
 }

 if (VAR_12->min_vddc_in_table > VAR_17->vddc)
  VAR_12->min_vddc_in_table = VAR_17->vddc;

 if (VAR_12->max_vddc_in_table < VAR_17->vddc)
  VAR_12->max_vddc_in_table = VAR_17->vddc;


 if (VAR_9->class & VAR_2) {
  u16 VAR_18, VAR_19, VAR_20;
  FUNC_3(VAR_8, &VAR_18, &VAR_19, &VAR_20);
  VAR_17->mclk = VAR_8->clock.default_mclk;
  VAR_17->sclk = VAR_8->clock.default_sclk;
  VAR_17->vddc = VAR_18;
  VAR_17->vddci = VAR_19;
 }

 if ((VAR_9->class & VAR_3) ==
     VAR_4) {
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.sclk = VAR_17->sclk;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.mclk = VAR_17->mclk;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddc = VAR_17->vddc;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddci = VAR_17->vddci;
 }
}
