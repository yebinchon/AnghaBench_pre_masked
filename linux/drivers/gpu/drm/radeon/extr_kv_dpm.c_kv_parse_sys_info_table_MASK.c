
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ucHtcTmpLmt; int ucHtcHystLmt; int sAvail_SCLK; int ulGPUCapInfo; int * ulNbpStateNClkFreq; int * ulNbpStateMemclkFreq; int ulSystemConfig; int usBootUpNBVoltage; int ulBootUpUMAClock; int ulBootUpEngineClock; } ;
union igp_info {TYPE_2__ info_8; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_mode_info {TYPE_6__* atom_context; } ;
struct TYPE_9__ {int max_clock_voltage_on_ac; } ;
struct TYPE_10__ {TYPE_3__ dyn_state; } ;
struct TYPE_11__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; struct radeon_mode_info mode_info; } ;
struct TYPE_7__ {int bootup_sclk; int bootup_uma_clk; int htc_tmp_lmt; int htc_hyst_lmt; int nb_dpm_enable; int* nbp_memory_clock; int* nbp_n_clock; int vid_mapping_table; int sclk_voltage_mapping_table; int bootup_nb_voltage_index; } ;
struct kv_power_info {int caps_enable_dfs_bypass; TYPE_1__ sys_info; } ;
struct TYPE_12__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int,int *,int*,int*,scalar_t__*) ;
 int FUNC_3 (struct radeon_device*,int *) ;
 struct kv_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*,int *,int ) ;
 int FUNC_8 (struct radeon_device*,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_5)
{
 struct kv_power_info *VAR_6 = FUNC_4(VAR_5);
 struct radeon_mode_info *VAR_7 = &VAR_5->mode_info;
 int VAR_8 = FUNC_1(VAR_0, VAR_2);
 union igp_info *VAR_9;
 u8 VAR_10, VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_7->atom_context, VAR_8, ((void*)0),
       &VAR_10, &VAR_11, &VAR_12)) {
  VAR_9 = (union igp_info *)(VAR_7->atom_context->bios +
           VAR_12);

  if (VAR_11 != 8) {
   FUNC_0("Unsupported IGP table: %d %d\n", VAR_10, VAR_11);
   return -VAR_1;
  }
  VAR_6->sys_info.bootup_sclk = FUNC_6(VAR_9->info_8.ulBootUpEngineClock);
  VAR_6->sys_info.bootup_uma_clk = FUNC_6(VAR_9->info_8.ulBootUpUMAClock);
  VAR_6->sys_info.bootup_nb_voltage_index =
   FUNC_5(VAR_9->info_8.usBootUpNBVoltage);
  if (VAR_9->info_8.ucHtcTmpLmt == 0)
   VAR_6->sys_info.htc_tmp_lmt = 203;
  else
   VAR_6->sys_info.htc_tmp_lmt = VAR_9->info_8.ucHtcTmpLmt;
  if (VAR_9->info_8.ucHtcHystLmt == 0)
   VAR_6->sys_info.htc_hyst_lmt = 5;
  else
   VAR_6->sys_info.htc_hyst_lmt = VAR_9->info_8.ucHtcHystLmt;
  if (VAR_6->sys_info.htc_tmp_lmt <= VAR_6->sys_info.htc_hyst_lmt) {
   FUNC_0("The htcTmpLmt should be larger than htcHystLmt.\n");
  }

  if (FUNC_6(VAR_9->info_8.ulSystemConfig) & (1 << 3))
   VAR_6->sys_info.nb_dpm_enable = 1;
  else
   VAR_6->sys_info.nb_dpm_enable = 0;

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   VAR_6->sys_info.nbp_memory_clock[VAR_13] =
    FUNC_6(VAR_9->info_8.ulNbpStateMemclkFreq[VAR_13]);
   VAR_6->sys_info.nbp_n_clock[VAR_13] =
    FUNC_6(VAR_9->info_8.ulNbpStateNClkFreq[VAR_13]);
  }
  if (FUNC_6(VAR_9->info_8.ulGPUCapInfo) &
      VAR_4)
   VAR_6->caps_enable_dfs_bypass = 1;

  FUNC_7(VAR_5,
         &VAR_6->sys_info.sclk_voltage_mapping_table,
         VAR_9->info_8.sAvail_SCLK);

  FUNC_8(VAR_5,
       &VAR_6->sys_info.vid_mapping_table,
       VAR_9->info_8.sAvail_SCLK);

  FUNC_3(VAR_5,
          &VAR_5->pm.dpm.dyn_state.max_clock_voltage_on_ac);
 }
 return 0;
}
