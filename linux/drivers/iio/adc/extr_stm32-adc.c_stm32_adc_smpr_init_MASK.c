
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct stm32_adc_regs {unsigned int shift; unsigned int mask; unsigned int reg; } ;
struct stm32_adc {unsigned int* smpr_val; TYPE_3__* cfg; TYPE_2__* common; } ;
struct TYPE_6__ {unsigned int* smp_cycles; TYPE_1__* regs; } ;
struct TYPE_5__ {unsigned int rate; } ;
struct TYPE_4__ {struct stm32_adc_regs* smp_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct stm32_adc *VAR_2, int VAR_3, u32 VAR_4)
{
 const struct stm32_adc_regs *VAR_5 = &VAR_2->cfg->regs->smp_bits[VAR_3];
 u32 VAR_6, VAR_7 = VAR_5->shift, VAR_8 = VAR_5->mask;
 unsigned int VAR_9, VAR_10 = VAR_5->reg;


 VAR_6 = VAR_0 / VAR_2->common->rate;
 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++)
  if ((VAR_6 * VAR_2->cfg->smp_cycles[VAR_9]) >= VAR_4)
   break;
 if (VAR_9 > VAR_1)
  VAR_9 = VAR_1;


 VAR_2->smpr_val[VAR_10] = (VAR_2->smpr_val[VAR_10] & ~VAR_8) | (VAR_9 << VAR_7);
}
