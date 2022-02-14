
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gpu_addr; int cpu_addr; int bo; } ;
struct TYPE_4__ {TYPE_1__ mm_table; } ;
struct amdgpu_device {TYPE_2__ virt; } ;


 int FUNC_0 (int *,scalar_t__*,void*) ;
 int FUNC_1 (struct amdgpu_device*) ;

void FUNC_2(struct amdgpu_device *VAR_0)
{
 if (!FUNC_1(VAR_0) || !VAR_0->virt.mm_table.gpu_addr)
  return;

 FUNC_0(&VAR_0->virt.mm_table.bo,
         &VAR_0->virt.mm_table.gpu_addr,
         (void *)&VAR_0->virt.mm_table.cpu_addr);
 VAR_0->virt.mm_table.gpu_addr = 0;
}
