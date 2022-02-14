
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct intel_pmic_opregion {int regmap; TYPE_1__* data; scalar_t__ lpat_table; } ;
struct TYPE_2__ {int (* update_aux ) (int ,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct intel_pmic_opregion*,int,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct intel_pmic_opregion *VAR_2, int VAR_3,
       u32 VAR_4, u64 *VAR_5)
{
 int VAR_6;

 if (VAR_4 == VAR_0)
  return FUNC_1(VAR_2, VAR_3, VAR_5);

 if (!VAR_2->data->update_aux)
  return -VAR_1;

 if (VAR_2->lpat_table) {
  VAR_6 = FUNC_0(VAR_2->lpat_table, *VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 } else {
  VAR_6 = *VAR_5;
 }

 return VAR_2->data->update_aux(VAR_2->regmap, VAR_3, VAR_6);
}
