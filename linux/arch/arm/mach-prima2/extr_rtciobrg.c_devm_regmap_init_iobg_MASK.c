
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct regmap_bus {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 struct regmap* FUNC_0 (struct device*,struct regmap_bus const*,struct device*,struct regmap_config const*) ;
 struct regmap_bus VAR_0 ;

struct regmap *FUNC_1(struct device *VAR_1,
        const struct regmap_config *VAR_2)
{
 const struct regmap_bus *VAR_3 = &VAR_0;

 return FUNC_0(VAR_1, VAR_3, VAR_1, VAR_2);
}
