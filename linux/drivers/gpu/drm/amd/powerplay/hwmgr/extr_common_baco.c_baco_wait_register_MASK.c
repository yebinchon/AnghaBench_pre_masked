
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pp_hwmgr {scalar_t__ adev; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct pp_hwmgr *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)(VAR_0->adev);
 u32 VAR_5 = 5000, VAR_6;

 do {
  FUNC_1(1);
  VAR_6 = FUNC_0(VAR_1);
  VAR_5--;
 } while (VAR_3 != (VAR_6 & VAR_2) && (VAR_5 != 0));

 if (VAR_5 == 0)
  return 0;

 return 1;
}
