
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int dev; } ;
struct sunxi_rsb_ctx {int dummy; } ;
struct regmap_config {int dummy; } ;
struct regmap {int dummy; } ;
struct lock_class_key {int dummy; } ;


 struct regmap* FUNC_0 (struct sunxi_rsb_ctx*) ;
 scalar_t__ FUNC_1 (struct sunxi_rsb_ctx*) ;
 struct regmap* FUNC_2 (int *,int *,struct sunxi_rsb_ctx*,struct regmap_config const*,struct lock_class_key*,char const*) ;
 int VAR_0 ;
 struct sunxi_rsb_ctx* FUNC_3 (struct sunxi_rsb_device*,struct regmap_config const*) ;

struct regmap *FUNC_4(struct sunxi_rsb_device *VAR_1,
         const struct regmap_config *VAR_2,
         struct lock_class_key *VAR_3,
         const char *VAR_4)
{
 struct sunxi_rsb_ctx *VAR_5 = FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_5))
  return FUNC_0(VAR_5);

 return FUNC_2(&VAR_1->dev, &VAR_0, VAR_5, VAR_2,
      VAR_3, VAR_4);
}
