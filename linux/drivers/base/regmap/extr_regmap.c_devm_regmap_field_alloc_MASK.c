
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {int dummy; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regmap_field* FUNC_0 (int ) ;
 int VAR_1 ;
 struct regmap_field* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct regmap_field*,struct regmap*,struct reg_field) ;

struct regmap_field *FUNC_3(struct device *VAR_2,
  struct regmap *VAR_3, struct reg_field VAR_4)
{
 struct regmap_field *VAR_5 = FUNC_1(VAR_2,
     sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_5, VAR_3, VAR_4);

 return VAR_5;

}
