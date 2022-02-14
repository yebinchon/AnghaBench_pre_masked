
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; int num_types; } ;
struct TYPE_4__ {TYPE_1__ trap_irq; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 VAR_2->sdma.trap_irq.num_types = VAR_0;
 VAR_2->sdma.trap_irq.funcs = &VAR_1;
}
