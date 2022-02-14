
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_2__ {scalar_t__ label; } ;
struct cxd2820r_priv {int * regmap; int * client; TYPE_1__ gpio_chip; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct cxd2820r_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cxd2820r_priv*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct cxd2820r_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");





 FUNC_5(VAR_1->regmap[1]);
 FUNC_3(VAR_1->client[1]);

 FUNC_5(VAR_1->regmap[0]);

 FUNC_4(VAR_1);

 return 0;
}
