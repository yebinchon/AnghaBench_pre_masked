
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp8860_led {int lock; TYPE_1__* client; scalar_t__ regulator; scalar_t__ enable_gpio; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct lp8860_led* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct lp8860_led *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->enable_gpio)
  FUNC_1(VAR_1->enable_gpio, 0);

 if (VAR_1->regulator) {
  VAR_2 = FUNC_4(VAR_1->regulator);
  if (VAR_2)
   FUNC_0(&VAR_1->client->dev,
    "Failed to disable regulator\n");
 }

 FUNC_3(&VAR_1->lock);

 return 0;
}
