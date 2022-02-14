
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {unsigned int ngpio; TYPE_2__* gpiodev; } ;
struct TYPE_4__ {TYPE_1__* descs; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

bool FUNC_1(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1->ngpio)
  return 0;

 return !FUNC_0(VAR_0, &VAR_1->gpiodev->descs[VAR_2].flags);
}
