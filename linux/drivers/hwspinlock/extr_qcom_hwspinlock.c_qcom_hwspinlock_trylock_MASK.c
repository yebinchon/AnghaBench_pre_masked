
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct regmap_field {int dummy; } ;
struct hwspinlock {struct regmap_field* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct regmap_field*,scalar_t__*) ;
 int FUNC_1 (struct regmap_field*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hwspinlock *VAR_1)
{
 struct regmap_field *VAR_2 = VAR_1->priv;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return VAR_3 == VAR_0;
}
