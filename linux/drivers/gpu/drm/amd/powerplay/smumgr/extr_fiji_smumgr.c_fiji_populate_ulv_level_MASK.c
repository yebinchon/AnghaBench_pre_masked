
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_ppt_v1_information {int us_ulv_voltage_offset; } ;
struct SMU73_Discrete_Ulv {int VddcPhase; scalar_t__ VddcOffset; scalar_t__ CcPwrDynRm1; scalar_t__ CcPwrDynRm; scalar_t__ VddcOffsetVid; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  struct SMU73_Discrete_Ulv *VAR_3)
{
 int VAR_4 = 0;

 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)(VAR_2->pptable);

 VAR_3->CcPwrDynRm = 0;
 VAR_3->CcPwrDynRm1 = 0;

 VAR_3->VddcOffset = (uint16_t) VAR_5->us_ulv_voltage_offset;
 VAR_3->VddcOffsetVid = (uint8_t)(VAR_5->us_ulv_voltage_offset *
   VAR_1 / VAR_0);

 VAR_3->VddcPhase = 1;

 if (!VAR_4) {
  FUNC_0(VAR_3->CcPwrDynRm);
  FUNC_0(VAR_3->CcPwrDynRm1);
  FUNC_1(VAR_3->VddcOffset);
 }
 return VAR_4;
}
