
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_mode_info {TYPE_2__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct ci_vbios_boot_state {void* mclk_bootup_value; void* sclk_bootup_value; int pcie_lane_bootup_value; int pcie_gen_bootup_value; void* vddci_bootup_value; void* vddc_bootup_value; void* mvdd_bootup_value; } ;
struct TYPE_4__ {scalar_t__ bios; } ;
struct TYPE_3__ {int ulDefaultMemoryClock; int ulDefaultEngineClock; int usBootUpVDDCIVoltage; int usBootUpVDDCVoltage; int usBootUpMVDDCVoltage; } ;
typedef TYPE_1__ ATOM_FIRMWARE_INFO_V2_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_3,
        struct ci_vbios_boot_state *VAR_4)
{
 struct radeon_mode_info *VAR_5 = &VAR_3->mode_info;
 int VAR_6 = FUNC_0(VAR_0, VAR_2);
 ATOM_FIRMWARE_INFO_V2_2 *VAR_7;
 u8 VAR_8, VAR_9;
 u16 VAR_10;

 if (FUNC_1(VAR_5->atom_context, VAR_6, ((void*)0),
       &VAR_8, &VAR_9, &VAR_10)) {
  VAR_7 =
   (ATOM_FIRMWARE_INFO_V2_2 *)(VAR_5->atom_context->bios +
          VAR_10);
  VAR_4->mvdd_bootup_value = FUNC_4(VAR_7->usBootUpMVDDCVoltage);
  VAR_4->vddc_bootup_value = FUNC_4(VAR_7->usBootUpVDDCVoltage);
  VAR_4->vddci_bootup_value = FUNC_4(VAR_7->usBootUpVDDCIVoltage);
  VAR_4->pcie_gen_bootup_value = FUNC_3(VAR_3);
  VAR_4->pcie_lane_bootup_value = FUNC_2(VAR_3);
  VAR_4->sclk_bootup_value = FUNC_5(VAR_7->ulDefaultEngineClock);
  VAR_4->mclk_bootup_value = FUNC_5(VAR_7->ulDefaultMemoryClock);

  return 0;
 }
 return -VAR_1;
}
