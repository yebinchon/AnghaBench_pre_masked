
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cpu_addr; scalar_t__ gpu_addr; int bo; } ;
struct TYPE_3__ {TYPE_2__ mm_table; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_device*,int ,int ,int ,int *,scalar_t__*,void*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (void*,int ,int ) ;

int FUNC_5(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 if (!FUNC_3(VAR_2) || VAR_2->virt.mm_table.gpu_addr)
  return 0;

 VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_1,
        VAR_0,
        &VAR_2->virt.mm_table.bo,
        &VAR_2->virt.mm_table.gpu_addr,
        (void *)&VAR_2->virt.mm_table.cpu_addr);
 if (VAR_3) {
  FUNC_0("failed to alloc mm table and error = %d.\n", VAR_3);
  return VAR_3;
 }

 FUNC_4((void *)VAR_2->virt.mm_table.cpu_addr, 0, VAR_1);
 FUNC_1("MM table gpu addr = 0x%llx, cpu addr = %p.\n",
   VAR_2->virt.mm_table.gpu_addr,
   VAR_2->virt.mm_table.cpu_addr);
 return 0;
}
