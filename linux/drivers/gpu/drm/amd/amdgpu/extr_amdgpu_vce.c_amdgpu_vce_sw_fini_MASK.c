
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_rings; int idle_mutex; int fw; int * ring; int cpu_addr; int gpu_addr; int * vcpu_bo; int entity; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (int **,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_0)
{
 unsigned VAR_1;

 if (VAR_0->vce.vcpu_bo == ((void*)0))
  return 0;

 FUNC_2(&VAR_0->vce.entity);

 FUNC_0(&VAR_0->vce.vcpu_bo, &VAR_0->vce.gpu_addr,
  (void **)&VAR_0->vce.cpu_addr);

 for (VAR_1 = 0; VAR_1 < VAR_0->vce.num_rings; VAR_1++)
  FUNC_1(&VAR_0->vce.ring[VAR_1]);

 FUNC_4(VAR_0->vce.fw);
 FUNC_3(&VAR_0->vce.idle_mutex);

 return 0;
}
