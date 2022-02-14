
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts2020_priv {int regmap; int stat_work; int dont_poll; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct ts2020_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct ts2020_priv*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct ts2020_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->dev, "\n");


 if (!VAR_1->dont_poll)
  FUNC_0(&VAR_1->stat_work);

 FUNC_4(VAR_1->regmap);
 FUNC_3(VAR_1);
 return 0;
}
