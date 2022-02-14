
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_gpu_instance {scalar_t__ mgpu_fan_enabled; struct amdgpu_device* adev; } ;
struct amdgpu_device {int flags; } ;
struct TYPE_2__ {size_t num_gpu; int mutex; int num_dgpu; int num_apu; struct amdgpu_gpu_instance* gpu_ins; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_gpu_instance *VAR_4;

 FUNC_1(&VAR_2.mutex);

 if (VAR_2.num_gpu >= VAR_1) {
  FUNC_0("Cannot register more gpu instance\n");
  FUNC_2(&VAR_2.mutex);
  return;
 }

 VAR_4 = &(VAR_2.gpu_ins[VAR_2.num_gpu]);
 VAR_4->adev = VAR_3;
 VAR_4->mgpu_fan_enabled = 0;

 VAR_2.num_gpu++;
 if (VAR_3->flags & VAR_0)
  VAR_2.num_apu++;
 else
  VAR_2.num_dgpu++;

 FUNC_2(&VAR_2.mutex);
}
