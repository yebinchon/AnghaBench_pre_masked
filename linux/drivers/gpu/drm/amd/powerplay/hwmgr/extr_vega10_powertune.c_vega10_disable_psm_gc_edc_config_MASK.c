
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (struct pp_hwmgr*,int) ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 uint32_t VAR_6;

 FUNC_1(VAR_5);

 FUNC_4(VAR_4, 0);

 FUNC_2(VAR_5);

 if (FUNC_0(VAR_1)) {
  VAR_6 = 0x00000000;
  FUNC_3(VAR_4->device, VAR_3, VAR_6);
 }

 if (FUNC_0(VAR_2))
  FUNC_5(VAR_4, VAR_0);

 return 0;
}
