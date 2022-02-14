
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_led_priv_data {TYPE_1__* pdev; struct mlxreg_core_platform_data* pdata; } ;
struct led_classdev {int brightness; int dev; int flags; int blink_set; int brightness_get; int (* brightness_set_blocking ) (struct led_classdev*,int) ;int max_brightness; int name; } ;
struct mlxreg_led_data {struct mlxreg_core_data* data; int led_cdev_name; int base_color; struct mlxreg_led_priv_data* data_parent; struct led_classdev led_cdev; } ;
struct mlxreg_core_platform_data {int counter; int regmap; struct mlxreg_core_data* data; } ;
struct mlxreg_core_data {int bit; char* label; int reg; int mask; scalar_t__ capability; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*,char*,int ,int ) ;
 struct mlxreg_led_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,struct led_classdev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct led_classdev*,int) ;
 int FUNC_5 (int ,scalar_t__,int*) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct mlxreg_led_priv_data *VAR_11)
{
 struct mlxreg_core_platform_data *VAR_12 = VAR_11->pdata;
 struct mlxreg_core_data *VAR_13 = VAR_12->data;
 struct mlxreg_led_data *VAR_14;
 struct led_classdev *VAR_15;
 enum led_brightness VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19;

 for (VAR_18 = 0; VAR_18 < VAR_12->counter; VAR_18++, VAR_13++) {
  VAR_14 = FUNC_2(&VAR_11->pdev->dev, sizeof(*VAR_14),
     VAR_1);
  if (!VAR_14)
   return -VAR_0;

  if (VAR_13->capability) {
   VAR_19 = FUNC_5(VAR_12->regmap, VAR_13->capability,
       &VAR_17);
   if (VAR_19) {
    FUNC_0(&VAR_11->pdev->dev, "Failed to query capability register\n");
    return VAR_19;
   }
   if (!(VAR_17 & VAR_13->bit))
    continue;





   VAR_13->bit &= VAR_6;
  }

  VAR_15 = &VAR_14->led_cdev;
  VAR_14->data_parent = VAR_11;
  if (FUNC_7(VAR_13->label, "red") ||
      FUNC_7(VAR_13->label, "orange")) {
   VAR_16 = VAR_3;
   VAR_14->base_color = VAR_8;
  } else if (FUNC_7(VAR_13->label, "amber")) {
   VAR_16 = VAR_3;
   VAR_14->base_color = VAR_5;
  } else {
   VAR_16 = VAR_3;
   VAR_14->base_color = VAR_7;
  }
  FUNC_6(VAR_14->led_cdev_name, "%s:%s", "mlxreg",
   VAR_13->label);
  VAR_15->name = VAR_14->led_cdev_name;
  VAR_15->brightness = VAR_16;
  VAR_15->max_brightness = VAR_4;
  VAR_15->brightness_set_blocking =
      FUNC_4;
  VAR_15->brightness_get = VAR_10;
  VAR_15->blink_set = VAR_9;
  VAR_15->flags = VAR_2;
  VAR_14->data = VAR_13;
  VAR_19 = FUNC_3(&VAR_11->pdev->dev, VAR_15);
  if (VAR_19)
   return VAR_19;

  if (VAR_15->brightness)
   FUNC_4(VAR_15,
        VAR_15->brightness);
  FUNC_1(VAR_15->dev, "label: %s, mask: 0x%02x, offset:0x%02x\n",
    VAR_13->label, VAR_13->mask, VAR_13->reg);
 }

 return 0;
}
