
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * funcs; void* num_types; } ;
struct TYPE_6__ {int * funcs; } ;
struct TYPE_5__ {int * funcs; void* num_types; } ;
struct TYPE_8__ {int num_instances; TYPE_3__ ecc_irq; TYPE_2__ illegal_inst_irq; TYPE_1__ trap_irq; } ;
struct amdgpu_device {TYPE_4__ sdma; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_6)
{
 switch (VAR_6->sdma.num_instances) {
 case 1:
  VAR_6->sdma.trap_irq.num_types = VAR_0;
  VAR_6->sdma.ecc_irq.num_types = VAR_0;
  break;
 case 8:
  VAR_6->sdma.trap_irq.num_types = VAR_2;
  VAR_6->sdma.ecc_irq.num_types = VAR_2;
  break;
 case 2:
 default:
  VAR_6->sdma.trap_irq.num_types = VAR_1;
  VAR_6->sdma.ecc_irq.num_types = VAR_1;
  break;
 }
 VAR_6->sdma.trap_irq.funcs = &VAR_5;
 VAR_6->sdma.illegal_inst_irq.funcs = &VAR_4;
 VAR_6->sdma.ecc_irq.funcs = &VAR_3;
}
