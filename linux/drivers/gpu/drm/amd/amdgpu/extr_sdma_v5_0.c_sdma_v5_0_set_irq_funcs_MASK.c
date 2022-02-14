
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; } ;
struct TYPE_4__ {int * funcs; scalar_t__ num_types; } ;
struct TYPE_6__ {TYPE_2__ illegal_inst_irq; TYPE_1__ trap_irq; scalar_t__ num_instances; } ;
struct amdgpu_device {TYPE_3__ sdma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_3)
{
 VAR_3->sdma.trap_irq.num_types = VAR_0 +
     VAR_3->sdma.num_instances;
 VAR_3->sdma.trap_irq.funcs = &VAR_2;
 VAR_3->sdma.illegal_inst_irq.funcs = &VAR_1;
}
