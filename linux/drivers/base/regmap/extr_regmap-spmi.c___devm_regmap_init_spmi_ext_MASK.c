
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_device {int dev; } ;
struct regmap_config {int dummy; } ;
struct regmap {int dummy; } ;
struct lock_class_key {int dummy; } ;


 struct regmap* FUNC_0 (int *,int *,struct spmi_device*,struct regmap_config const*,struct lock_class_key*,char const*) ;
 int VAR_0 ;

struct regmap *FUNC_1(struct spmi_device *VAR_1,
        const struct regmap_config *VAR_2,
        struct lock_class_key *VAR_3,
        const char *VAR_4)
{
 return FUNC_0(&VAR_1->dev, &VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4);
}
