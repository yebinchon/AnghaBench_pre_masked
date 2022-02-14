
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_device {int dummy; } ;
struct regmap_config {int val_bits; int reg_bits; } ;
struct regmap_bus {int dummy; } ;


 int VAR_0 ;
 struct regmap_bus const* FUNC_0 (int ) ;
 struct regmap_bus const VAR_1 ;

__attribute__((used)) static const struct regmap_bus *FUNC_1(struct slim_device *VAR_2,
     const struct regmap_config *VAR_3)
{
 if (VAR_3->val_bits == 8 && VAR_3->reg_bits == 16)
  return &VAR_1;

 return FUNC_0(-VAR_0);
}
