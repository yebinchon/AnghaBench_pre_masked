
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcv_irq; int ack_irq; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;

int FUNC_2(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 135, &VAR_1->virt.rcv_irq);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 138, &VAR_1->virt.ack_irq);
 if (VAR_2) {
  FUNC_1(VAR_1, &VAR_1->virt.rcv_irq, 0);
  return VAR_2;
 }

 return 0;
}
