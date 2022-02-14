
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_chip {int lock; TYPE_1__* lines; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dir; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_mockup_chip*,unsigned int,int) ;
 struct gpio_mockup_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 struct gpio_mockup_chip *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(&VAR_4->lock);
 VAR_4->lines[VAR_2].dir = VAR_0;
 FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_3(&VAR_4->lock);

 return 0;
}
