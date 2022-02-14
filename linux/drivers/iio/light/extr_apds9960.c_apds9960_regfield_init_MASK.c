
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct apds9960_data {void* reg_enable_pxs; void* reg_enable_ges; void* reg_enable_als; void* reg_int_pxs; void* reg_int_ges; void* reg_int_als; struct regmap* regmap; TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,struct regmap*,int ) ;

__attribute__((used)) static int FUNC_4(struct apds9960_data *VAR_6)
{
 struct device *VAR_7 = &VAR_6->client->dev;
 struct regmap *VAR_8 = VAR_6->regmap;

 VAR_6->reg_int_als = FUNC_3(VAR_7, VAR_8,
      VAR_3);
 if (FUNC_0(VAR_6->reg_int_als)) {
  FUNC_2(VAR_7, "INT ALS reg field init failed\n");
  return FUNC_1(VAR_6->reg_int_als);
 }

 VAR_6->reg_int_ges = FUNC_3(VAR_7, VAR_8,
      VAR_4);
 if (FUNC_0(VAR_6->reg_int_ges)) {
  FUNC_2(VAR_7, "INT gesture reg field init failed\n");
  return FUNC_1(VAR_6->reg_int_ges);
 }

 VAR_6->reg_int_pxs = FUNC_3(VAR_7, VAR_8,
      VAR_5);
 if (FUNC_0(VAR_6->reg_int_pxs)) {
  FUNC_2(VAR_7, "INT pxs reg field init failed\n");
  return FUNC_1(VAR_6->reg_int_pxs);
 }

 VAR_6->reg_enable_als = FUNC_3(VAR_7, VAR_8,
      VAR_0);
 if (FUNC_0(VAR_6->reg_enable_als)) {
  FUNC_2(VAR_7, "Enable ALS reg field init failed\n");
  return FUNC_1(VAR_6->reg_enable_als);
 }

 VAR_6->reg_enable_ges = FUNC_3(VAR_7, VAR_8,
      VAR_1);
 if (FUNC_0(VAR_6->reg_enable_ges)) {
  FUNC_2(VAR_7, "Enable gesture reg field init failed\n");
  return FUNC_1(VAR_6->reg_enable_ges);
 }

 VAR_6->reg_enable_pxs = FUNC_3(VAR_7, VAR_8,
      VAR_2);
 if (FUNC_0(VAR_6->reg_enable_pxs)) {
  FUNC_2(VAR_7, "Enable PXS reg field init failed\n");
  return FUNC_1(VAR_6->reg_enable_pxs);
 }

 return 0;
}
