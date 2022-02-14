
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct pp_hwmgr *VAR_4)
{
 uint32_t VAR_5;
 struct amdgpu_device *VAR_6 = VAR_4->adev;

 VAR_5 = FUNC_0(VAR_0, 0, VAR_3);
 if ((VAR_5 & VAR_1) ==
     (0x2 << VAR_2))
  return 1;

 return 0;
}
