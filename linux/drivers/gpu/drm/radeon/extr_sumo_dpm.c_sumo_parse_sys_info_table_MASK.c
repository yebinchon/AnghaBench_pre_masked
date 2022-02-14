
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucHtcTmpLmt; int ucHtcHystLmt; int sAvail_SCLK; int sDISPCLK_Voltage; scalar_t__ EnableBoost; int ulBoostVid_2bit; int ulBoostEngineCLock; int SclkDpmTdpLimitBoost; int GnbTdpLimit; int SclkDpmTdpLimitPG; int SclkDpmThrottleMargin; int SclkDpmBoostMargin; int * ulCSR_M3_ARB_CNTL_FS3D; int * ulCSR_M3_ARB_CNTL_UVD; int * ulCSR_M3_ARB_CNTL_DEFAULT; int usBootUpNBVoltage; int ulBootUpUMAClock; int ulMinEngineClock; int ulBootUpEngineClock; } ;
union igp_info {TYPE_2__ info_6; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int htc_tmp_lmt; int htc_hyst_lmt; int enable_boost; int vid_mapping_table; int sclk_voltage_mapping_table; int disp_clk_voltage_mapping_table; int boost_vid_2bit; void* boost_sclk; void* sclk_dpm_tdp_limit_boost; void* gnb_tdp_limit; void* sclk_dpm_tdp_limit_pg; void* sclk_dpm_throttle_margin; void* sclk_dpm_boost_margin; void** csr_m3_arb_cntl_fs3d; void** csr_m3_arb_cntl_uvd; void** csr_m3_arb_cntl_default; void* bootup_nb_voltage_index; void* bootup_uma_clk; void* min_sclk; void* bootup_sclk; } ;
struct sumo_power_info {TYPE_1__ sys_info; } ;
struct radeon_mode_info {TYPE_3__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct TYPE_6__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int *,int*,int*,scalar_t__*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_device*,int *,int ) ;
 int FUNC_6 (struct radeon_device*,int *,int ) ;
 int FUNC_7 (struct radeon_device*,int *,int ) ;
 struct sumo_power_info* FUNC_8 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_4)
{
 struct sumo_power_info *VAR_5 = FUNC_8(VAR_4);
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

  if (VAR_10 != 6) {
   FUNC_0("Unsupported IGP table: %d %d\n", VAR_9, VAR_10);
   return -VAR_1;
  }
  VAR_5->sys_info.bootup_sclk = FUNC_4(VAR_8->info_6.ulBootUpEngineClock);
  VAR_5->sys_info.min_sclk = FUNC_4(VAR_8->info_6.ulMinEngineClock);
  VAR_5->sys_info.bootup_uma_clk = FUNC_4(VAR_8->info_6.ulBootUpUMAClock);
  VAR_5->sys_info.bootup_nb_voltage_index =
   FUNC_3(VAR_8->info_6.usBootUpNBVoltage);
  if (VAR_8->info_6.ucHtcTmpLmt == 0)
   VAR_5->sys_info.htc_tmp_lmt = 203;
  else
   VAR_5->sys_info.htc_tmp_lmt = VAR_8->info_6.ucHtcTmpLmt;
  if (VAR_8->info_6.ucHtcHystLmt == 0)
   VAR_5->sys_info.htc_hyst_lmt = 5;
  else
   VAR_5->sys_info.htc_hyst_lmt = VAR_8->info_6.ucHtcHystLmt;
  if (VAR_5->sys_info.htc_tmp_lmt <= VAR_5->sys_info.htc_hyst_lmt) {
   FUNC_0("The htcTmpLmt should be larger than htcHystLmt.\n");
  }
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_5->sys_info.csr_m3_arb_cntl_default[VAR_12] =
    FUNC_4(VAR_8->info_6.ulCSR_M3_ARB_CNTL_DEFAULT[VAR_12]);
   VAR_5->sys_info.csr_m3_arb_cntl_uvd[VAR_12] =
    FUNC_4(VAR_8->info_6.ulCSR_M3_ARB_CNTL_UVD[VAR_12]);
   VAR_5->sys_info.csr_m3_arb_cntl_fs3d[VAR_12] =
    FUNC_4(VAR_8->info_6.ulCSR_M3_ARB_CNTL_FS3D[VAR_12]);
  }
  VAR_5->sys_info.sclk_dpm_boost_margin =
   FUNC_4(VAR_8->info_6.SclkDpmBoostMargin);
  VAR_5->sys_info.sclk_dpm_throttle_margin =
   FUNC_4(VAR_8->info_6.SclkDpmThrottleMargin);
  VAR_5->sys_info.sclk_dpm_tdp_limit_pg =
   FUNC_3(VAR_8->info_6.SclkDpmTdpLimitPG);
  VAR_5->sys_info.gnb_tdp_limit = FUNC_3(VAR_8->info_6.GnbTdpLimit);
  VAR_5->sys_info.sclk_dpm_tdp_limit_boost =
   FUNC_3(VAR_8->info_6.SclkDpmTdpLimitBoost);
  VAR_5->sys_info.boost_sclk = FUNC_4(VAR_8->info_6.ulBoostEngineCLock);
  VAR_5->sys_info.boost_vid_2bit = VAR_8->info_6.ulBoostVid_2bit;
  if (VAR_8->info_6.EnableBoost)
   VAR_5->sys_info.enable_boost = 1;
  else
   VAR_5->sys_info.enable_boost = 0;
  FUNC_5(VAR_4,
            &VAR_5->sys_info.disp_clk_voltage_mapping_table,
            VAR_8->info_6.sDISPCLK_Voltage);
  FUNC_6(VAR_4,
         &VAR_5->sys_info.sclk_voltage_mapping_table,
         VAR_8->info_6.sAvail_SCLK);
  FUNC_7(VAR_4, &VAR_5->sys_info.vid_mapping_table,
       VAR_8->info_6.sAvail_SCLK);

 }
 return 0;
}
