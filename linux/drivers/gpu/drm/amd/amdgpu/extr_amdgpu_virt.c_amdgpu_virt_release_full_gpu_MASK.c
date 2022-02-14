
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_virt {int caps; TYPE_1__* ops; } ;
struct amdgpu_device {struct amdgpu_virt virt; } ;
struct TYPE_2__ {int (* rel_full_gpu ) (struct amdgpu_device*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int) ;

int FUNC_1(struct amdgpu_device *VAR_1, bool VAR_2)
{
 struct amdgpu_virt *VAR_3 = &VAR_1->virt;
 int VAR_4;

 if (VAR_3->ops && VAR_3->ops->rel_full_gpu) {
  VAR_4 = VAR_3->ops->rel_full_gpu(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;

  VAR_1->virt.caps |= VAR_0;
 }
 return 0;
}
