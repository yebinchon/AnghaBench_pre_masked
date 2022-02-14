
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int val_bits; int reg_bits; } ;
struct regmap_bus {int dummy; } ;
struct i2c_client {int adapter; int dev; } ;


 int VAR_0 ;
 struct regmap_bus const* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,struct regmap_config const*) ;
 struct regmap_bus const VAR_5 ;
 struct regmap_bus const VAR_6 ;
 struct regmap_bus const VAR_7 ;
 struct regmap_bus const VAR_8 ;
 struct regmap_bus const VAR_9 ;

__attribute__((used)) static const struct regmap_bus *FUNC_3(struct i2c_client *VAR_10,
     const struct regmap_config *VAR_11)
{
 if (FUNC_1(VAR_10->adapter, VAR_1))
  return &VAR_5;
 else if (VAR_11->val_bits == 8 && VAR_11->reg_bits == 8 &&
   FUNC_1(VAR_10->adapter,
      VAR_3))
  return &VAR_6;
 else if (VAR_11->val_bits == 16 && VAR_11->reg_bits == 8 &&
   FUNC_1(VAR_10->adapter,
      VAR_4))
  switch (FUNC_2(&VAR_10->dev, ((void*)0), VAR_11)) {
  case 128:
   return &VAR_8;
  case 129:
   return &VAR_9;
  default:
   break;
  }
 else if (VAR_11->val_bits == 8 && VAR_11->reg_bits == 8 &&
   FUNC_1(VAR_10->adapter,
      VAR_2))
  return &VAR_7;

 return FUNC_0(-VAR_0);
}
