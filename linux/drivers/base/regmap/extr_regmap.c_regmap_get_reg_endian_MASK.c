
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int reg_format_endian; } ;
struct regmap_bus {int reg_format_endian_default; } ;
typedef enum regmap_endian { ____Placeholder_regmap_endian } regmap_endian ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum regmap_endian FUNC_0(const struct regmap_bus *VAR_2,
     const struct regmap_config *VAR_3)
{
 enum regmap_endian VAR_4;


 VAR_4 = VAR_3->reg_format_endian;


 if (VAR_4 != VAR_1)
  return VAR_4;


 if (VAR_2 && VAR_2->reg_format_endian_default)
  VAR_4 = VAR_2->reg_format_endian_default;


 if (VAR_4 != VAR_1)
  return VAR_4;


 return VAR_0;
}
