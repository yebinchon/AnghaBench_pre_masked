
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef void* uint16_t ;
struct TYPE_9__ {TYPE_2__* SclkFcwRangeTable; } ;
struct vegam_smumgr {TYPE_1__* range_table; TYPE_4__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ adev; scalar_t__ smu_backend; } ;
struct pp_atomctrl_clock_dividers_ai {int usSclk_fcw_frac; size_t ucSclkPllRange; int ucSscEnable; int usSsc_fcw1_frac; int usSsc_fcw_slew_frac; void* usSsc_fcw1_int; int usPcc_fcw_slew_frac; void* usPcc_fcw_int; void* usSclk_fcw_int; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_8__ {int Fcw_frac; size_t PllRange; int Sclk_slew_rate; int Pcc_down_slew_rate; int SSc_En; int Fcw1_frac; void* Fcw1_int; void* Pcc_fcw_int; void* Fcw_int; int Sclk_ss_slew_rate; int Pcc_up_slew_rate; scalar_t__ SclkFrequency; } ;
struct TYPE_7__ {scalar_t__ postdiv; } ;
struct TYPE_6__ {scalar_t__ trans_lower_frequency; scalar_t__ trans_upper_frequency; } ;
typedef TYPE_3__ SMU_SclkSetting ;
typedef TYPE_4__ SMU75_Discrete_DpmTable ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct pp_hwmgr*,scalar_t__,struct pp_atomctrl_clock_dividers_ai*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_1,
  uint32_t VAR_2, SMU_SclkSetting *VAR_3)
{
 struct vegam_smumgr *VAR_4 = (struct vegam_smumgr *)(VAR_1->smu_backend);
 const SMU75_Discrete_DpmTable *VAR_5 = &(VAR_4->smc_state_table);
 struct pp_atomctrl_clock_dividers_ai VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12;
 int VAR_13;
 uint64_t VAR_14;

 VAR_3->SclkFrequency = VAR_2;

 VAR_13 = FUNC_1(VAR_1, VAR_2, &VAR_6);
 if (VAR_13 == 0) {
  VAR_3->Fcw_int = VAR_6.usSclk_fcw_int;
  VAR_3->Fcw_frac = VAR_6.usSclk_fcw_frac;
  VAR_3->Pcc_fcw_int = VAR_6.usPcc_fcw_int;
  VAR_3->PllRange = VAR_6.ucSclkPllRange;
  VAR_3->Sclk_slew_rate = 0x400;
  VAR_3->Pcc_up_slew_rate = VAR_6.usPcc_fcw_slew_frac;
  VAR_3->Pcc_down_slew_rate = 0xffff;
  VAR_3->SSc_En = VAR_6.ucSscEnable;
  VAR_3->Fcw1_int = VAR_6.usSsc_fcw1_int;
  VAR_3->Fcw1_frac = VAR_6.usSsc_fcw1_frac;
  VAR_3->Sclk_ss_slew_rate = VAR_6.usSsc_fcw_slew_frac;
  return VAR_13;
 }

 VAR_7 = FUNC_0((struct amdgpu_device *)VAR_1->adev);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_2 > VAR_4->range_table[VAR_12].trans_lower_frequency
  && VAR_2 <= VAR_4->range_table[VAR_12].trans_upper_frequency) {
   VAR_3->PllRange = VAR_12;
   break;
  }
 }

 VAR_3->Fcw_int = (uint16_t)
   ((VAR_2 << VAR_5->SclkFcwRangeTable[VAR_3->PllRange].postdiv) /
     VAR_7);
 VAR_14 = VAR_2 << VAR_5->SclkFcwRangeTable[VAR_3->PllRange].postdiv;
 VAR_14 <<= 0x10;
 FUNC_2(VAR_14, VAR_7);
 VAR_3->Fcw_frac = VAR_14 & 0xffff;

 VAR_8 = 10;
 VAR_9 = VAR_2 - (VAR_2 * VAR_8 / 100);
 VAR_3->Pcc_fcw_int = (uint16_t)
   ((VAR_9 << VAR_5->SclkFcwRangeTable[VAR_3->PllRange].postdiv) /
     VAR_7);

 VAR_10 = 2;
 VAR_3->SSc_En = 0;
 if (VAR_10) {
  VAR_3->SSc_En = 1;
  VAR_11 = VAR_2 - (VAR_2 * VAR_10 / 100);
  VAR_3->Fcw1_int = (uint16_t)
    ((VAR_11 << VAR_5->SclkFcwRangeTable[VAR_3->PllRange].postdiv) /
      VAR_7);
  VAR_14 = VAR_11 << VAR_5->SclkFcwRangeTable[VAR_3->PllRange].postdiv;
  VAR_14 <<= 0x10;
  FUNC_2(VAR_14, VAR_7);
  VAR_3->Fcw1_frac = VAR_14 & 0xffff;
 }

 return 0;
}
