
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc32xx_gpio_chip {TYPE_1__* gpio_grp; } ;
struct TYPE_2__ {int inp_state; } ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct lpc32xx_gpio_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct lpc32xx_gpio_chip *VAR_0,
 unsigned VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_0->gpio_grp->inp_state);





 return FUNC_0(VAR_2, VAR_1);
}
