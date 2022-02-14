
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {int irq; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,char const*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
         const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;
 const char *VAR_6 = ((void*)0);
 bool VAR_7 =
  FUNC_5(VAR_3->adapter, VAR_0) ||
  FUNC_5(VAR_3->adapter,
     VAR_1);

 VAR_5 = FUNC_4(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_3(&VAR_3->dev, "Failed to initialize i2c regmap\n");
  return FUNC_1(VAR_5);
 }

 if (VAR_4)
  VAR_6 = VAR_4->name;

 return FUNC_2(&VAR_3->dev, VAR_5, VAR_3->irq, VAR_6,
           VAR_7);
}
