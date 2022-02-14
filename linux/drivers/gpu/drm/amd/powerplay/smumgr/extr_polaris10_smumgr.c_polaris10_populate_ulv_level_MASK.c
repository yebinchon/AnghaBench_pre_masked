
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct smu7_hwmgr {int vddc_phase_shed_control; } ;
struct pp_hwmgr {scalar_t__ chip_id; scalar_t__ is_kicker; scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {int us_ulv_voltage_offset; } ;
struct SMU74_Discrete_Ulv {int VddcPhase; scalar_t__ VddcOffset; scalar_t__ CcPwrDynRm1; scalar_t__ CcPwrDynRm; scalar_t__ VddcOffsetVid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3,
  struct SMU74_Discrete_Ulv *VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_3->backend);
 struct phm_ppt_v1_information *VAR_6 =
   (struct phm_ppt_v1_information *)(VAR_3->pptable);

 VAR_4->CcPwrDynRm = 0;
 VAR_4->CcPwrDynRm1 = 0;

 VAR_4->VddcOffset = (uint16_t) VAR_6->us_ulv_voltage_offset;
 VAR_4->VddcOffsetVid = (uint8_t)(VAR_6->us_ulv_voltage_offset *
   VAR_2 / VAR_1);

 if (VAR_3->chip_id == VAR_0 || VAR_3->is_kicker)
  VAR_4->VddcPhase = VAR_5->vddc_phase_shed_control ^ 0x3;
 else
  VAR_4->VddcPhase = (VAR_5->vddc_phase_shed_control) ? 0 : 1;

 FUNC_0(VAR_4->CcPwrDynRm);
 FUNC_0(VAR_4->CcPwrDynRm1);
 FUNC_1(VAR_4->VddcOffset);

 return 0;
}
