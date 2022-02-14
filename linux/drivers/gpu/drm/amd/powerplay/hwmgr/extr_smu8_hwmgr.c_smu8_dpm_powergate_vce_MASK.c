
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int vce_power_gated; } ;
struct pp_hwmgr {int adev; struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,int) ;

__attribute__((used)) static void FUNC_6(struct pp_hwmgr *VAR_5, bool VAR_6)
{
 struct smu8_hwmgr *VAR_7 = VAR_5->backend;

 if (VAR_6) {
  FUNC_1(VAR_5->adev,
     VAR_2,
     VAR_3);
  FUNC_0(VAR_5->adev,
     VAR_2,
     VAR_0);
  FUNC_5(VAR_5, 0);
  FUNC_2(VAR_5);
  VAR_7->vce_power_gated = 1;
 } else {
  FUNC_3(VAR_5);
  VAR_7->vce_power_gated = 0;
  FUNC_0(VAR_5->adev,
     VAR_2,
     VAR_1);
  FUNC_1(VAR_5->adev,
     VAR_2,
     VAR_4);
  FUNC_4(VAR_5);
  FUNC_5(VAR_5, 1);
 }
}
