
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp_gpio {TYPE_1__* pdev; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,unsigned int) ;
 struct lp_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (struct gpio_chip*,unsigned int,int ) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_7, unsigned VAR_8)
{
 struct lp_gpio *VAR_9 = FUNC_2(VAR_7);
 unsigned long VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_4);
 unsigned long VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_5);
 unsigned long VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_3);

 FUNC_6(&VAR_9->pdev->dev);


 if (!(FUNC_3(VAR_12) & FUNC_0(VAR_8 % 32))) {
  FUNC_1(&VAR_9->pdev->dev, "gpio %d reserved for ACPI\n", VAR_8);
  return -VAR_0;
 }

 if (!(FUNC_3(VAR_10) & VAR_6))
  return -VAR_1;


 FUNC_5(FUNC_3(VAR_11) & ~VAR_2, VAR_11);


 return 0;
}
