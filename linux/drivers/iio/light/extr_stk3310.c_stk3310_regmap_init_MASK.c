
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk3310_data {struct regmap* regmap; struct i2c_client* client; } ;
struct regmap {int dummy; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct stk3310_data *VAR_9)
{
 struct regmap *VAR_10;
 struct i2c_client *VAR_11;

 VAR_11 = VAR_9->client;
 VAR_10 = FUNC_4(VAR_11, &VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_3(&VAR_11->dev, "regmap initialization failed.\n");
  return FUNC_1(VAR_10);
 }
 VAR_9->regmap = VAR_10;

 FUNC_2(VAR_7);
 FUNC_2(VAR_0);
 FUNC_2(VAR_5);
 FUNC_2(VAR_1);
 FUNC_2(VAR_6);
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 FUNC_2(VAR_2);

 return 0;
}
