
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ MemoryBootLevel; scalar_t__ GraphicsBootLevel; } ;
struct tonga_smumgr {TYPE_2__ smc_state_table; } ;
struct TYPE_10__ {int mvdd_bootup_value; int vddci_bootup_value; int vddgfx_bootup_value; int vddc_bootup_value; int mclk_bootup_value; int sclk_bootup_value; } ;
struct TYPE_7__ {int mclk_table; int sclk_table; } ;
struct smu7_hwmgr {TYPE_4__ vbios_boot_state; int vddci_voltage_table; int vddgfx_voltage_table; int vddc_voltage_table; TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_9__ {void* Vddci; void* VddGfx; void* Vddc; } ;
struct TYPE_11__ {int BootMVdd; TYPE_3__ BootVoltage; scalar_t__ MemoryBootLevel; scalar_t__ GraphicsBootLevel; } ;
typedef TYPE_5__ SMU72_Discrete_DpmTable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_0,
   SMU72_Discrete_DpmTable *VAR_1)
{
 int VAR_2 = 0;
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct tonga_smumgr *VAR_4 =
    (struct tonga_smumgr *)(VAR_0->smu_backend);
 VAR_1->GraphicsBootLevel = 0;
 VAR_1->MemoryBootLevel = 0;


 VAR_2 = FUNC_1(&(VAR_3->dpm_table.sclk_table),
 VAR_3->vbios_boot_state.sclk_bootup_value,
 (uint32_t *)&(VAR_4->smc_state_table.GraphicsBootLevel));

 if (VAR_2 != 0) {
  VAR_4->smc_state_table.GraphicsBootLevel = 0;
  FUNC_3("[powerplay] VBIOS did not find boot engine "
    "clock value in dependency table. "
    "Using Graphics DPM level 0 !");
  VAR_2 = 0;
 }

 VAR_2 = FUNC_1(&(VAR_3->dpm_table.mclk_table),
  VAR_3->vbios_boot_state.mclk_bootup_value,
  (uint32_t *)&(VAR_4->smc_state_table.MemoryBootLevel));

 if (VAR_2 != 0) {
  VAR_4->smc_state_table.MemoryBootLevel = 0;
  FUNC_3("[powerplay] VBIOS did not find boot "
    "engine clock value in dependency table."
    "Using Memory DPM level 0 !");
  VAR_2 = 0;
 }

 VAR_1->BootVoltage.Vddc =
  FUNC_2(&(VAR_3->vddc_voltage_table),
   VAR_3->vbios_boot_state.vddc_bootup_value);
 VAR_1->BootVoltage.VddGfx =
  FUNC_2(&(VAR_3->vddgfx_voltage_table),
   VAR_3->vbios_boot_state.vddgfx_bootup_value);
 VAR_1->BootVoltage.Vddci =
  FUNC_2(&(VAR_3->vddci_voltage_table),
   VAR_3->vbios_boot_state.vddci_bootup_value);
 VAR_1->BootMVdd = VAR_3->vbios_boot_state.mvdd_bootup_value;

 FUNC_0(VAR_1->BootMVdd);

 return VAR_2;
}
