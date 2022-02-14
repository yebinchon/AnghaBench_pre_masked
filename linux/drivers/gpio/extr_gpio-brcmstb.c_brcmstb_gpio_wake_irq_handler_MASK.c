
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmstb_gpio_priv {int parent_wake_irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_0(int VAR_2, void *VAR_3)
{
 struct brcmstb_gpio_priv *VAR_4 = VAR_3;

 if (!VAR_4 || VAR_2 != VAR_4->parent_wake_irq)
  return VAR_1;


 return VAR_0;
}
