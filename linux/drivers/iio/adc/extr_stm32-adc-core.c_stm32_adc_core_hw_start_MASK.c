
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base; } ;
struct stm32_adc_priv {int vdda_uv; int vdda; int vref; scalar_t__ bclk; TYPE_3__* cfg; TYPE_1__ common; int ccr_bak; scalar_t__ aclk; } ;
struct stm32_adc_common {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_5__ {scalar_t__ ccr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct stm32_adc_common* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct stm32_adc_priv*) ;
 int FUNC_8 (struct stm32_adc_priv*,struct device*) ;
 struct stm32_adc_priv* FUNC_9 (struct stm32_adc_common*) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_0)
{
 struct stm32_adc_common *VAR_1 = FUNC_3(VAR_0);
 struct stm32_adc_priv *VAR_2 = FUNC_9(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2->vdda);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0, "vdda enable failed %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_6(VAR_2->vdda);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0, "vdda get voltage failed, %d\n", VAR_3);
  goto err_vdda_disable;
 }
 VAR_2->vdda_uv = VAR_3;

 VAR_3 = FUNC_8(VAR_2, VAR_0);
 if (VAR_3 < 0)
  goto err_vdda_disable;

 VAR_3 = FUNC_5(VAR_2->vref);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0, "vref enable failed\n");
  goto err_switches_dis;
 }

 if (VAR_2->bclk) {
  VAR_3 = FUNC_1(VAR_2->bclk);
  if (VAR_3 < 0) {
   FUNC_2(VAR_0, "bus clk enable failed\n");
   goto err_regulator_disable;
  }
 }

 if (VAR_2->aclk) {
  VAR_3 = FUNC_1(VAR_2->aclk);
  if (VAR_3 < 0) {
   FUNC_2(VAR_0, "adc clk enable failed\n");
   goto err_bclk_disable;
  }
 }

 FUNC_10(VAR_2->ccr_bak, VAR_2->common.base + VAR_2->cfg->regs->ccr);

 return 0;

err_bclk_disable:
 if (VAR_2->bclk)
  FUNC_0(VAR_2->bclk);
err_regulator_disable:
 FUNC_4(VAR_2->vref);
err_switches_dis:
 FUNC_7(VAR_2);
err_vdda_disable:
 FUNC_4(VAR_2->vdda);

 return VAR_3;
}
