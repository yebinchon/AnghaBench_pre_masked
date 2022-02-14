
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {int irq; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1,
     const struct i2c_device_id *VAR_2)
{
 struct regmap *VAR_3;
 const char *VAR_4 = ((void*)0);

 VAR_3 = FUNC_4(VAR_1, &VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_3(&VAR_1->dev, "Failed to initialize i2c regmap\n");
  return FUNC_1(VAR_3);
 }

 if (VAR_2)
  VAR_4 = VAR_2->name;

 return FUNC_2(&VAR_1->dev, VAR_3, VAR_1->irq, VAR_4);
}
