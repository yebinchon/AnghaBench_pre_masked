
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras {scalar_t__ features; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct amdgpu_ras* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int *) ;
 int FUNC_6 (struct amdgpu_ras*) ;

int FUNC_7(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ras *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1)
  return 0;

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);

 FUNC_0(VAR_1->features, "Feature mask is not cleared");

 if (VAR_1->features)
  FUNC_1(VAR_0, 1);

 FUNC_5(VAR_0, ((void*)0));
 FUNC_6(VAR_1);

 return 0;
}
