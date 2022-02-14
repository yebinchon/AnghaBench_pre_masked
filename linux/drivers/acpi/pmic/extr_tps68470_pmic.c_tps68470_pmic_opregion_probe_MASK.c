
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps68470_pmic_opregion {int lock; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int *,struct tps68470_pmic_opregion*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct regmap* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*) ;
 struct tps68470_pmic_opregion* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_12)
{
 struct regmap *VAR_13 = FUNC_4(VAR_12->dev.parent);
 acpi_handle VAR_14 = FUNC_1(VAR_12->dev.parent);
 struct device *VAR_15 = &VAR_12->dev;
 struct tps68470_pmic_opregion *VAR_16;
 acpi_status VAR_17;

 if (!VAR_15 || !VAR_13) {
  FUNC_5(VAR_15, "dev or regmap is NULL\n");
  return -VAR_0;
 }

 if (!VAR_14) {
  FUNC_5(VAR_15, "acpi handle is NULL\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_6(VAR_15, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 FUNC_8(&VAR_16->lock);
 VAR_16->regmap = VAR_13;

 VAR_17 = FUNC_2(VAR_14,
          VAR_6,
          VAR_10,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_17))
  goto out_mutex_destroy;

 VAR_17 = FUNC_2(VAR_14,
          VAR_7,
          VAR_11,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_17))
  goto out_remove_power_handler;

 VAR_17 = FUNC_2(VAR_14,
          VAR_5,
          VAR_9,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_17))
  goto out_remove_vr_val_handler;

 VAR_17 = FUNC_2(VAR_14,
          VAR_4,
          VAR_8,
          ((void*)0), VAR_16);
 if (FUNC_0(VAR_17))
  goto out_remove_clk_handler;

 return 0;

out_remove_clk_handler:
 FUNC_3(VAR_14, VAR_5,
       VAR_9);
out_remove_vr_val_handler:
 FUNC_3(VAR_14, VAR_7,
       VAR_11);
out_remove_power_handler:
 FUNC_3(VAR_14, VAR_6,
       VAR_10);
out_mutex_destroy:
 FUNC_7(&VAR_16->lock);
 return -VAR_1;
}
