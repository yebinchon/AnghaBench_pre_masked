
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int uvd_power_gated; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*,int) ;

void FUNC_5(struct pp_hwmgr *VAR_5, bool VAR_6)
{
 struct smu7_hwmgr *VAR_7 = (struct smu7_hwmgr *)(VAR_5->backend);

 VAR_7->uvd_power_gated = VAR_6;

 if (VAR_6) {
  FUNC_1(VAR_5->adev,
      VAR_2,
      VAR_3);
  FUNC_0(VAR_5->adev,
    VAR_2,
    VAR_0);
  FUNC_4(VAR_5, 1);
  FUNC_2(VAR_5);
 } else {
  FUNC_3(VAR_5);
  FUNC_0(VAR_5->adev,
    VAR_2,
    VAR_1);
  FUNC_1(VAR_5->adev,
      VAR_2,
      VAR_4);
  FUNC_4(VAR_5, 0);
 }

}
