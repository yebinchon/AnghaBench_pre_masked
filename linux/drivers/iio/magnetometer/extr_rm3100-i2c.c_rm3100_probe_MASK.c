
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (int *,struct regmap*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct regmap *VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 return FUNC_3(&VAR_1->dev, VAR_2, VAR_1->irq);
}
