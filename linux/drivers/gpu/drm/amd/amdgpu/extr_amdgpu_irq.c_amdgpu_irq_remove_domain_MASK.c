
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * domain; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{
 if (VAR_0->irq.domain) {
  FUNC_0(VAR_0->irq.domain);
  VAR_0->irq.domain = ((void*)0);
 }
}
