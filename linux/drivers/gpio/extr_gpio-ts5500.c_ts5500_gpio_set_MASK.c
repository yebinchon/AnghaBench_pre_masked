
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {int lock; struct ts5500_dio* pinout; } ;
struct ts5500_dio {int value_addr; int value_mask; } ;
struct gpio_chip {int dummy; } ;


 struct ts5500_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct ts5500_priv *VAR_3 = FUNC_0(VAR_0);
 const struct ts5500_dio VAR_4 = VAR_3->pinout[VAR_1];
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);
 if (VAR_2)
  FUNC_4(VAR_4.value_mask, VAR_4.value_addr);
 else
  FUNC_3(VAR_4.value_mask, VAR_4.value_addr);
 FUNC_2(&VAR_3->lock, VAR_5);
}
