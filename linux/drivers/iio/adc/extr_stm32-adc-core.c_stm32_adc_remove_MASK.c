
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc_priv {int dummy; } ;
struct stm32_adc_common {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct stm32_adc_common* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct stm32_adc_priv*) ;
 struct stm32_adc_priv* FUNC_8 (struct stm32_adc_common*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct stm32_adc_common *VAR_1 = FUNC_1(VAR_0);
 struct stm32_adc_priv *VAR_2 = FUNC_8(VAR_1);

 FUNC_3(&VAR_0->dev);
 FUNC_0(&VAR_0->dev);
 FUNC_7(VAR_0, VAR_2);
 FUNC_6(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
