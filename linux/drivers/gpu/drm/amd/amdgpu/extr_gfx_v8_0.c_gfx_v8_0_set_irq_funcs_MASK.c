
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int num_types; int * funcs; } ;
struct TYPE_10__ {int num_types; int * funcs; } ;
struct TYPE_9__ {int num_types; int * funcs; } ;
struct TYPE_8__ {int num_types; int * funcs; } ;
struct TYPE_7__ {int * funcs; int num_types; } ;
struct TYPE_12__ {TYPE_5__ sq_irq; TYPE_4__ cp_ecc_error_irq; TYPE_3__ priv_inst_irq; TYPE_2__ priv_reg_irq; TYPE_1__ eop_irq; } ;
struct amdgpu_device {TYPE_6__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_6)
{
 VAR_6->gfx.eop_irq.num_types = VAR_0;
 VAR_6->gfx.eop_irq.funcs = &VAR_2;

 VAR_6->gfx.priv_reg_irq.num_types = 1;
 VAR_6->gfx.priv_reg_irq.funcs = &VAR_4;

 VAR_6->gfx.priv_inst_irq.num_types = 1;
 VAR_6->gfx.priv_inst_irq.funcs = &VAR_3;

 VAR_6->gfx.cp_ecc_error_irq.num_types = 1;
 VAR_6->gfx.cp_ecc_error_irq.funcs = &VAR_1;

 VAR_6->gfx.sq_irq.num_types = 1;
 VAR_6->gfx.sq_irq.funcs = &VAR_5;
}
