
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; int name; } ;
struct TYPE_2__ {int notifier_call; } ;
struct axp288_extcon_info {int* irq; int role_work; scalar_t__ role_sw; TYPE_1__ id_nb; scalar_t__ id_extcon; int regmap_irqc; scalar_t__ edev; int vbus_attach; int previous_cable; int regmap; struct device* dev; } ;
struct axp20x_dev {int regmap_irqc; int regmap; } ;
struct acpi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct acpi_device* FUNC_3 (char*,int *,int) ;
 int FUNC_4 (struct acpi_device*) ;
 int VAR_7 ;
 int FUNC_5 (struct axp288_extcon_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct axp288_extcon_info*) ;
 int FUNC_7 (struct axp288_extcon_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct device*,char*,...) ;
 struct axp20x_dev* FUNC_9 (int ) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,int ,struct axp288_extcon_info*) ;
 scalar_t__ FUNC_12 (struct device*,int ) ;
 int FUNC_13 (struct device*,scalar_t__) ;
 int FUNC_14 (struct device*,scalar_t__,TYPE_1__*) ;
 struct axp288_extcon_info* FUNC_15 (struct device*,int,int ) ;
 int FUNC_16 (struct device*,int,int *,int ,int,int ,struct axp288_extcon_info*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,int) ;
 int FUNC_20 (struct platform_device*,struct axp288_extcon_info*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_24 (struct device*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_13)
{
 struct axp288_extcon_info *VAR_14;
 struct axp20x_dev *VAR_15 = FUNC_9(VAR_13->dev.parent);
 struct device *VAR_16 = &VAR_13->dev;
 struct acpi_device *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_14 = FUNC_15(&VAR_13->dev, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->dev = &VAR_13->dev;
 VAR_14->regmap = VAR_15->regmap;
 VAR_14->regmap_irqc = VAR_15->regmap_irqc;
 VAR_14->previous_cable = VAR_3;
 FUNC_0(&VAR_14->role_work, VAR_11);
 VAR_14->id_nb.notifier_call = VAR_8;

 FUNC_20(VAR_13, VAR_14);

 VAR_14->role_sw = FUNC_24(VAR_16);
 if (FUNC_1(VAR_14->role_sw))
  return FUNC_2(VAR_14->role_sw);
 if (VAR_14->role_sw) {
  VAR_18 = FUNC_11(VAR_16, VAR_10, VAR_14);
  if (VAR_18)
   return VAR_18;

  VAR_17 = FUNC_3("INT3496", ((void*)0), -1);
  if (VAR_17) {
   VAR_14->id_extcon = FUNC_17(FUNC_4(VAR_17));
   FUNC_21(&VAR_17->dev);
   if (!VAR_14->id_extcon)
    return -VAR_1;

   FUNC_10(VAR_16, "controlling USB role\n");
  } else {
   FUNC_10(VAR_16, "controlling USB role based on Vbus presence\n");
  }
 }

 VAR_14->vbus_attach = FUNC_7(VAR_14);

 FUNC_6(VAR_14);


 VAR_14->edev = FUNC_12(&VAR_13->dev,
           VAR_7);
 if (FUNC_1(VAR_14->edev)) {
  FUNC_8(&VAR_13->dev, "failed to allocate memory for extcon\n");
  return FUNC_2(VAR_14->edev);
 }


 VAR_18 = FUNC_13(&VAR_13->dev, VAR_14->edev);
 if (VAR_18) {
  FUNC_8(&VAR_13->dev, "failed to register extcon device\n");
  return VAR_18;
 }

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
  VAR_20 = FUNC_19(VAR_13, VAR_19);
  if (VAR_20 < 0)
   return VAR_20;

  VAR_14->irq[VAR_19] = FUNC_23(VAR_14->regmap_irqc, VAR_20);
  if (VAR_14->irq[VAR_19] < 0) {
   FUNC_8(&VAR_13->dev,
    "failed to get virtual interrupt=%d\n", VAR_20);
   VAR_18 = VAR_14->irq[VAR_19];
   return VAR_18;
  }

  VAR_18 = FUNC_16(&VAR_13->dev, VAR_14->irq[VAR_19],
    ((void*)0), VAR_9,
    VAR_6 | VAR_5,
    VAR_13->name, VAR_14);
  if (VAR_18) {
   FUNC_8(&VAR_13->dev, "failed to request interrupt=%d\n",
       VAR_14->irq[VAR_19]);
   return VAR_18;
  }
 }

 if (VAR_14->id_extcon) {
  VAR_18 = FUNC_14(VAR_16, VAR_14->id_extcon,
       &VAR_14->id_nb);
  if (VAR_18)
   return VAR_18;
 }


 if (VAR_14->role_sw) {
  FUNC_22(VAR_12, &VAR_14->role_work);
  FUNC_18(&VAR_14->role_work);
 }


 FUNC_5(VAR_14);

 return 0;
}
