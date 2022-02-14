
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int num_types; int * funcs; } ;
struct TYPE_7__ {int num_types; int * funcs; } ;
struct TYPE_6__ {int num_types; int * funcs; } ;
struct TYPE_9__ {int * funcs; int num_types; } ;
struct TYPE_10__ {TYPE_3__ cp_ecc_error_irq; TYPE_2__ priv_inst_irq; TYPE_1__ priv_reg_irq; TYPE_4__ eop_irq; } ;
struct amdgpu_device {TYPE_5__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_5)
{
 VAR_5->gfx.eop_irq.num_types = VAR_0;
 VAR_5->gfx.eop_irq.funcs = &VAR_2;

 VAR_5->gfx.priv_reg_irq.num_types = 1;
 VAR_5->gfx.priv_reg_irq.funcs = &VAR_4;

 VAR_5->gfx.priv_inst_irq.num_types = 1;
 VAR_5->gfx.priv_inst_irq.funcs = &VAR_3;

 VAR_5->gfx.cp_ecc_error_irq.num_types = 2;
 VAR_5->gfx.cp_ecc_error_irq.funcs = &VAR_1;
}
