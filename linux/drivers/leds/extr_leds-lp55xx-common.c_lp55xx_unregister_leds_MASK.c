
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {int cdev; } ;
struct lp55xx_chip {int num_leds; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct lp55xx_led *VAR_0, struct lp55xx_chip *VAR_1)
{
 int VAR_2;
 struct lp55xx_led *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_leds; VAR_2++) {
  VAR_3 = VAR_0 + VAR_2;
  FUNC_0(&VAR_3->cdev);
 }
}
