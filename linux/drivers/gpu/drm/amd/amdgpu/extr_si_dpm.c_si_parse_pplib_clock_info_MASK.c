
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


struct TYPE_8__ {int ucEngineClockHigh; int ucMemoryClockHigh; int ucPCIEGen; int ulFlags; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ si; } ;
typedef void* u16 ;
struct si_ps {int performance_level_count; struct rv7xx_pl* performance_levels; } ;
struct rv7xx_pl {int sclk; int mclk; scalar_t__ vddc; void* vddci; int pcie_gen; int flags; } ;
struct TYPE_9__ {int supported; int one_pcie_lane_in_ulv; int cg_ulv_control; int cg_ulv_parameter; int volt_change_delay; struct rv7xx_pl pl; } ;
struct si_power_info {void* mvdd_bootup_value; TYPE_2__ ulv; int acpi_pcie_gen; int boot_pcie_gen; int sys_pcie_mask; } ;
struct rv7xx_power_info {scalar_t__ acpi_vddc; scalar_t__ min_vddc_in_table; scalar_t__ max_vddc_in_table; } ;
struct evergreen_power_info {void* acpi_vddci; } ;
struct amdgpu_ps {int class; int class2; } ;
struct TYPE_11__ {int sclk; int mclk; scalar_t__ vddc; void* vddci; } ;
struct TYPE_12__ {TYPE_4__ max_clock_voltage_on_ac; } ;
struct TYPE_13__ {TYPE_5__ dyn_state; } ;
struct TYPE_14__ {TYPE_6__ dpm; } ;
struct TYPE_10__ {int default_mclk; int default_sclk; } ;
struct amdgpu_device {TYPE_7__ pm; TYPE_3__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amdgpu_device*,void**,void**,void**) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ) ;
 struct evergreen_power_info* FUNC_2 (struct amdgpu_device*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct rv7xx_power_info* FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,scalar_t__,void**) ;
 struct si_power_info* FUNC_7 (struct amdgpu_device*) ;
 struct si_ps* FUNC_8 (struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_device *VAR_8,
          struct amdgpu_ps *VAR_9, int VAR_10,
          union pplib_clock_info *VAR_11)
{
 struct rv7xx_power_info *VAR_12 = FUNC_5(VAR_8);
 struct evergreen_power_info *VAR_13 = FUNC_2(VAR_8);
 struct si_power_info *VAR_14 = FUNC_7(VAR_8);
 struct si_ps *VAR_15 = FUNC_8(VAR_9);
 u16 VAR_16;
 struct rv7xx_pl *VAR_17 = &VAR_15->performance_levels[VAR_10];
 int VAR_18;

 VAR_15->performance_level_count = VAR_10 + 1;

 VAR_17->sclk = FUNC_3(VAR_11->si.usEngineClockLow);
 VAR_17->sclk |= VAR_11->si.ucEngineClockHigh << 16;
 VAR_17->mclk = FUNC_3(VAR_11->si.usMemoryClockLow);
 VAR_17->mclk |= VAR_11->si.ucMemoryClockHigh << 16;

 VAR_17->vddc = FUNC_3(VAR_11->si.usVDDC);
 VAR_17->vddci = FUNC_3(VAR_11->si.usVDDCI);
 VAR_17->flags = FUNC_4(VAR_11->si.ulFlags);
 VAR_17->pcie_gen = FUNC_1(VAR_8,
         VAR_14->sys_pcie_mask,
         VAR_14->boot_pcie_gen,
         VAR_11->si.ucPCIEGen);


 VAR_18 = FUNC_6(VAR_8, VAR_17->vddc,
       &VAR_16);
 if (VAR_18 == 0)
  VAR_17->vddc = VAR_16;

 if (VAR_9->class & VAR_1) {
  VAR_12->acpi_vddc = VAR_17->vddc;
  VAR_13->acpi_vddci = VAR_17->vddci;
  VAR_14->acpi_pcie_gen = VAR_17->pcie_gen;
 }

 if ((VAR_9->class2 & VAR_0) &&
     VAR_10 == 0) {

  VAR_14->ulv.supported = 0;
  VAR_14->ulv.pl = *VAR_17;
  VAR_14->ulv.one_pcie_lane_in_ulv = 0;
  VAR_14->ulv.volt_change_delay = VAR_7;
  VAR_14->ulv.cg_ulv_parameter = VAR_6;
  VAR_14->ulv.cg_ulv_control = VAR_5;
 }

 if (VAR_12->min_vddc_in_table > VAR_17->vddc)
  VAR_12->min_vddc_in_table = VAR_17->vddc;

 if (VAR_12->max_vddc_in_table < VAR_17->vddc)
  VAR_12->max_vddc_in_table = VAR_17->vddc;


 if (VAR_9->class & VAR_2) {
  u16 VAR_19, VAR_20, VAR_21;
  FUNC_0(VAR_8, &VAR_19, &VAR_20, &VAR_21);
  VAR_17->mclk = VAR_8->clock.default_mclk;
  VAR_17->sclk = VAR_8->clock.default_sclk;
  VAR_17->vddc = VAR_19;
  VAR_17->vddci = VAR_20;
  VAR_14->mvdd_bootup_value = VAR_21;
 }

 if ((VAR_9->class & VAR_3) ==
     VAR_4) {
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.sclk = VAR_17->sclk;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.mclk = VAR_17->mclk;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddc = VAR_17->vddc;
  VAR_8->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddci = VAR_17->vddci;
 }
}
