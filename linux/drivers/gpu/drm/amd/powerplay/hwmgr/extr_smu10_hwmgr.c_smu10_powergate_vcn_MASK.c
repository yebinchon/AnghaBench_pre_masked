
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu10_hwmgr {int vcn_power_gated; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_5, bool VAR_6)
{
 struct smu10_hwmgr *VAR_7 = (struct smu10_hwmgr *)(VAR_5->backend);

 if (VAR_6) {
  FUNC_0(VAR_5->adev,
      VAR_0,
      VAR_1);
  FUNC_1(VAR_5,
     VAR_3, 0);
  VAR_7->vcn_power_gated = 1;
 } else {
  FUNC_1(VAR_5,
      VAR_4, 0);
  FUNC_0(VAR_5->adev,
      VAR_0,
      VAR_2);
  VAR_7->vcn_power_gated = 0;
 }
}
