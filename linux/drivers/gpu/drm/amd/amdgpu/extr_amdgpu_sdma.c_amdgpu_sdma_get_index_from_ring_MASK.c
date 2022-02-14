
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_3__ {int num_instances; TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;
struct TYPE_4__ {struct amdgpu_ring page; struct amdgpu_ring ring; } ;


 int VAR_0 ;

int FUNC_0(struct amdgpu_ring *VAR_1, uint32_t *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_1->adev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->sdma.num_instances; VAR_4++) {
  if (VAR_1 == &VAR_3->sdma.instance[VAR_4].ring ||
   VAR_1 == &VAR_3->sdma.instance[VAR_4].page) {
   *VAR_2 = VAR_4;
   return 0;
  }
 }

 return -VAR_0;
}
