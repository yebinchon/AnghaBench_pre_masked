
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct intel_pmic_opregion_data {int dummy; } ;
struct intel_pmic_opregion {int lpat_table; struct intel_pmic_opregion_data* data; struct regmap* regmap; int lock; } ;
struct device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int *,struct intel_pmic_opregion*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct intel_pmic_opregion* FUNC_5 (struct device*,int,int ) ;
 struct intel_pmic_opregion* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct device *VAR_11, acpi_handle VAR_12,
     struct regmap *VAR_13,
     struct intel_pmic_opregion_data *VAR_14)
{
 acpi_status VAR_15;
 struct intel_pmic_opregion *VAR_16;
 int VAR_17;

 if (!VAR_11 || !VAR_13 || !VAR_14)
  return -VAR_0;

 if (!VAR_12)
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_11, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 FUNC_6(&VAR_16->lock);
 VAR_16->regmap = VAR_13;
 VAR_16->lpat_table = FUNC_3(VAR_12);

 VAR_15 = FUNC_1(VAR_12,
          VAR_4,
          VAR_8,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_15)) {
  VAR_17 = -VAR_1;
  goto out_error;
 }

 VAR_15 = FUNC_1(VAR_12,
          VAR_6,
          VAR_10,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_15)) {
  VAR_17 = -VAR_1;
  goto out_remove_power_handler;
 }

 VAR_15 = FUNC_1(VAR_12,
   VAR_5, VAR_9, ((void*)0),
   VAR_16);
 if (FUNC_0(VAR_15)) {
  VAR_17 = -VAR_1;
  goto out_remove_thermal_handler;
 }

 VAR_16->data = VAR_14;
 VAR_7 = VAR_16;
 return 0;

out_remove_thermal_handler:
 FUNC_4(VAR_12, VAR_6,
       VAR_10);

out_remove_power_handler:
 FUNC_4(VAR_12, VAR_4,
       VAR_8);

out_error:
 FUNC_2(VAR_16->lpat_table);
 return VAR_17;
}
