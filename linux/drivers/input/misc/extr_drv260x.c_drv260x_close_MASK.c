
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct drv260x_data {int enable_gpio; TYPE_1__* client; int regmap; int work; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ) ;
 struct drv260x_data* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_2)
{
 struct drv260x_data *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_3->work);

 VAR_4 = FUNC_4(VAR_3->regmap, VAR_0, VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_3->client->dev,
   "Failed to enter standby mode: %d\n", VAR_4);

 FUNC_2(VAR_3->enable_gpio, 0);
}
