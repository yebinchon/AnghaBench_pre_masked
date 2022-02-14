
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct intel_pmic_opregion_data {int (* get_power ) (struct regmap*,int,int,int*) ;int (* update_power ) (struct regmap*,int,int,int) ;int power_table_count; int power_table; } ;
struct intel_pmic_opregion {int lock; struct intel_pmic_opregion_data* data; struct regmap* regmap; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;
 int FUNC_3 (struct regmap*,int,int,int*) ;
 int FUNC_4 (struct regmap*,int,int,int) ;

__attribute__((used)) static acpi_status FUNC_5(u32 VAR_6,
  acpi_physical_address VAR_7, u32 VAR_8, u64 *VAR_9,
  void *VAR_10, void *VAR_11)
{
 struct intel_pmic_opregion *VAR_12 = VAR_11;
 struct regmap *VAR_13 = VAR_12->regmap;
 struct intel_pmic_opregion_data *VAR_14 = VAR_12->data;
 int VAR_15, VAR_16, VAR_17;

 if (VAR_8 != 32 || !VAR_9)
  return VAR_2;

 if (VAR_6 == VAR_1 && !(*VAR_9 == 0 || *VAR_9 == 1))
  return VAR_2;

 VAR_17 = FUNC_2(VAR_7, VAR_14->power_table,
      VAR_14->power_table_count, &VAR_15, &VAR_16);
 if (VAR_17 == -VAR_5)
  return VAR_2;

 FUNC_0(&VAR_12->lock);

 VAR_17 = VAR_6 == VAR_0 ?
  VAR_14->get_power(VAR_13, VAR_15, VAR_16, VAR_9) :
  VAR_14->update_power(VAR_13, VAR_15, VAR_16, *VAR_9 == 1);

 FUNC_1(&VAR_12->lock);

 return VAR_17 ? VAR_3 : VAR_4;
}
