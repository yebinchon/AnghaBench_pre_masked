
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int val_bits; int reg_bits; } ;
struct regmap_bus {int dummy; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 struct regmap_bus const* FUNC_0 (int ) ;
 struct regmap_bus const VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const struct regmap_bus *FUNC_2(struct i2c_client *VAR_2,
     const struct regmap_config *VAR_3)
{
 if (VAR_3->val_bits == 8 && VAR_3->reg_bits == 8 &&
   FUNC_1(VAR_2->adapter))
  return &VAR_1;

 return FUNC_0(-VAR_0);
}
