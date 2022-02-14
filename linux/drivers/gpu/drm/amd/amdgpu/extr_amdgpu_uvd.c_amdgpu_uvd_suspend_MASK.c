
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_handles; int num_uvd_inst; int harvest_config; TYPE_1__* inst; int * handles; int idle_work; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ uvd; } ;
struct TYPE_3__ {int saved_bo; void* cpu_addr; int * vcpu_bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int ,void*,unsigned int) ;

int FUNC_5(struct amdgpu_device *VAR_3)
{
 unsigned VAR_4;
 void *VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(&VAR_3->uvd.idle_work);


 if (VAR_3->asic_type < VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_3->uvd.max_handles; ++VAR_6)
   if (FUNC_1(&VAR_3->uvd.handles[VAR_6]))
    break;

  if (VAR_6 == VAR_3->uvd.max_handles)
   return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->uvd.num_uvd_inst; ++VAR_7) {
  if (VAR_3->uvd.harvest_config & (1 << VAR_7))
   continue;
  if (VAR_3->uvd.inst[VAR_7].vcpu_bo == ((void*)0))
   continue;

  VAR_4 = FUNC_0(VAR_3->uvd.inst[VAR_7].vcpu_bo);
  VAR_5 = VAR_3->uvd.inst[VAR_7].cpu_addr;

  VAR_3->uvd.inst[VAR_7].saved_bo = FUNC_3(VAR_4, VAR_2);
  if (!VAR_3->uvd.inst[VAR_7].saved_bo)
   return -VAR_1;

  FUNC_4(VAR_3->uvd.inst[VAR_7].saved_bo, VAR_5, VAR_4);
 }
 return 0;
}
