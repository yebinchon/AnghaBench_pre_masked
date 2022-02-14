
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vmid {scalar_t__ current_gpu_reset_count; } ;
struct amdgpu_device {int gpu_reset_counter; } ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(struct amdgpu_device *VAR_0,
          struct amdgpu_vmid *VAR_1)
{
 return VAR_1->current_gpu_reset_count !=
  FUNC_0(&VAR_0->gpu_reset_counter);
}
