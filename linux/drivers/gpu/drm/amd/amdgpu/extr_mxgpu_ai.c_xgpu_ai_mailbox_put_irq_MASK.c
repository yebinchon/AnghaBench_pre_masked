
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcv_irq; int ack_irq; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int FUNC_0 (struct amdgpu_device*,int *,int ) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->virt.ack_irq, 0);
 FUNC_0(VAR_0, &VAR_0->virt.rcv_irq, 0);
}
