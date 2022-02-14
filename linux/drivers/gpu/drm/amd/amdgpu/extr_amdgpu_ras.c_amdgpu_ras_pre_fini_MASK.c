
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

int FUNC_3(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ras *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return 0;


 FUNC_0(VAR_0, 0);
 FUNC_2(VAR_0);
 return 0;
}
