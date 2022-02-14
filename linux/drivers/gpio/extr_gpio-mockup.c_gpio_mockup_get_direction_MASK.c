
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_chip {int lock; TYPE_1__* lines; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dir; } ;


 struct gpio_mockup_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gpio_mockup_chip *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = !VAR_2->lines[VAR_1].dir;
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
