
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int reg_bits; int val_bits; } ;
struct regmap_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regmap_bus const* FUNC_0 (int ) ;
 struct regmap_bus const VAR_1 ;
 struct regmap_bus const VAR_2 ;
 struct regmap_bus const VAR_3 ;

__attribute__((used)) static const struct regmap_bus *FUNC_1(struct device *VAR_4,
     const struct regmap_config *VAR_5)
{
 if (VAR_5->reg_bits == 8 && VAR_5->val_bits == 8)
  return &VAR_3;

 if (VAR_5->reg_bits == 8 && VAR_5->val_bits == 16)
  return &VAR_2;

 if (VAR_5->reg_bits == 16 && VAR_5->val_bits == 16)
  return &VAR_1;

 return FUNC_0(-VAR_0);
}
