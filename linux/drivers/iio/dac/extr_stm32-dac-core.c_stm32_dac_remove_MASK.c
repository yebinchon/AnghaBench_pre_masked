
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dac_priv {int vref; int pclk; } ;
struct stm32_dac_common {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct stm32_dac_common* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 struct stm32_dac_priv* FUNC_4 (struct stm32_dac_common*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct stm32_dac_common *VAR_1 = FUNC_2(VAR_0);
 struct stm32_dac_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(&VAR_0->dev);
 FUNC_0(VAR_2->pclk);
 FUNC_3(VAR_2->vref);

 return 0;
}
