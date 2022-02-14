
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_mockup_chip {int lock; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct gpio_mockup_chip*,unsigned int) ;
 struct gpio_mockup_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gpio_mockup_chip *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_2(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
