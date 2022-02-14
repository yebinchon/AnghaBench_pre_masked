
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc_priv {scalar_t__* irq; int domain; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1,
     struct stm32_adc_priv *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(FUNC_2(VAR_2->domain, VAR_3));
 FUNC_1(VAR_2->domain);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->irq[VAR_4] < 0)
   continue;
  FUNC_3(VAR_2->irq[VAR_4], ((void*)0));
 }
}
