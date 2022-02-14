
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


struct TYPE_8__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usPCIELane; int ucPCIEGen; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ ci; } ;
struct radeon_ps {int class; int class2; } ;
struct radeon_device {int dummy; } ;
struct ci_ps {int performance_level_count; struct ci_pl* performance_levels; } ;
struct TYPE_14__ {int min; int max; } ;
struct TYPE_13__ {int min; int max; } ;
struct TYPE_12__ {int min; int max; } ;
struct TYPE_11__ {int min; int max; } ;
struct TYPE_10__ {int mclk_bootup_value; int sclk_bootup_value; int pcie_lane_bootup_value; int pcie_gen_bootup_value; } ;
struct ci_pl {int sclk; int mclk; int pcie_lane; int pcie_gen; } ;
struct TYPE_9__ {int supported; int cg_ulv_parameter; struct ci_pl pl; } ;
struct ci_power_info {int use_pcie_powersaving_levels; int use_pcie_performance_levels; TYPE_7__ pcie_lane_performance; TYPE_6__ pcie_gen_performance; TYPE_5__ pcie_lane_powersaving; TYPE_4__ pcie_gen_powersaving; TYPE_3__ vbios_boot_state; TYPE_2__ ulv; int acpi_pcie_gen; int sys_pcie_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int ) ;
 int FUNC_4 (struct radeon_device*,int ,void*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_5,
          struct radeon_ps *VAR_6, int VAR_7,
          union pplib_clock_info *VAR_8)
{
 struct ci_power_info *VAR_9 = FUNC_0(VAR_5);
 struct ci_ps *VAR_10 = FUNC_1(VAR_6);
 struct ci_pl *VAR_11 = &VAR_10->performance_levels[VAR_7];

 VAR_10->performance_level_count = VAR_7 + 1;

 VAR_11->sclk = FUNC_2(VAR_8->ci.usEngineClockLow);
 VAR_11->sclk |= VAR_8->ci.ucEngineClockHigh << 16;
 VAR_11->mclk = FUNC_2(VAR_8->ci.usMemoryClockLow);
 VAR_11->mclk |= VAR_8->ci.ucMemoryClockHigh << 16;

 VAR_11->pcie_gen = FUNC_3(VAR_5,
       VAR_9->sys_pcie_mask,
       VAR_9->vbios_boot_state.pcie_gen_bootup_value,
       VAR_8->ci.ucPCIEGen);
 VAR_11->pcie_lane = FUNC_4(VAR_5,
         VAR_9->vbios_boot_state.pcie_lane_bootup_value,
         FUNC_2(VAR_8->ci.usPCIELane));

 if (VAR_6->class & VAR_1) {
  VAR_9->acpi_pcie_gen = VAR_11->pcie_gen;
 }

 if (VAR_6->class2 & VAR_0) {
  VAR_9->ulv.supported = 1;
  VAR_9->ulv.pl = *VAR_11;
  VAR_9->ulv.cg_ulv_parameter = VAR_4;
 }


 if (VAR_6->class & VAR_2) {
  VAR_11->mclk = VAR_9->vbios_boot_state.mclk_bootup_value;
  VAR_11->sclk = VAR_9->vbios_boot_state.sclk_bootup_value;
  VAR_11->pcie_gen = VAR_9->vbios_boot_state.pcie_gen_bootup_value;
  VAR_11->pcie_lane = VAR_9->vbios_boot_state.pcie_lane_bootup_value;
 }

 switch (VAR_6->class & VAR_3) {
 case 129:
  VAR_9->use_pcie_powersaving_levels = 1;
  if (VAR_9->pcie_gen_powersaving.max < VAR_11->pcie_gen)
   VAR_9->pcie_gen_powersaving.max = VAR_11->pcie_gen;
  if (VAR_9->pcie_gen_powersaving.min > VAR_11->pcie_gen)
   VAR_9->pcie_gen_powersaving.min = VAR_11->pcie_gen;
  if (VAR_9->pcie_lane_powersaving.max < VAR_11->pcie_lane)
   VAR_9->pcie_lane_powersaving.max = VAR_11->pcie_lane;
  if (VAR_9->pcie_lane_powersaving.min > VAR_11->pcie_lane)
   VAR_9->pcie_lane_powersaving.min = VAR_11->pcie_lane;
  break;
 case 128:
  VAR_9->use_pcie_performance_levels = 1;
  if (VAR_9->pcie_gen_performance.max < VAR_11->pcie_gen)
   VAR_9->pcie_gen_performance.max = VAR_11->pcie_gen;
  if (VAR_9->pcie_gen_performance.min > VAR_11->pcie_gen)
   VAR_9->pcie_gen_performance.min = VAR_11->pcie_gen;
  if (VAR_9->pcie_lane_performance.max < VAR_11->pcie_lane)
   VAR_9->pcie_lane_performance.max = VAR_11->pcie_lane;
  if (VAR_9->pcie_lane_performance.min > VAR_11->pcie_lane)
   VAR_9->pcie_lane_performance.min = VAR_11->pcie_lane;
  break;
 default:
  break;
 }
}
