
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base; } ;
struct stm32_adc_priv {int vdda; int vref; scalar_t__ bclk; scalar_t__ aclk; TYPE_3__* cfg; TYPE_1__ common; int ccr_bak; } ;
struct stm32_adc_common {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_5__ {scalar_t__ ccr; } ;


 int FUNC_0 (scalar_t__) ;
 struct stm32_adc_common* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stm32_adc_priv*) ;
 struct stm32_adc_priv* FUNC_5 (struct stm32_adc_common*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct stm32_adc_common *VAR_1 = FUNC_1(VAR_0);
 struct stm32_adc_priv *VAR_2 = FUNC_5(VAR_1);


 VAR_2->ccr_bak = FUNC_2(VAR_2->common.base + VAR_2->cfg->regs->ccr);
 if (VAR_2->aclk)
  FUNC_0(VAR_2->aclk);
 if (VAR_2->bclk)
  FUNC_0(VAR_2->bclk);
 FUNC_3(VAR_2->vref);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2->vdda);
}
