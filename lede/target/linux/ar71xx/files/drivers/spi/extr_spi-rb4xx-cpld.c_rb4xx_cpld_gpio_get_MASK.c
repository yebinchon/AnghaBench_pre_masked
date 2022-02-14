
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb4xx_cpld {unsigned int config; int lock; } ;
struct gpio_chip {int dummy; } ;


 struct rb4xx_cpld* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct rb4xx_cpld *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = (VAR_2->config >> VAR_1) & 1;
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
