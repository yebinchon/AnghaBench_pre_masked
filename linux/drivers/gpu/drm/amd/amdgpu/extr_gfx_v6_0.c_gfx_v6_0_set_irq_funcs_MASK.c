
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_types; int * funcs; } ;
struct TYPE_7__ {int num_types; int * funcs; } ;
struct TYPE_6__ {int * funcs; int num_types; } ;
struct TYPE_8__ {TYPE_1__ priv_inst_irq; TYPE_3__ priv_reg_irq; TYPE_2__ eop_irq; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_4)
{
 VAR_4->gfx.eop_irq.num_types = VAR_0;
 VAR_4->gfx.eop_irq.funcs = &VAR_1;

 VAR_4->gfx.priv_reg_irq.num_types = 1;
 VAR_4->gfx.priv_reg_irq.funcs = &VAR_3;

 VAR_4->gfx.priv_inst_irq.num_types = 1;
 VAR_4->gfx.priv_inst_irq.funcs = &VAR_2;
}
