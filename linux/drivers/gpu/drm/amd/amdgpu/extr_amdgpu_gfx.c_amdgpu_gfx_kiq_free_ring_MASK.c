
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {TYPE_2__* adev; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {int reg_val_offs; } ;
struct TYPE_4__ {TYPE_1__ virt; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct amdgpu_ring*) ;

void FUNC_2(struct amdgpu_ring *VAR_0,
         struct amdgpu_irq_src *VAR_1)
{
 FUNC_0(VAR_0->adev, VAR_0->adev->virt.reg_val_offs);
 FUNC_1(VAR_0);
}
