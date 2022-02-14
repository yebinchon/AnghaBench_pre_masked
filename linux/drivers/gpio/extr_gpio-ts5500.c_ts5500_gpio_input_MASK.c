
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {int lock; struct ts5500_dio* pinout; } ;
struct ts5500_dio {int control_addr; int control_mask; scalar_t__ no_output; scalar_t__ no_input; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ts5500_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct ts5500_priv *VAR_3 = FUNC_0(VAR_1);
 const struct ts5500_dio VAR_4 = VAR_3->pinout[VAR_2];
 unsigned long VAR_5;

 if (VAR_4.no_input)
  return -VAR_0;

 if (VAR_4.no_output)
  return 0;

 FUNC_1(&VAR_3->lock, VAR_5);
 FUNC_3(VAR_4.control_mask, VAR_4.control_addr);
 FUNC_2(&VAR_3->lock, VAR_5);

 return 0;
}
