
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int fan_ctrl_is_in_default_mode; void* tmin; void* fan_ctrl_default_mode; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_4(struct pp_hwmgr *VAR_5, uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;

 if (VAR_5->fan_ctrl_is_in_default_mode) {
  VAR_5->fan_ctrl_default_mode =
   FUNC_0(FUNC_2(VAR_2, 0, VAR_4),
    VAR_0, VAR_1);
  VAR_5->tmin =
   FUNC_0(FUNC_2(VAR_2, 0, VAR_4),
    VAR_0, VAR_3);
  VAR_5->fan_ctrl_is_in_default_mode = 0;
 }

 FUNC_3(VAR_2, 0, VAR_4,
   FUNC_1(FUNC_2(VAR_2, 0, VAR_4),
    VAR_0, VAR_3, 0));
 FUNC_3(VAR_2, 0, VAR_4,
   FUNC_1(FUNC_2(VAR_2, 0, VAR_4),
    VAR_0, VAR_1, VAR_6));

 return 0;
}
