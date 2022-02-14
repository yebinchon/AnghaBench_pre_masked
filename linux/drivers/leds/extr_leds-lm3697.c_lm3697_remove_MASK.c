
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3697 {int lock; TYPE_1__* client; scalar_t__ regulator; scalar_t__ enable_gpio; int regmap; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct lm3697* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct lm3697 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3->regmap, VAR_1,
     VAR_0, 0);
 if (VAR_4) {
  FUNC_0(&VAR_3->client->dev, "Failed to disable the device\n");
  return VAR_4;
 }

 if (VAR_3->enable_gpio)
  FUNC_1(VAR_3->enable_gpio, 0);

 if (VAR_3->regulator) {
  VAR_4 = FUNC_5(VAR_3->regulator);
  if (VAR_4)
   FUNC_0(&VAR_3->client->dev,
    "Failed to disable regulator\n");
 }

 FUNC_3(&VAR_3->lock);

 return 0;
}
