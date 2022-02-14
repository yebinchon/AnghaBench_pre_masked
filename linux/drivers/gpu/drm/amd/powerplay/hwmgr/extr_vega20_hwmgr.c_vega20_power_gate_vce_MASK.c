
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega20_hwmgr {int vce_power_gated; } ;
struct pp_hwmgr {int adev; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_3, bool VAR_4)
{
 struct vega20_hwmgr *VAR_5 = (struct vega20_hwmgr *)(VAR_3->backend);

 if (VAR_5->vce_power_gated == VAR_4)
  return ;

 VAR_5->vce_power_gated = VAR_4;
 if (VAR_4) {
  FUNC_1(VAR_3, !VAR_4);
  FUNC_0(VAR_3->adev,
      VAR_0,
      VAR_1);
 } else {
  FUNC_0(VAR_3->adev,
      VAR_0,
      VAR_2);
  FUNC_1(VAR_3, !VAR_4);
 }

}
