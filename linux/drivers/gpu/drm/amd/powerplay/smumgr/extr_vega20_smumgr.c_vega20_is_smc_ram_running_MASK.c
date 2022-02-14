
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
 int FUNC_0 (int) ;
 int VAR_3 ;

bool FUNC_1(struct pp_hwmgr *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_2 |
       (VAR_3 & 0xffffffff));

 if ((VAR_6 & VAR_0) >>
     VAR_1)
  return 1;

 return 0;
}
