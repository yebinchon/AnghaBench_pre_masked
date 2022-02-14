
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct device* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int base; int can_sleep; int dbg_show; struct device* parent; int ngpio; int set; int get; int direction_output; int direction_input; int label; } ;
struct crystalcove_gpio {TYPE_1__ chip; int regmap; int buslock; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 struct intel_soc_pmic* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,struct crystalcove_gpio*) ;
 struct crystalcove_gpio* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct crystalcove_gpio*) ;
 int FUNC_9 (int,int *,int ,int ,int ,struct crystalcove_gpio*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_14)
{
 int VAR_15 = FUNC_7(VAR_14, 0);
 struct crystalcove_gpio *VAR_16;
 int VAR_17;
 struct device *VAR_18 = VAR_14->dev.parent;
 struct intel_soc_pmic *VAR_19 = FUNC_0(VAR_18);

 if (VAR_15 < 0)
  return VAR_15;

 VAR_16 = FUNC_3(&VAR_14->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_8(VAR_14, VAR_16);

 FUNC_6(&VAR_16->buslock);
 VAR_16->chip.label = VAR_5;
 VAR_16->chip.direction_input = VAR_7;
 VAR_16->chip.direction_output = VAR_8;
 VAR_16->chip.get = VAR_9;
 VAR_16->chip.set = VAR_11;
 VAR_16->chip.base = -1;
 VAR_16->chip.ngpio = VAR_0;
 VAR_16->chip.can_sleep = 1;
 VAR_16->chip.parent = VAR_18;
 VAR_16->chip.dbg_show = VAR_6;
 VAR_16->regmap = VAR_19->regmap;

 VAR_17 = FUNC_2(&VAR_14->dev, &VAR_16->chip, VAR_16);
 if (VAR_17) {
  FUNC_1(&VAR_14->dev, "add gpio chip error: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_4(&VAR_16->chip, &VAR_12, 0,
        VAR_13, VAR_4);

 VAR_17 = FUNC_9(VAR_15, ((void*)0), VAR_10,
          VAR_3, VAR_5, VAR_16);

 if (VAR_17) {
  FUNC_1(&VAR_14->dev, "request irq failed: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_5(&VAR_16->chip, &VAR_12, VAR_15);

 return 0;
}
