
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {struct ts5500_dio* pinout; } ;
struct ts5500_dio {int value_mask; int value_addr; } ;
struct gpio_chip {int dummy; } ;


 struct ts5500_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ts5500_priv *VAR_2 = FUNC_0(VAR_0);
 const struct ts5500_dio VAR_3 = VAR_2->pinout[VAR_1];

 return !!(FUNC_1(VAR_3.value_addr) & VAR_3.value_mask);
}
