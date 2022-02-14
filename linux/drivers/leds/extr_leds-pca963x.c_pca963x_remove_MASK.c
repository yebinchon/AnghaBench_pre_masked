
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pca963x {TYPE_2__* leds; TYPE_1__* chipdef; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int led_cdev; } ;
struct TYPE_3__ {int n_leds; } ;


 struct pca963x* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct pca963x *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->chipdef->n_leds; VAR_2++)
  FUNC_1(&VAR_1->leds[VAR_2].led_cdev);

 return 0;
}
