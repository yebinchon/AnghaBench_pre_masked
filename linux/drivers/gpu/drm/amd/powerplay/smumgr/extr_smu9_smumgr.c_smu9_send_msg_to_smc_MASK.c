
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (struct pp_hwmgr*) ;

int FUNC_4(struct pp_hwmgr *VAR_2, uint16_t VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;
 uint32_t VAR_5;

 FUNC_3(VAR_2);

 FUNC_0(VAR_0, 0, VAR_1, 0);

 FUNC_2(VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 != 1)
  FUNC_1("Failed to send message: 0x%x, ret value: 0x%x\n", VAR_3, VAR_5);

 return 0;
}
