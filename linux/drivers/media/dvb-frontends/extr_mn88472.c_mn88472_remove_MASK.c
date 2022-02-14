
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn88472_dev {int * regmap; int * client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct mn88472_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mn88472_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct mn88472_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_4(VAR_1->regmap[2]);
 FUNC_2(VAR_1->client[2]);

 FUNC_4(VAR_1->regmap[1]);
 FUNC_2(VAR_1->client[1]);

 FUNC_4(VAR_1->regmap[0]);

 FUNC_3(VAR_1);

 return 0;
}
