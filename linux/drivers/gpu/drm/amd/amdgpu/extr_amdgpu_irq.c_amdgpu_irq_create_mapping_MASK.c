
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* virq; int domain; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int FUNC_0 (int ,unsigned int) ;

unsigned FUNC_1(struct amdgpu_device *VAR_0, unsigned VAR_1)
{
 VAR_0->irq.virq[VAR_1] = FUNC_0(VAR_0->irq.domain, VAR_1);

 return VAR_0->irq.virq[VAR_1];
}
