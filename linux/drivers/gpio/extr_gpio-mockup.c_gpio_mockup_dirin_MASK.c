
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_chip {int lock; TYPE_1__* lines; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dir; } ;


 int VAR_0 ;
 struct gpio_mockup_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct gpio_mockup_chip *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->lock);
 VAR_3->lines[VAR_2].dir = VAR_0;
 FUNC_2(&VAR_3->lock);

 return 0;
}
