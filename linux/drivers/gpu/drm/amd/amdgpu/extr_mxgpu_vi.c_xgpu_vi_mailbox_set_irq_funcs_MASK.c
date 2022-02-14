
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_types; int * funcs; } ;
struct TYPE_4__ {int num_types; int * funcs; } ;
struct TYPE_6__ {TYPE_2__ rcv_irq; TYPE_1__ ack_irq; } ;
struct amdgpu_device {TYPE_3__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct amdgpu_device *VAR_2)
{
 VAR_2->virt.ack_irq.num_types = 1;
 VAR_2->virt.ack_irq.funcs = &VAR_0;
 VAR_2->virt.rcv_irq.num_types = 1;
 VAR_2->virt.rcv_irq.funcs = &VAR_1;
}
