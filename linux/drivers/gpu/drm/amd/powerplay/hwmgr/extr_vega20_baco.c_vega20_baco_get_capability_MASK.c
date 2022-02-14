
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct pp_hwmgr *VAR_4, bool *VAR_5)
{
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)(VAR_4->adev);
 uint32_t VAR_7;

 *VAR_5 = 0;
 if (!FUNC_2(VAR_4->platform_descriptor.platformCaps, VAR_1))
  return 0;

 if (((FUNC_0(0x17569) & 0x20000000) >> 29) == 0x1) {
  VAR_7 = FUNC_1(VAR_0, 0, VAR_3);

  if (VAR_7 & VAR_2)
   *VAR_5 = 1;
 }

 return 0;
}
