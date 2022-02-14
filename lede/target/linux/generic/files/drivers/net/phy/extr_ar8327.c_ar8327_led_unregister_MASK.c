
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ar8327_led {scalar_t__ mode; int led_work; TYPE_1__ cdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ar8327_led *VAR_2)
{
 if (VAR_2->mode == VAR_0)
  FUNC_1(VAR_2->cdev.dev, &VAR_1);

 FUNC_2(&VAR_2->cdev);
 FUNC_0(&VAR_2->led_work);
}
