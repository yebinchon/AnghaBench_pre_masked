
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base; int can_sleep; int dbg_show; int parent; int ngpio; int set_config; int set; int get; int get_direction; int direction_output; int direction_input; int label; } ;
struct wcove_gpio {int regmap; TYPE_1__ chip; int regmap_irq_chip; struct device* dev; int buslock; } ;
struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct intel_soc_pmic {int regmap; int irq_chip_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct intel_soc_pmic* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct wcove_gpio*) ;
 struct wcove_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int *,int ,int ,int ,struct wcove_gpio*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct wcove_gpio*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,scalar_t__,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_20)
{
 struct intel_soc_pmic *VAR_21;
 struct wcove_gpio *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 struct device *VAR_26;
 VAR_21 = FUNC_1(VAR_20->dev.parent);
 if (!VAR_21)
  return -VAR_0;

 VAR_25 = FUNC_8(VAR_20, 0);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_26 = &VAR_20->dev;

 VAR_22 = FUNC_3(VAR_26, sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->regmap_irq_chip = VAR_21->irq_chip_data;

 FUNC_9(VAR_20, VAR_22);

 FUNC_7(&VAR_22->buslock);
 VAR_22->chip.label = VAR_8;
 VAR_22->chip.direction_input = VAR_12;
 VAR_22->chip.direction_output = VAR_13;
 VAR_22->chip.get_direction = VAR_15;
 VAR_22->chip.get = VAR_14;
 VAR_22->chip.set = VAR_17;
 VAR_22->chip.set_config = VAR_18,
 VAR_22->chip.base = -1;
 VAR_22->chip.ngpio = VAR_9;
 VAR_22->chip.can_sleep = 1;
 VAR_22->chip.parent = VAR_20->dev.parent;
 VAR_22->chip.dbg_show = VAR_11;
 VAR_22->dev = VAR_26;
 VAR_22->regmap = VAR_21->regmap;

 VAR_24 = FUNC_2(VAR_26, &VAR_22->chip, VAR_22);
 if (VAR_24) {
  FUNC_0(VAR_26, "Failed to add gpiochip: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_5(&VAR_22->chip, &VAR_19, 0,
       VAR_10, VAR_7);
 if (VAR_24) {
  FUNC_0(VAR_26, "Failed to add irqchip: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_23 = FUNC_10(VAR_22->regmap_irq_chip, VAR_25);
 if (VAR_23 < 0) {
  FUNC_0(VAR_26, "Failed to get virq by irq %d\n", VAR_25);
  return VAR_23;
 }

 VAR_24 = FUNC_4(VAR_26, VAR_23, ((void*)0),
  VAR_16, VAR_5, VAR_20->name, VAR_22);
 if (VAR_24) {
  FUNC_0(VAR_26, "Failed to request irq %d\n", VAR_23);
  return VAR_24;
 }

 FUNC_6(&VAR_22->chip, &VAR_19, VAR_23);


 VAR_24 = FUNC_11(VAR_22->regmap, VAR_6, VAR_3,
     0x00);
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_11(VAR_22->regmap, VAR_6 + 1, VAR_4,
     0x00);
 if (VAR_24)
  return VAR_24;

 return 0;
}
