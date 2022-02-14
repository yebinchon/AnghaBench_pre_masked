
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int val_format_endian; } ;
struct regmap_bus {int val_format_endian_default; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum regmap_endian { ____Placeholder_regmap_endian } regmap_endian ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;

enum regmap_endian FUNC_1(struct device *VAR_4,
      const struct regmap_bus *VAR_5,
      const struct regmap_config *VAR_6)
{
 struct device_node *VAR_7;
 enum regmap_endian VAR_8;


 VAR_8 = VAR_6->val_format_endian;


 if (VAR_8 != VAR_1)
  return VAR_8;


 if (VAR_4 && VAR_4->of_node) {
  VAR_7 = VAR_4->of_node;


  if (FUNC_0(VAR_7, "big-endian"))
   VAR_8 = VAR_0;
  else if (FUNC_0(VAR_7, "little-endian"))
   VAR_8 = VAR_2;
  else if (FUNC_0(VAR_7, "native-endian"))
   VAR_8 = VAR_3;


  if (VAR_8 != VAR_1)
   return VAR_8;
 }


 if (VAR_5 && VAR_5->val_format_endian_default)
  VAR_8 = VAR_5->val_format_endian_default;


 if (VAR_8 != VAR_1)
  return VAR_8;


 return VAR_0;
}
