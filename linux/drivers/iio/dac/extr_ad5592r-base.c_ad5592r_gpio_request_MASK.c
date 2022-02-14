
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct ad5592r_state {int gpio_map; int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct ad5592r_state* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct ad5592r_state *VAR_3 = FUNC_2(VAR_1);

 if (!(VAR_3->gpio_map & FUNC_0(VAR_2))) {
  FUNC_1(VAR_3->dev, "GPIO %d is reserved by alternate function\n",
   VAR_2);
  return -VAR_0;
 }

 return 0;
}
