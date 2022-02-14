
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_uvd_inst; int harvest_config; int fw; TYPE_1__* inst; int entity; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int * ring_enc; int ring; int cpu_addr; int gpu_addr; int vcpu_bo; int saved_bo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_2(&VAR_1->uvd.entity);

 for (VAR_3 = 0; VAR_3 < VAR_1->uvd.num_uvd_inst; ++VAR_3) {
  if (VAR_1->uvd.harvest_config & (1 << VAR_3))
   continue;
  FUNC_3(VAR_1->uvd.inst[VAR_3].saved_bo);

  FUNC_0(&VAR_1->uvd.inst[VAR_3].vcpu_bo,
          &VAR_1->uvd.inst[VAR_3].gpu_addr,
          (void **)&VAR_1->uvd.inst[VAR_3].cpu_addr);

  FUNC_1(&VAR_1->uvd.inst[VAR_3].ring);

  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
   FUNC_1(&VAR_1->uvd.inst[VAR_3].ring_enc[VAR_2]);
 }
 FUNC_4(VAR_1->uvd.fw);

 return 0;
}
