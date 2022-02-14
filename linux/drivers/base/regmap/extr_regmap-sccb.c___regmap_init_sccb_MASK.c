
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct regmap_bus {int dummy; } ;
struct regmap {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct i2c_client {int dev; } ;


 struct regmap* FUNC_0 (struct regmap_bus const*) ;
 scalar_t__ FUNC_1 (struct regmap_bus const*) ;
 struct regmap* FUNC_2 (int *,struct regmap_bus const*,int *,struct regmap_config const*,struct lock_class_key*,char const*) ;
 struct regmap_bus* FUNC_3 (struct i2c_client*,struct regmap_config const*) ;

struct regmap *FUNC_4(struct i2c_client *VAR_0,
      const struct regmap_config *VAR_1,
      struct lock_class_key *VAR_2,
      const char *VAR_3)
{
 const struct regmap_bus *VAR_4 = FUNC_3(VAR_0, VAR_1);

 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 return FUNC_2(&VAR_0->dev, VAR_4, &VAR_0->dev, VAR_1,
        VAR_2, VAR_3);
}
