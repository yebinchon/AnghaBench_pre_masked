
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpc32xx_gpio_chip {TYPE_1__* gpio_grp; } ;
struct TYPE_2__ {int dir_set; int dir_clr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct lpc32xx_gpio_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_gpio_chip *VAR_0,
 unsigned VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_1(VAR_0, VAR_3, VAR_0->gpio_grp->dir_clr);
 else
  FUNC_1(VAR_0, VAR_3, VAR_0->gpio_grp->dir_set);
}
