
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ base; } ;
struct stm32_adc_priv {int domain; TYPE_3__* cfg; TYPE_1__ common; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_5__ {int eoc1_msk; int eoc2_msk; int eoc3_msk; scalar_t__ csr; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int ) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct stm32_adc_priv* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct stm32_adc_priv*,int) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_0)
{
 struct stm32_adc_priv *VAR_1 = FUNC_4(VAR_0);
 struct irq_chip *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_6(VAR_1->common.base + VAR_1->cfg->regs->csr);
 if (VAR_3 & VAR_1->cfg->regs->eoc1_msk &&
     FUNC_7(VAR_1, 0))
  FUNC_2(FUNC_5(VAR_1->domain, 0));

 if (VAR_3 & VAR_1->cfg->regs->eoc2_msk &&
     FUNC_7(VAR_1, 1))
  FUNC_2(FUNC_5(VAR_1->domain, 1));

 if (VAR_3 & VAR_1->cfg->regs->eoc3_msk &&
     FUNC_7(VAR_1, 2))
  FUNC_2(FUNC_5(VAR_1->domain, 2));

 FUNC_1(VAR_2, VAR_0);
}
