
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef size_t uint32_t ;
struct TYPE_22__ {int dclk; int vclk; } ;
struct smu7_power_state {int dc_compatible; size_t performance_level_count; TYPE_12__* performance_levels; TYPE_5__ uvd_clks; } ;
struct TYPE_15__ {int min; int max; } ;
struct TYPE_14__ {int min; int max; } ;
struct TYPE_26__ {int min; int max; } ;
struct TYPE_25__ {int min; int max; } ;
struct TYPE_20__ {scalar_t__ mclk_bootup_value; scalar_t__ vddci_bootup_value; } ;
struct smu7_hwmgr {int use_pcie_performance_levels; int use_pcie_power_saving_levels; TYPE_11__ pcie_lane_power_saving; TYPE_10__ pcie_gen_power_saving; TYPE_9__ pcie_lane_performance; TYPE_8__ pcie_gen_performance; int acpi_pcie_gen; TYPE_3__ vbios_boot_state; } ;
struct TYPE_24__ {int flags; int ui_label; } ;
struct TYPE_23__ {int DCLK; int VCLK; } ;
struct TYPE_21__ {int disallowOnDC; } ;
struct TYPE_17__ {int magic; } ;
struct pp_power_state {TYPE_7__ classification; TYPE_6__ uvd_clocks; TYPE_4__ validation; TYPE_13__ hardware; } ;
struct TYPE_18__ {struct phm_clock_voltage_dependency_table* vddci_dependency_on_mclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; scalar_t__ backend; } ;
struct pp_hw_power_state {int dummy; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_2__* entries; } ;
struct TYPE_19__ {scalar_t__ clk; scalar_t__ v; } ;
struct TYPE_16__ {int pcie_lane; int pcie_gen; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_13__*,int,int) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long,struct pp_power_state*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3,
  unsigned long VAR_4, struct pp_power_state *VAR_5)
{
 int VAR_6;
 struct smu7_power_state *VAR_7;
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_3->backend);
 struct phm_clock_voltage_dependency_table *VAR_9 =
   VAR_3->dyn_state.vddci_dependency_on_mclk;

 FUNC_0(&VAR_5->hardware, 0x00, sizeof(struct pp_hw_power_state));

 VAR_5->hardware.magic = VAR_0;

 VAR_7 = (struct smu7_power_state *)(&VAR_5->hardware);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5,
   VAR_2);
 if (VAR_9 != ((void*)0) && VAR_9->count == 1) {
  if (VAR_9->entries[0].clk !=
    VAR_8->vbios_boot_state.mclk_bootup_value)
   FUNC_2("Single MCLK entry VDDCI/MCLK dependency table "
     "does not match VBIOS boot MCLK level");
  if (VAR_9->entries[0].v !=
    VAR_8->vbios_boot_state.vddci_bootup_value)
   FUNC_2("Single VDDCI entry VDDCI/MCLK dependency table "
     "does not match VBIOS boot VDDCI level");
 }


 if (!VAR_5->validation.disallowOnDC)
  VAR_7->dc_compatible = 1;

 if (VAR_5->classification.flags & VAR_1)
  VAR_8->acpi_pcie_gen = VAR_7->performance_levels[0].pcie_gen;

 VAR_7->uvd_clks.vclk = VAR_5->uvd_clocks.VCLK;
 VAR_7->uvd_clks.dclk = VAR_5->uvd_clocks.DCLK;

 if (!VAR_6) {
  uint32_t VAR_10;

  switch (VAR_5->classification.ui_label) {
  case 128:
   VAR_8->use_pcie_performance_levels = 1;

   for (VAR_10 = 0; VAR_10 < VAR_7->performance_level_count; VAR_10++) {
    if (VAR_8->pcie_gen_performance.max <
      VAR_7->performance_levels[VAR_10].pcie_gen)
     VAR_8->pcie_gen_performance.max =
       VAR_7->performance_levels[VAR_10].pcie_gen;

    if (VAR_8->pcie_gen_performance.min >
      VAR_7->performance_levels[VAR_10].pcie_gen)
     VAR_8->pcie_gen_performance.min =
       VAR_7->performance_levels[VAR_10].pcie_gen;

    if (VAR_8->pcie_lane_performance.max <
      VAR_7->performance_levels[VAR_10].pcie_lane)
     VAR_8->pcie_lane_performance.max =
       VAR_7->performance_levels[VAR_10].pcie_lane;

    if (VAR_8->pcie_lane_performance.min >
      VAR_7->performance_levels[VAR_10].pcie_lane)
     VAR_8->pcie_lane_performance.min =
       VAR_7->performance_levels[VAR_10].pcie_lane;
   }
   break;
  case 129:
   VAR_8->use_pcie_power_saving_levels = 1;

   for (VAR_10 = 0; VAR_10 < VAR_7->performance_level_count; VAR_10++) {
    if (VAR_8->pcie_gen_power_saving.max <
      VAR_7->performance_levels[VAR_10].pcie_gen)
     VAR_8->pcie_gen_power_saving.max =
       VAR_7->performance_levels[VAR_10].pcie_gen;

    if (VAR_8->pcie_gen_power_saving.min >
      VAR_7->performance_levels[VAR_10].pcie_gen)
     VAR_8->pcie_gen_power_saving.min =
       VAR_7->performance_levels[VAR_10].pcie_gen;

    if (VAR_8->pcie_lane_power_saving.max <
      VAR_7->performance_levels[VAR_10].pcie_lane)
     VAR_8->pcie_lane_power_saving.max =
       VAR_7->performance_levels[VAR_10].pcie_lane;

    if (VAR_8->pcie_lane_power_saving.min >
      VAR_7->performance_levels[VAR_10].pcie_lane)
     VAR_8->pcie_lane_power_saving.min =
       VAR_7->performance_levels[VAR_10].pcie_lane;
   }
   break;
  default:
   break;
  }
 }
 return 0;
}
