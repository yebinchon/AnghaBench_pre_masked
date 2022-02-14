
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int fan_ctrl_is_in_default_mode; int fan_ctrl_default_mode; int tmin; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;

int FUNC_3(struct pp_hwmgr *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_6->adev;

 if (!VAR_6->fan_ctrl_is_in_default_mode) {
  FUNC_2(VAR_3, 0, VAR_5,
   FUNC_0(FUNC_1(VAR_3, 0, VAR_5),
    VAR_0, VAR_2,
    VAR_6->fan_ctrl_default_mode));
  FUNC_2(VAR_3, 0, VAR_5,
   FUNC_0(FUNC_1(VAR_3, 0, VAR_5),
    VAR_0, VAR_4,
    VAR_6->tmin << VAR_1));
  VAR_6->fan_ctrl_is_in_default_mode = 1;
 }

 return 0;
}
