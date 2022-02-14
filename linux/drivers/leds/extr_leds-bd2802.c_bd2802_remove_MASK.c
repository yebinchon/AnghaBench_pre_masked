
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct bd2802_led {TYPE_2__* client; scalar_t__ adf_on; TYPE_1__* pdata; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int reset_gpio; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct bd2802_led*) ;
 int FUNC_2 (struct bd2802_led*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 struct bd2802_led* FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct bd2802_led *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_4(VAR_2->pdata->reset_gpio, 0);
 FUNC_2(VAR_2);
 if (VAR_2->adf_on)
  FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_3(&VAR_2->client->dev, VAR_0[VAR_3]);

 return 0;
}
