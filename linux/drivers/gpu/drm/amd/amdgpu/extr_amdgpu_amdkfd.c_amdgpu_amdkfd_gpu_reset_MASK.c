
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int *) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;

void FUNC_2(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1, ((void*)0));
}
