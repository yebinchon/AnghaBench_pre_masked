
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp_gpio {TYPE_1__* pdev; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct gpio_chip*,unsigned int,int ) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct lp_gpio *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);


 FUNC_3(FUNC_1(VAR_5) | VAR_0, VAR_5);

 FUNC_4(&VAR_4->pdev->dev);
}
