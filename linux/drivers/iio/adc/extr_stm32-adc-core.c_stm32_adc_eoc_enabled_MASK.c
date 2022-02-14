
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {unsigned int base; } ;
struct stm32_adc_priv {TYPE_3__* cfg; TYPE_1__ common; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_5__ {unsigned int ier; unsigned int eocie_msk; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct stm32_adc_priv *VAR_1,
       unsigned int VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_0[VAR_2];

 VAR_3 = FUNC_0(VAR_1->common.base + VAR_4 + VAR_1->cfg->regs->ier);

 return VAR_3 & VAR_1->cfg->regs->eocie_msk;
}
