
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_vcn_inst; int harvest_config; TYPE_1__* inst; int idle_work; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {int saved_bo; void* cpu_addr; int * vcpu_bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,void*,unsigned int) ;

int FUNC_4(struct amdgpu_device *VAR_2)
{
 unsigned VAR_3;
 void *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->vcn.idle_work);

 for (VAR_5 = 0; VAR_5 < VAR_2->vcn.num_vcn_inst; ++VAR_5) {
  if (VAR_2->vcn.harvest_config & (1 << VAR_5))
   continue;
  if (VAR_2->vcn.inst[VAR_5].vcpu_bo == ((void*)0))
   return 0;

  VAR_3 = FUNC_0(VAR_2->vcn.inst[VAR_5].vcpu_bo);
  VAR_4 = VAR_2->vcn.inst[VAR_5].cpu_addr;

  VAR_2->vcn.inst[VAR_5].saved_bo = FUNC_2(VAR_3, VAR_1);
  if (!VAR_2->vcn.inst[VAR_5].saved_bo)
   return -VAR_0;

  FUNC_3(VAR_2->vcn.inst[VAR_5].saved_bo, VAR_4, VAR_3);
 }
 return 0;
}
