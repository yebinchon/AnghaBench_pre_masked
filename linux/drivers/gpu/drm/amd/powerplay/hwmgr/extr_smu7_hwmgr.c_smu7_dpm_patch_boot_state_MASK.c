
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct smu7_power_state {TYPE_1__* performance_levels; } ;
struct TYPE_5__ {scalar_t__ pcie_lane_bootup_value; int pcie_gen_bootup_value; void* sclk_bootup_value; void* mclk_bootup_value; void* vddci_bootup_value; void* vddc_bootup_value; void* mvdd_bootup_value; } ;
struct smu7_hwmgr {TYPE_2__ vbios_boot_state; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_6__ {int usBootUpVDDCIVoltage; int usBootUpVDDCVoltage; int usBootUpMVDDCVoltage; int ulDefaultMemoryClock; int ulDefaultEngineClock; } ;
struct TYPE_4__ {scalar_t__ pcie_lane; int pcie_gen; void* engine_clock; void* memory_clock; } ;
typedef TYPE_3__ ATOM_FIRMWARE_INFO_V2_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_5 (int ,int,scalar_t__*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_2,
     struct pp_hw_power_state *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_2->backend);
 struct smu7_power_state *VAR_5 = (struct smu7_power_state *)VAR_3;
 ATOM_FIRMWARE_INFO_V2_2 *VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8, VAR_9;
 int VAR_10 = FUNC_0(VAR_0, VAR_1);




 VAR_6 = (ATOM_FIRMWARE_INFO_V2_2 *)FUNC_5(VAR_2->adev, VAR_10,
   &VAR_7, &VAR_8, &VAR_9);
 if (!VAR_6)

  return 0;


 VAR_4->vbios_boot_state.sclk_bootup_value =
   FUNC_2(VAR_6->ulDefaultEngineClock);
 VAR_4->vbios_boot_state.mclk_bootup_value =
   FUNC_2(VAR_6->ulDefaultMemoryClock);
 VAR_4->vbios_boot_state.mvdd_bootup_value =
   FUNC_1(VAR_6->usBootUpMVDDCVoltage);
 VAR_4->vbios_boot_state.vddc_bootup_value =
   FUNC_1(VAR_6->usBootUpVDDCVoltage);
 VAR_4->vbios_boot_state.vddci_bootup_value =
   FUNC_1(VAR_6->usBootUpVDDCIVoltage);
 VAR_4->vbios_boot_state.pcie_gen_bootup_value =
   FUNC_4(VAR_2);

 VAR_4->vbios_boot_state.pcie_lane_bootup_value =
   (uint16_t)FUNC_3(VAR_2);


 VAR_5->performance_levels[0].memory_clock = VAR_4->vbios_boot_state.mclk_bootup_value;
 VAR_5->performance_levels[0].engine_clock = VAR_4->vbios_boot_state.sclk_bootup_value;
 VAR_5->performance_levels[0].pcie_gen = VAR_4->vbios_boot_state.pcie_gen_bootup_value;
 VAR_5->performance_levels[0].pcie_lane = VAR_4->vbios_boot_state.pcie_lane_bootup_value;

 return 0;
}
