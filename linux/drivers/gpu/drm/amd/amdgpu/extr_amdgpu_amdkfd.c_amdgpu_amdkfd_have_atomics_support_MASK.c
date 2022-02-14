
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_device {int have_atomics_support; } ;



bool FUNC_0(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 return VAR_1->have_atomics_support;
}
