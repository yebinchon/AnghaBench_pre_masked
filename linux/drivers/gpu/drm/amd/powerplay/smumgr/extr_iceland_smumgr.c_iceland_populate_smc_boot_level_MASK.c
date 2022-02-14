
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int mvdd_bootup_value; int vddci_bootup_value; int vddc_bootup_value; int mclk_bootup_value; int sclk_bootup_value; } ;
struct TYPE_6__ {int mclk_table; int sclk_table; } ;
struct smu7_hwmgr {scalar_t__ vddci_control; TYPE_3__ vbios_boot_state; TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_7__ {scalar_t__ MemoryBootLevel; scalar_t__ GraphicsBootLevel; } ;
struct iceland_smumgr {TYPE_2__ smc_state_table; } ;
struct TYPE_9__ {int BootMVdd; int BootVddci; int BootVddc; scalar_t__ MemoryBootLevel; scalar_t__ GraphicsBootLevel; } ;
typedef TYPE_4__ SMU71_Discrete_DpmTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1,
   SMU71_Discrete_DpmTable *VAR_2)
{
 int VAR_3 = 0;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct iceland_smumgr *VAR_5 = (struct iceland_smumgr *)(VAR_1->smu_backend);
 VAR_2->GraphicsBootLevel = 0;
 VAR_2->MemoryBootLevel = 0;


 VAR_3 = FUNC_0(&(VAR_4->dpm_table.sclk_table),
   VAR_4->vbios_boot_state.sclk_bootup_value,
   (uint32_t *)&(VAR_5->smc_state_table.GraphicsBootLevel));

 if (0 != VAR_3) {
  VAR_5->smc_state_table.GraphicsBootLevel = 0;
  FUNC_1("VBIOS did not find boot engine clock value in dependency table. Using Graphics DPM level 0!\n");
  VAR_3 = 0;
 }

 VAR_3 = FUNC_0(&(VAR_4->dpm_table.mclk_table),
  VAR_4->vbios_boot_state.mclk_bootup_value,
  (uint32_t *)&(VAR_5->smc_state_table.MemoryBootLevel));

 if (0 != VAR_3) {
  VAR_5->smc_state_table.MemoryBootLevel = 0;
  FUNC_1("VBIOS did not find boot engine clock value in dependency table. Using Memory DPM level 0!\n");
  VAR_3 = 0;
 }

 VAR_2->BootVddc = VAR_4->vbios_boot_state.vddc_bootup_value;
 if (VAR_0 == VAR_4->vddci_control)
  VAR_2->BootVddci = VAR_2->BootVddc;
 else
  VAR_2->BootVddci = VAR_4->vbios_boot_state.vddci_bootup_value;

 VAR_2->BootMVdd = VAR_4->vbios_boot_state.mvdd_bootup_value;

 return VAR_3;
}
