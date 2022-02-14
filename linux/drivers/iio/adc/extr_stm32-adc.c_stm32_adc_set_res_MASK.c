
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stm32_adc_regs {int mask; int shift; int reg; } ;
struct stm32_adc {int res; TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {struct stm32_adc_regs res; } ;


 int FUNC_0 (struct stm32_adc*,int ) ;
 int FUNC_1 (struct stm32_adc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stm32_adc *VAR_0)
{
 const struct stm32_adc_regs *VAR_1 = &VAR_0->cfg->regs->res;
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->reg);
 VAR_2 = (VAR_2 & ~VAR_1->mask) | (VAR_0->res << VAR_1->shift);
 FUNC_1(VAR_0, VAR_1->reg, VAR_2);
}
