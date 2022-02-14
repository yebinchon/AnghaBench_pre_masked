
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct intel_pmic_opregion {int lpat_table; int regmap; TYPE_1__* data; } ;
struct TYPE_2__ {int (* get_raw_temp ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct intel_pmic_opregion *VAR_1,
     int VAR_2, u64 *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_1->data->get_raw_temp)
  return -VAR_0;

 VAR_4 = VAR_1->data->get_raw_temp(VAR_1->regmap, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_1->lpat_table) {
  *VAR_3 = VAR_4;
  return 0;
 }

 VAR_5 = FUNC_0(VAR_1->lpat_table, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = VAR_5;
 return 0;
}
