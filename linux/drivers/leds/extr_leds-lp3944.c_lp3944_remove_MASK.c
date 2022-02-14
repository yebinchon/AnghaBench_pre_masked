
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp3944_platform_data {int leds_size; } ;
struct lp3944_data {TYPE_1__* leds; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int type; int ldev; } ;





 struct lp3944_platform_data* FUNC_0 (int *) ;
 struct lp3944_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lp3944_platform_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct lp3944_data *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->leds_size; VAR_3++)
  switch (VAR_2->leds[VAR_3].type) {
  case 130:
  case 129:
   FUNC_2(&VAR_2->leds[VAR_3].ldev);
   break;

  case 128:
  default:
   break;
  }

 return 0;
}
