
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct mrfld_extcon_data {unsigned int id; int edev; struct regmap* regmap; struct device* dev; } ;
struct intel_soc_pmic {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct intel_soc_pmic* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ) ;
 struct mrfld_extcon_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int *,int ,int,int ,struct mrfld_extcon_data*) ;
 int VAR_11 ;
 int FUNC_7 (struct mrfld_extcon_data*,int ,int ) ;
 int VAR_12 ;
 int FUNC_8 (struct mrfld_extcon_data*) ;
 int FUNC_9 (struct mrfld_extcon_data*,int ,int ) ;
 int FUNC_10 (struct mrfld_extcon_data*,int) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct mrfld_extcon_data*) ;
 int FUNC_13 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct intel_soc_pmic *VAR_15 = FUNC_2(VAR_14->parent);
 struct regmap *VAR_16 = VAR_15->regmap;
 struct mrfld_extcon_data *VAR_17;
 unsigned int VAR_18;
 int VAR_19, VAR_20;

 VAR_19 = FUNC_11(VAR_13, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 = FUNC_5(VAR_14, sizeof(*VAR_17), VAR_8);
 if (!VAR_17)
  return -VAR_7;

 VAR_17->dev = VAR_14;
 VAR_17->regmap = VAR_16;

 VAR_17->edev = FUNC_3(VAR_14, VAR_11);
 if (FUNC_0(VAR_17->edev))
  return -VAR_7;

 VAR_20 = FUNC_4(VAR_14, VAR_17->edev);
 if (VAR_20 < 0) {
  FUNC_1(VAR_14, "can't register extcon device: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_6(VAR_14, VAR_19, ((void*)0), VAR_12,
     VAR_9 | VAR_10, VAR_13->name,
     VAR_17);
 if (VAR_20) {
  FUNC_1(VAR_14, "can't register IRQ handler: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_13(VAR_16, VAR_1, &VAR_18);
 if (VAR_20) {
  FUNC_1(VAR_14, "can't read PMIC ID: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_17->id = VAR_18;

 VAR_20 = FUNC_10(VAR_17, 1);
 if (VAR_20)
  return VAR_20;


 FUNC_8(VAR_17);

 FUNC_7(VAR_17, VAR_4, VAR_2);
 FUNC_7(VAR_17, VAR_3, VAR_0);

 FUNC_9(VAR_17, VAR_5, VAR_6);

 FUNC_12(VAR_13, VAR_17);

 return 0;
}
