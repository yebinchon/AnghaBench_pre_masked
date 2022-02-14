
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_gpu_instance {int mgpu_fan_enabled; struct amdgpu_device* adev; } ;
struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_2__ powerplay; } ;
struct TYPE_6__ {int num_dgpu; int mutex; struct amdgpu_gpu_instance* gpu_ins; } ;
struct TYPE_4__ {scalar_t__ enable_mgpu_fan_boost; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct amdgpu_gpu_instance *VAR_2;
 struct amdgpu_device *VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_1(&VAR_1.mutex);






 if (VAR_1.num_dgpu < 2)
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_1.num_dgpu; VAR_4++) {
  VAR_2 = &(VAR_1.gpu_ins[VAR_4]);
  VAR_3 = VAR_2->adev;
  if (!(VAR_3->flags & VAR_0) &&
      !VAR_2->mgpu_fan_enabled &&
      VAR_3->powerplay.pp_funcs &&
      VAR_3->powerplay.pp_funcs->enable_mgpu_fan_boost) {
   VAR_5 = FUNC_0(VAR_3);
   if (VAR_5)
    break;

   VAR_2->mgpu_fan_enabled = 1;
  }
 }

out:
 FUNC_2(&VAR_1.mutex);

 return VAR_5;
}
