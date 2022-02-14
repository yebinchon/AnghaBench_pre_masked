
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {int lock; struct ts5500_dio* pinout; } ;
struct ts5500_dio {int value_addr; int value_mask; int control_addr; int control_mask; int no_input; scalar_t__ no_output; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ts5500_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct ts5500_priv *VAR_4 = FUNC_0(VAR_1);
 const struct ts5500_dio VAR_5 = VAR_4->pinout[VAR_2];
 unsigned long VAR_6;

 if (VAR_5.no_output)
  return -VAR_0;

 FUNC_1(&VAR_4->lock, VAR_6);
 if (!VAR_5.no_input)
  FUNC_4(VAR_5.control_mask, VAR_5.control_addr);

 if (VAR_3)
  FUNC_4(VAR_5.value_mask, VAR_5.value_addr);
 else
  FUNC_3(VAR_5.value_mask, VAR_5.value_addr);
 FUNC_2(&VAR_4->lock, VAR_6);

 return 0;
}
