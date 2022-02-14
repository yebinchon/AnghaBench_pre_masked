
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_chip {TYPE_1__* lines; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int pull; } ;


 int FUNC_0 (struct gpio_mockup_chip*,unsigned int,int ) ;
 struct gpio_mockup_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gpio_mockup_chip *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1, VAR_2->lines[VAR_1].pull);
}
