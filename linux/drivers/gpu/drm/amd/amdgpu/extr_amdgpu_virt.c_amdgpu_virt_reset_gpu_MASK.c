
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_virt {int caps; TYPE_1__* ops; } ;
struct amdgpu_device {struct amdgpu_virt virt; } ;
struct TYPE_2__ {int (* reset_gpu ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;

int FUNC_1(struct amdgpu_device *VAR_1)
{
 struct amdgpu_virt *VAR_2 = &VAR_1->virt;
 int VAR_3;

 if (VAR_2->ops && VAR_2->ops->reset_gpu) {
  VAR_3 = VAR_2->ops->reset_gpu(VAR_1);
  if (VAR_3)
   return VAR_3;

  VAR_1->virt.caps &= ~VAR_0;
 }

 return 0;
}
