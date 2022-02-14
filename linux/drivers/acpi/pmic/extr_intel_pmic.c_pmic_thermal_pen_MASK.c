
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct intel_pmic_opregion_data {int (* get_policy ) (struct regmap*,int,int,int*) ;int (* update_policy ) (struct regmap*,int,int,int) ;} ;
struct intel_pmic_opregion {struct regmap* regmap; struct intel_pmic_opregion_data* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int,int,int*) ;
 int FUNC_1 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct intel_pmic_opregion *VAR_3, int VAR_4,
       int VAR_5, u32 VAR_6, u64 *VAR_7)
{
 struct intel_pmic_opregion_data *VAR_8 = VAR_3->data;
 struct regmap *VAR_9 = VAR_3->regmap;

 if (!VAR_8->get_policy || !VAR_8->update_policy)
  return -VAR_2;

 if (VAR_6 == VAR_0)
  return VAR_8->get_policy(VAR_9, VAR_4, VAR_5, VAR_7);

 if (*VAR_7 != 0 && *VAR_7 != 1)
  return -VAR_1;

 return VAR_8->update_policy(VAR_9, VAR_4, VAR_5, *VAR_7);
}
