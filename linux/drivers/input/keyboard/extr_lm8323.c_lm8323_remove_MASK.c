
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm8323_chip {TYPE_1__* pwm; TYPE_2__* client; int idev; } ;
struct i2c_client {int irq; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cdev; scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct lm8323_chip*) ;
 struct lm8323_chip* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lm8323_chip*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct lm8323_chip *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_1(VAR_1->irq);
 FUNC_2(VAR_1->irq, VAR_2);

 FUNC_4(VAR_2->idev);

 FUNC_0(&VAR_2->client->dev, &VAR_0);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  if (VAR_2->pwm[VAR_3].enabled)
   FUNC_6(&VAR_2->pwm[VAR_3].cdev);

 FUNC_5(VAR_2);

 return 0;
}
