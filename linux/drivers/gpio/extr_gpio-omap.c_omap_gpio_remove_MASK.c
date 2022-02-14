
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpio_bank {int dbck; scalar_t__ dbck_flag; int chip; int nb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gpio_bank* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct gpio_bank *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->nb);
 FUNC_2(&VAR_1->chip);
 FUNC_4(&VAR_0->dev);
 if (VAR_1->dbck_flag)
  FUNC_0(VAR_1->dbck);

 return 0;
}
