
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_desc {int flags; TYPE_2__* gdev; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct TYPE_3__ {int can_sleep; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_desc const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gpio_desc const*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(const struct gpio_desc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 FUNC_1(VAR_1->gdev->chip->can_sleep);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if (FUNC_3(VAR_0, &VAR_1->flags))
  VAR_2 = !VAR_2;

 return VAR_2;
}
