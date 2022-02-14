
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

bool FUNC_1(struct pp_hwmgr *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_1 |
       (VAR_2 & 0xffffffff));

 if (VAR_5 & VAR_0)
  return 1;

 return 0;
}
