
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int of_gpio_n_cells; int of_node; int names; scalar_t__ of_xlate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_chip*,int ) ;
 int FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (struct gpio_chip*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct gpio_chip *VAR_3)
{
 int VAR_4;

 if (!VAR_3->of_node)
  return 0;

 if (!VAR_3->of_xlate) {
  VAR_3->of_gpio_n_cells = 2;
  VAR_3->of_xlate = VAR_2;
 }

 if (VAR_3->of_gpio_n_cells > VAR_1)
  return -VAR_0;

 FUNC_4(VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3->names)
  FUNC_0(VAR_3,
        FUNC_2(VAR_3->of_node));

 FUNC_6(VAR_3->of_node);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_7(VAR_3->of_node);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
