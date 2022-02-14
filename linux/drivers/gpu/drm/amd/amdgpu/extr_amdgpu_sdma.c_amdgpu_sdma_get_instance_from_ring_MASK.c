
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_sdma_instance {struct amdgpu_ring page; struct amdgpu_ring ring; } ;
struct TYPE_2__ {int num_instances; struct amdgpu_sdma_instance* instance; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;



struct amdgpu_sdma_instance *FUNC_0(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sdma.num_instances; VAR_2++)
  if (VAR_0 == &VAR_1->sdma.instance[VAR_2].ring ||
      VAR_0 == &VAR_1->sdma.instance[VAR_2].page)
   return &VAR_1->sdma.instance[VAR_2];

 return ((void*)0);
}
