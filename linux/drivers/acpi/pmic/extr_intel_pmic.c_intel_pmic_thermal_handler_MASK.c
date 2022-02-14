
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_pmic_opregion_data {int thermal_table_count; int thermal_table; } ;
struct intel_pmic_opregion {int lock; struct intel_pmic_opregion_data* data; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;
 int FUNC_3 (struct intel_pmic_opregion*,int,int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct intel_pmic_opregion*,int,int,int,int *) ;
 int FUNC_8 (struct intel_pmic_opregion*,int,int,int *) ;

__attribute__((used)) static acpi_status FUNC_9(u32 VAR_5,
  acpi_physical_address VAR_6, u32 VAR_7, u64 *VAR_8,
  void *VAR_9, void *VAR_10)
{
 struct intel_pmic_opregion *VAR_11 = VAR_10;
 struct intel_pmic_opregion_data *VAR_12 = VAR_11->data;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_7 != 32 || !VAR_8)
  return VAR_0;

 VAR_15 = FUNC_2(VAR_6, VAR_12->thermal_table,
      VAR_12->thermal_table_count, &VAR_13, &VAR_14);
 if (VAR_15 == -VAR_4)
  return VAR_0;

 FUNC_0(&VAR_11->lock);

 if (FUNC_6(VAR_6))
  VAR_15 = FUNC_8(VAR_11, VAR_13, VAR_5, VAR_8);
 else if (FUNC_4(VAR_6))
  VAR_15 = FUNC_3(VAR_11, VAR_13, VAR_5, VAR_8);
 else if (FUNC_5(VAR_6))
  VAR_15 = FUNC_7(VAR_11, VAR_13, VAR_14,
      VAR_5, VAR_8);
 else
  VAR_15 = -VAR_3;

 FUNC_1(&VAR_11->lock);

 if (VAR_15 < 0) {
  if (VAR_15 == -VAR_3)
   return VAR_0;
  else
   return VAR_1;
 }

 return VAR_2;
}
