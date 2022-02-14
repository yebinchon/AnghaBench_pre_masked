
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int ngpio; TYPE_1__* gpiodev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__* descs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ngpio; VAR_2++) {
  if (FUNC_1(VAR_0, &VAR_1->gpiodev->descs[VAR_2].flags))
   FUNC_0(&VAR_1->gpiodev->descs[VAR_2]);
 }
}
