
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_mockup_chip {TYPE_1__* lines; } ;
struct TYPE_2__ {int value; } ;



__attribute__((used)) static int FUNC_0(struct gpio_mockup_chip *VAR_0,
        unsigned int VAR_1)
{
 return VAR_0->lines[VAR_1].value;
}
