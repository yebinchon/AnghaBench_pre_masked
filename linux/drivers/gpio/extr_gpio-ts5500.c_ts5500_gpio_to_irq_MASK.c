
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {int hwirq; scalar_t__ strap; struct ts5500_dio* pinout; } ;
struct ts5500_dio {int irq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ts5500_priv* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct ts5500_priv *VAR_3 = FUNC_0(VAR_1);
 const struct ts5500_dio *VAR_4 = VAR_3->pinout;
 const struct ts5500_dio VAR_5 = VAR_4[VAR_2];


 if (VAR_5.irq)
  return VAR_5.irq;


 if (VAR_3->strap)
  return VAR_3->hwirq;

 return -VAR_0;
}
