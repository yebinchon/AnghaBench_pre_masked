
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct regmap_bus {int dummy; } ;
struct regmap {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct device*,struct regmap_bus const*,void*,struct regmap_config const*,struct lock_class_key*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct regmap**) ;
 struct regmap** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct regmap**) ;

struct regmap *FUNC_6(struct device *VAR_3,
      const struct regmap_bus *VAR_4,
      void *VAR_5,
      const struct regmap_config *VAR_6,
      struct lock_class_key *VAR_7,
      const char *VAR_8)
{
 struct regmap **VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_2, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8);
 if (!FUNC_1(VAR_10)) {
  *VAR_9 = VAR_10;
  FUNC_3(VAR_3, VAR_9);
 } else {
  FUNC_5(VAR_9);
 }

 return VAR_10;
}
