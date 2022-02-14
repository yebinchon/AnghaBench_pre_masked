
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_types; int * funcs; } ;
struct TYPE_4__ {int num_types; int * funcs; } ;
struct TYPE_6__ {TYPE_2__ ecc_irq; TYPE_1__ vm_fault; } ;
struct amdgpu_device {TYPE_3__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 VAR_2->gmc.vm_fault.num_types = 1;
 VAR_2->gmc.vm_fault.funcs = &VAR_1;

 VAR_2->gmc.ecc_irq.num_types = 1;
 VAR_2->gmc.ecc_irq.funcs = &VAR_0;
}
