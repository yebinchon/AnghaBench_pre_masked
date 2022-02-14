
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int bootup_uma_clock; int bootup_engine_clock; int dentist_vco_freq; int system_config; int htc_hyst_lmt; int htc_tmp_lmt; int nb_dpm_enable; int* nbp_memory_clock; int* nbp_n_clock; int* display_clock; int uma_channel_number; void** nbp_voltage_index; void* bootup_nb_voltage_index; } ;
struct smu8_hwmgr {TYPE_3__ sys_info; scalar_t__ enable_nb_ps_policy; } ;
struct TYPE_9__ {int max_clock_voltage_on_ac; } ;
struct TYPE_7__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_4__ dyn_state; TYPE_2__ platform_descriptor; int adev; struct smu8_hwmgr* backend; } ;
struct TYPE_10__ {int ucHtcHystLmt; int ucHtcTmpLmt; int * sDISPCLK_Voltage; int ucUMAChannelNumber; int ulGPUCapInfo; int * usNBPStateVoltage; TYPE_1__* sDispClkVoltageMapping; int * ulNbpStateNClkFreq; int * ulNbpStateMemclkFreq; int ulSystemConfig; int usBootUpNBVoltage; int ulDentistVCOFreq; int ulBootUpEngineClock; int ulBootUpUMAClock; } ;
struct TYPE_6__ {int ulMaximumSupportedCLK; } ;
typedef TYPE_5__ ATOM_INTEGRATED_SYSTEM_INFO_V1_9 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct pp_hwmgr*,int *) ;
 int FUNC_6 (struct pp_hwmgr*,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int*,int*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_8)
{
 struct smu8_hwmgr *VAR_9 = VAR_8->backend;
 ATOM_INTEGRATED_SYSTEM_INFO_V1_9 *VAR_10 = ((void*)0);
 uint32_t VAR_11;
 int VAR_12 = 0;
 uint8_t VAR_13, VAR_14;
 uint16_t VAR_15;

 VAR_10 = (ATOM_INTEGRATED_SYSTEM_INFO_V1_9 *)FUNC_7(VAR_8->adev,
   FUNC_0(VAR_0, VAR_2),
   &VAR_15, &VAR_13, &VAR_14);

 if (VAR_10 == ((void*)0)) {
  FUNC_4("Could not retrieve the Integrated System Info Table!\n");
  return -VAR_1;
 }

 if (VAR_14 != 9) {
  FUNC_4("Unsupported IGP table: %d %d\n", VAR_13, VAR_14);
  return -VAR_1;
 }

 VAR_9->sys_info.bootup_uma_clock =
       FUNC_2(VAR_10->ulBootUpUMAClock);

 VAR_9->sys_info.bootup_engine_clock =
    FUNC_2(VAR_10->ulBootUpEngineClock);

 VAR_9->sys_info.dentist_vco_freq =
       FUNC_2(VAR_10->ulDentistVCOFreq);

 VAR_9->sys_info.system_config =
         FUNC_2(VAR_10->ulSystemConfig);

 VAR_9->sys_info.bootup_nb_voltage_index =
      FUNC_1(VAR_10->usBootUpNBVoltage);

 VAR_9->sys_info.htc_hyst_lmt =
   (VAR_10->ucHtcHystLmt == 0) ? 5 : VAR_10->ucHtcHystLmt;

 VAR_9->sys_info.htc_tmp_lmt =
   (VAR_10->ucHtcTmpLmt == 0) ? 203 : VAR_10->ucHtcTmpLmt;

 if (VAR_9->sys_info.htc_tmp_lmt <=
   VAR_9->sys_info.htc_hyst_lmt) {
  FUNC_4("The htcTmpLmt should be larger than htcHystLmt.\n");
  return -VAR_1;
 }

 VAR_9->sys_info.nb_dpm_enable =
    VAR_9->enable_nb_ps_policy &&
    (FUNC_2(VAR_10->ulSystemConfig) >> 3 & 0x1);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (VAR_11 < VAR_5) {
   VAR_9->sys_info.nbp_memory_clock[VAR_11] =
     FUNC_2(VAR_10->ulNbpStateMemclkFreq[VAR_11]);
  }
  VAR_9->sys_info.nbp_n_clock[VAR_11] =
       FUNC_2(VAR_10->ulNbpStateNClkFreq[VAR_11]);
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9->sys_info.display_clock[VAR_11] =
     FUNC_2(VAR_10->sDispClkVoltageMapping[VAR_11].ulMaximumSupportedCLK);
 }


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_9->sys_info.nbp_voltage_index[VAR_11] =
        FUNC_1(VAR_10->usNBPStateVoltage[VAR_11]);
 }

 if (!VAR_9->sys_info.nb_dpm_enable) {
  for (VAR_11 = 1; VAR_11 < VAR_6; VAR_11++) {
   if (VAR_11 < VAR_5) {
    VAR_9->sys_info.nbp_memory_clock[VAR_11] =
        VAR_9->sys_info.nbp_memory_clock[0];
   }
   VAR_9->sys_info.nbp_n_clock[VAR_11] =
        VAR_9->sys_info.nbp_n_clock[0];
   VAR_9->sys_info.nbp_voltage_index[VAR_11] =
        VAR_9->sys_info.nbp_voltage_index[0];
  }
 }

 if (FUNC_2(VAR_10->ulGPUCapInfo) &
  VAR_7) {
  FUNC_3(VAR_8->platform_descriptor.platformCaps,
        VAR_4);
 }

 VAR_9->sys_info.uma_channel_number = VAR_10->ucUMAChannelNumber;

 FUNC_5 (VAR_8,
        &VAR_8->dyn_state.max_clock_voltage_on_ac);

 FUNC_6(VAR_8,
        &VAR_10->sDISPCLK_Voltage[0]);

 return VAR_12;
}
