
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_desc {TYPE_2__* gdev; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct TYPE_3__ {int can_sleep; } ;


 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gpio_desc*,int) ;

void FUNC_3(struct gpio_desc *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->gdev->chip->can_sleep);
 FUNC_2(VAR_0, VAR_1);
}
