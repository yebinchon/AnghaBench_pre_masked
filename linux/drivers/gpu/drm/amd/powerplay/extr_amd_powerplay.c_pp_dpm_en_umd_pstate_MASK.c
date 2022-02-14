
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dpm_level; int saved_dpm_level; int en_umd_pstate; int adev; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_10,
      enum amd_dpm_forced_level *VAR_11)
{
 uint32_t VAR_12 = VAR_6 |
     VAR_4 |
     VAR_3 |
     VAR_5;

 if (!(VAR_10->dpm_level & VAR_12)) {

  if (*VAR_11 & VAR_12) {
   VAR_10->saved_dpm_level = VAR_10->dpm_level;
   VAR_10->en_umd_pstate = 1;
   FUNC_0(VAR_10->adev,
      VAR_7,
      VAR_1);
   FUNC_1(VAR_10->adev,
     VAR_7,
     VAR_9);
  }
 } else {

  if (!(*VAR_11 & VAR_12)) {
   if (*VAR_11 == VAR_2)
    *VAR_11 = VAR_10->saved_dpm_level;
   VAR_10->en_umd_pstate = 0;
   FUNC_0(VAR_10->adev,
     VAR_7,
     VAR_0);
   FUNC_1(VAR_10->adev,
     VAR_7,
     VAR_8);
  }
 }
}
