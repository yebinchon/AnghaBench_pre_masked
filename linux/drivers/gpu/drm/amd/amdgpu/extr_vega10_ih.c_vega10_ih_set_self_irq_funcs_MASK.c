
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; scalar_t__ num_types; } ;
struct TYPE_4__ {TYPE_1__ self_irq; } ;
struct amdgpu_device {TYPE_2__ irq; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 VAR_1->irq.self_irq.num_types = 0;
 VAR_1->irq.self_irq.funcs = &VAR_0;
}
