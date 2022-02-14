
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_adc {TYPE_3__* cfg; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_4__ {int mask; int reg; } ;
struct TYPE_5__ {TYPE_1__ ier_eoc; } ;


 int FUNC_0 (struct stm32_adc*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stm32_adc *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->cfg->regs->ier_eoc.reg,
      VAR_0->cfg->regs->ier_eoc.mask);
}
