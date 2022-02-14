
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_hog {scalar_t__ chip_label; int list; } ;
struct gpio_chip {int dummy; } ;


 struct gpio_chip* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gpio_chip*,struct gpiod_hog*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct gpiod_hog *VAR_2)
{
 struct gpio_chip *VAR_3;
 struct gpiod_hog *VAR_4;

 FUNC_3(&VAR_1);

 for (VAR_4 = &VAR_2[0]; VAR_4->chip_label; VAR_4++) {
  FUNC_2(&VAR_4->list, &VAR_0);





  VAR_3 = FUNC_0(VAR_4->chip_label);
  if (VAR_3)
   FUNC_1(VAR_3, VAR_4);
 }

 FUNC_4(&VAR_1);
}
