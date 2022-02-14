
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_gpu_instance {struct amdgpu_device* adev; } ;
struct amdgpu_device {int flags; } ;
struct TYPE_2__ {int num_gpu; int mutex; int num_dgpu; int num_apu; struct amdgpu_gpu_instance* gpu_ins; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct amdgpu_device *VAR_2)
{
 struct amdgpu_gpu_instance *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1.mutex);

 for (VAR_4 = 0; VAR_4 < VAR_1.num_gpu; VAR_4++) {
  VAR_3 = &(VAR_1.gpu_ins[VAR_4]);
  if (VAR_3->adev == VAR_2) {
   VAR_1.gpu_ins[VAR_4] =
    VAR_1.gpu_ins[VAR_1.num_gpu - 1];
   VAR_1.num_gpu--;
   if (VAR_2->flags & VAR_0)
    VAR_1.num_apu--;
   else
    VAR_1.num_dgpu--;
   break;
  }
 }

 FUNC_1(&VAR_1.mutex);
}
