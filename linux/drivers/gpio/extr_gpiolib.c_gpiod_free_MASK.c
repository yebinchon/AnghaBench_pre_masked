
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; int owner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct gpio_desc *VAR_1)
{
 if (VAR_1 && VAR_1->gdev && FUNC_1(VAR_1)) {
  FUNC_2(VAR_1->gdev->owner);
  FUNC_3(&VAR_1->gdev->dev);
 } else {
  FUNC_0(VAR_0);
 }
}
