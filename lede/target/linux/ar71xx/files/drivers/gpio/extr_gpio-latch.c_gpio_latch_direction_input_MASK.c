
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_latch_chip {int * gpios; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gpio_latch_chip*,int) ;
 int FUNC_2 (struct gpio_latch_chip*,int) ;
 struct gpio_latch_chip* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int
FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_latch_chip *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2, 0);
 VAR_3 = FUNC_0(VAR_2->gpios[VAR_1]);
 FUNC_2(VAR_2, 0);

 return VAR_3;
}
