
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_3__ {int (* get_gpu_clock_counter ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;

uint64_t FUNC_1(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (VAR_1->gfx.funcs->get_gpu_clock_counter)
  return VAR_1->gfx.funcs->get_gpu_clock_counter(VAR_1);
 return 0;
}
