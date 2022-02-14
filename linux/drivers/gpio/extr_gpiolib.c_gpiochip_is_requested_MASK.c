
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {char const* label; int flags; } ;
struct gpio_chip {unsigned int ngpio; TYPE_1__* gpiodev; } ;
struct TYPE_2__ {struct gpio_desc* descs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

const char *FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct gpio_desc *VAR_3;

 if (VAR_2 >= VAR_1->ngpio)
  return ((void*)0);

 VAR_3 = &VAR_1->gpiodev->descs[VAR_2];

 if (FUNC_0(VAR_0, &VAR_3->flags) == 0)
  return ((void*)0);
 return VAR_3->label;
}
