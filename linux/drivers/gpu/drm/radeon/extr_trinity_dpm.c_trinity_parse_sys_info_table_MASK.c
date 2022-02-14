
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ucHtcTmpLmt; int ucHtcHystLmt; int ucDPMState3DclkFid; int ucDPMState2DclkFid; int ucDPMState1DclkFid; int ucDPMState0DclkFid; int ucDPMState3VclkFid; int ucDPMState2VclkFid; int ucDPMState1VclkFid; int ucDPMState0VclkFid; int sAvail_SCLK; int ucUMAChannelNumber; int usNBP3Voltage; int usNBP2Voltage; int usNBP1Voltage; int usNBP0Voltage; int * ulNbpStateNClkFreq; int * ulNbpStateMemclkFreq; scalar_t__ ucNBDPMEnable; int usBootUpNBVoltage; int ulDentistVCOFreq; int ulBootUpUMAClock; int ulMinEngineClock; int ulBootUpEngineClock; } ;
union igp_info {TYPE_3__ info_7; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int htc_tmp_lmt; int htc_hyst_lmt; TYPE_1__* uvd_clock_table_entries; int vid_mapping_table; int sclk_voltage_mapping_table; int uma_channel_number; void** nbp_voltage_index; void** nbp_nclk; void** nbp_mclk; scalar_t__ nb_dpm_enable; void* bootup_nb_voltage_index; void* dentist_vco_freq; void* bootup_uma_clk; void* min_sclk; void* bootup_sclk; } ;
struct trinity_power_info {TYPE_2__ sys_info; scalar_t__ enable_nbps_policy; } ;
struct radeon_mode_info {TYPE_4__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct TYPE_8__ {scalar_t__ bios; } ;
struct TYPE_5__ {int dclk_did; void* dclk; int vclk_did; void* vclk; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int *,int*,int*,scalar_t__*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_device*,int *,int ) ;
 int FUNC_6 (struct radeon_device*,int *,int ) ;
 void* FUNC_7 (struct radeon_device*,int ) ;
 struct trinity_power_info* FUNC_8 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_4)
{
 struct trinity_power_info *VAR_5 = FUNC_8(VAR_4);
 struct radeon_mode_info *VAR_6 = &VAR_4->mode_info;
 int VAR_7 = FUNC_1(VAR_0, VAR_2);
 union igp_info *VAR_8;
 u8 VAR_9, VAR_10;
 u16 VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_6->atom_context, VAR_7, ((void*)0),
       &VAR_9, &VAR_10, &VAR_11)) {
  VAR_8 = (union igp_info *)(VAR_6->atom_context->bios +
           VAR_11);

  if (VAR_10 != 7) {
   FUNC_0("Unsupported IGP table: %d %d\n", VAR_9, VAR_10);
   return -VAR_1;
  }
  VAR_5->sys_info.bootup_sclk = FUNC_4(VAR_8->info_7.ulBootUpEngineClock);
  VAR_5->sys_info.min_sclk = FUNC_4(VAR_8->info_7.ulMinEngineClock);
  VAR_5->sys_info.bootup_uma_clk = FUNC_4(VAR_8->info_7.ulBootUpUMAClock);
  VAR_5->sys_info.dentist_vco_freq = FUNC_4(VAR_8->info_7.ulDentistVCOFreq);
  VAR_5->sys_info.bootup_nb_voltage_index =
   FUNC_3(VAR_8->info_7.usBootUpNBVoltage);
  if (VAR_8->info_7.ucHtcTmpLmt == 0)
   VAR_5->sys_info.htc_tmp_lmt = 203;
  else
   VAR_5->sys_info.htc_tmp_lmt = VAR_8->info_7.ucHtcTmpLmt;
  if (VAR_8->info_7.ucHtcHystLmt == 0)
   VAR_5->sys_info.htc_hyst_lmt = 5;
  else
   VAR_5->sys_info.htc_hyst_lmt = VAR_8->info_7.ucHtcHystLmt;
  if (VAR_5->sys_info.htc_tmp_lmt <= VAR_5->sys_info.htc_hyst_lmt) {
   FUNC_0("The htcTmpLmt should be larger than htcHystLmt.\n");
  }

  if (VAR_5->enable_nbps_policy)
   VAR_5->sys_info.nb_dpm_enable = VAR_8->info_7.ucNBDPMEnable;
  else
   VAR_5->sys_info.nb_dpm_enable = 0;

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_5->sys_info.nbp_mclk[VAR_12] = FUNC_4(VAR_8->info_7.ulNbpStateMemclkFreq[VAR_12]);
   VAR_5->sys_info.nbp_nclk[VAR_12] = FUNC_4(VAR_8->info_7.ulNbpStateNClkFreq[VAR_12]);
  }

  VAR_5->sys_info.nbp_voltage_index[0] = FUNC_3(VAR_8->info_7.usNBP0Voltage);
  VAR_5->sys_info.nbp_voltage_index[1] = FUNC_3(VAR_8->info_7.usNBP1Voltage);
  VAR_5->sys_info.nbp_voltage_index[2] = FUNC_3(VAR_8->info_7.usNBP2Voltage);
  VAR_5->sys_info.nbp_voltage_index[3] = FUNC_3(VAR_8->info_7.usNBP3Voltage);

  if (!VAR_5->sys_info.nb_dpm_enable) {
   for (VAR_12 = 1; VAR_12 < VAR_3; VAR_12++) {
    VAR_5->sys_info.nbp_mclk[VAR_12] = VAR_5->sys_info.nbp_mclk[0];
    VAR_5->sys_info.nbp_nclk[VAR_12] = VAR_5->sys_info.nbp_nclk[0];
    VAR_5->sys_info.nbp_voltage_index[VAR_12] = VAR_5->sys_info.nbp_voltage_index[0];
   }
  }

  VAR_5->sys_info.uma_channel_number = VAR_8->info_7.ucUMAChannelNumber;

  FUNC_5(VAR_4,
         &VAR_5->sys_info.sclk_voltage_mapping_table,
         VAR_8->info_7.sAvail_SCLK);
  FUNC_6(VAR_4, &VAR_5->sys_info.vid_mapping_table,
       VAR_8->info_7.sAvail_SCLK);

  VAR_5->sys_info.uvd_clock_table_entries[0].vclk_did =
   VAR_8->info_7.ucDPMState0VclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[1].vclk_did =
   VAR_8->info_7.ucDPMState1VclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[2].vclk_did =
   VAR_8->info_7.ucDPMState2VclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[3].vclk_did =
   VAR_8->info_7.ucDPMState3VclkFid;

  VAR_5->sys_info.uvd_clock_table_entries[0].dclk_did =
   VAR_8->info_7.ucDPMState0DclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[1].dclk_did =
   VAR_8->info_7.ucDPMState1DclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[2].dclk_did =
   VAR_8->info_7.ucDPMState2DclkFid;
  VAR_5->sys_info.uvd_clock_table_entries[3].dclk_did =
   VAR_8->info_7.ucDPMState3DclkFid;

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   VAR_5->sys_info.uvd_clock_table_entries[VAR_12].vclk =
    FUNC_7(VAR_4,
           VAR_5->sys_info.uvd_clock_table_entries[VAR_12].vclk_did);
   VAR_5->sys_info.uvd_clock_table_entries[VAR_12].dclk =
    FUNC_7(VAR_4,
           VAR_5->sys_info.uvd_clock_table_entries[VAR_12].dclk_did);
  }



 }
 return 0;
}
