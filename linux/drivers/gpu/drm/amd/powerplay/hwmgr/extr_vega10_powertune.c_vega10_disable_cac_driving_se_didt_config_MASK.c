
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;

 FUNC_0(VAR_1);

 FUNC_2(VAR_0, 0);

 FUNC_1(VAR_1);

 return 0;
}
