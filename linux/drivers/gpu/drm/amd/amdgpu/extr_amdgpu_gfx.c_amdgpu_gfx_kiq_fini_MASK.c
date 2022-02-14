
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_kiq {int eop_gpu_addr; int eop_obj; } ;
struct TYPE_2__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{
 struct amdgpu_kiq *VAR_1 = &VAR_0->gfx.kiq;

 FUNC_0(&VAR_1->eop_obj, &VAR_1->eop_gpu_addr, ((void*)0));
}
