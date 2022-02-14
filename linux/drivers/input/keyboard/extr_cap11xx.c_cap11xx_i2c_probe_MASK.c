
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct i2c_device_id {size_t driver_data; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
struct cap11xx_priv {TYPE_2__* idev; scalar_t__* keycodes; int regmap; } ;
struct cap11xx_hw_model {int num_channels; unsigned int product_id; int num_leds; } ;
struct TYPE_5__ {unsigned int vendor; unsigned int product; unsigned int version; int bustype; } ;
struct TYPE_6__ {char* name; int keycodesize; int keycodemax; int close; int open; TYPE_1__ id; scalar_t__* keycode; int * keybit; int * evbit; } ;


 size_t FUNC_0 (struct cap11xx_hw_model*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 struct cap11xx_hw_model* VAR_20 ;
 int FUNC_6 (struct device*,struct cap11xx_priv*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (struct cap11xx_priv*,int) ;
 int VAR_24 ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*,unsigned int) ;
 int FUNC_10 (struct device*) ;
 TYPE_2__* FUNC_11 (struct device*) ;
 struct cap11xx_priv* FUNC_12 (struct device*,int ,int ) ;
 int FUNC_13 (struct i2c_client*,int *) ;
 int FUNC_14 (struct device*,int,int *,int ,int ,int ,struct cap11xx_priv*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,struct cap11xx_priv*) ;
 int FUNC_18 (struct device_node*,int ) ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_25 ;
 scalar_t__ FUNC_20 (struct device_node*,char*) ;
 int FUNC_21 (struct device_node*,char*,int*) ;
 int FUNC_22 (struct device_node*,char*,scalar_t__*,int) ;
 int FUNC_23 (int ,int ,unsigned int*) ;
 int FUNC_24 (int ,int ,int ,int) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (struct cap11xx_priv*,int ,int) ;

__attribute__((used)) static int FUNC_27(struct i2c_client *VAR_26,
        const struct i2c_device_id *VAR_27)
{
 struct device *VAR_28 = &VAR_26->dev;
 struct cap11xx_priv *VAR_29;
 struct device_node *VAR_30;
 const struct cap11xx_hw_model *VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35 = 0;
 unsigned int VAR_36, VAR_37;
 u32 VAR_38;

 if (VAR_27->driver_data >= FUNC_0(VAR_20)) {
  FUNC_8(VAR_28, "Invalid device ID %lu\n", VAR_27->driver_data);
  return -VAR_11;
 }

 VAR_31 = &VAR_20[VAR_27->driver_data];
 if (!VAR_31 || !VAR_31->num_channels) {
  FUNC_8(VAR_28, "Invalid device configuration\n");
  return -VAR_11;
 }

 VAR_29 = FUNC_12(VAR_28,
       FUNC_26(VAR_29, VAR_25, VAR_31->num_channels),
       VAR_16);
 if (!VAR_29)
  return -VAR_12;

 VAR_29->regmap = FUNC_13(VAR_26, &VAR_23);
 if (FUNC_2(VAR_29->regmap))
  return FUNC_3(VAR_29->regmap);

 VAR_33 = FUNC_23(VAR_29->regmap, VAR_8, &VAR_36);
 if (VAR_33)
  return VAR_33;

 if (VAR_36 != VAR_31->product_id) {
  FUNC_8(VAR_28, "Product ID: Got 0x%02x, expected 0x%02x\n",
   VAR_36, VAR_31->product_id);
  return -VAR_13;
 }

 VAR_33 = FUNC_23(VAR_29->regmap, VAR_7, &VAR_36);
 if (VAR_33)
  return VAR_33;

 if (VAR_36 != VAR_1) {
  FUNC_8(VAR_28, "Manufacturer ID: Got 0x%02x, expected 0x%02x\n",
   VAR_36, VAR_1);
  return -VAR_13;
 }

 VAR_33 = FUNC_23(VAR_29->regmap, VAR_10, &VAR_37);
 if (VAR_33 < 0)
  return VAR_33;

 FUNC_9(VAR_28, "CAP11XX detected, revision 0x%02x\n", VAR_37);
 VAR_30 = VAR_28->of_node;

 if (!FUNC_21(VAR_30, "microchip,sensor-gain", &VAR_38)) {
  if (FUNC_19(VAR_38) && VAR_38 <= 8)
   VAR_35 = FUNC_15(VAR_38);
  else
   FUNC_8(VAR_28, "Invalid sensor-gain value %d\n", VAR_38);
 }

 if (FUNC_20(VAR_30, "microchip,irq-active-high")) {
  VAR_33 = FUNC_24(VAR_29->regmap, VAR_2,
        VAR_3, 0);
  if (VAR_33)
   return VAR_33;
 }


 for (VAR_32 = 0; VAR_32 < VAR_31->num_channels; VAR_32++)
  VAR_29->keycodes[VAR_32] = VAR_18 + VAR_32;

 FUNC_22(VAR_30, "linux,keycodes",
       VAR_29->keycodes, VAR_31->num_channels);

 VAR_33 = FUNC_24(VAR_29->regmap, VAR_4,
       VAR_5,
       VAR_35 << VAR_6);
 if (VAR_33)
  return VAR_33;


 VAR_33 = FUNC_25(VAR_29->regmap, VAR_9, 0);
 if (VAR_33)
  return VAR_33;

 VAR_29->idev = FUNC_11(VAR_28);
 if (!VAR_29->idev)
  return -VAR_12;

 VAR_29->idev->name = "CAP11XX capacitive touch sensor";
 VAR_29->idev->id.bustype = VAR_0;
 VAR_29->idev->evbit[0] = FUNC_1(VAR_14);

 if (FUNC_20(VAR_30, "autorepeat"))
  FUNC_5(VAR_15, VAR_29->idev->evbit);

 for (VAR_32 = 0; VAR_32 < VAR_31->num_channels; VAR_32++)
  FUNC_5(VAR_29->keycodes[VAR_32], VAR_29->idev->keybit);

 FUNC_4(VAR_19, VAR_29->idev->keybit);

 VAR_29->idev->keycode = VAR_29->keycodes;
 VAR_29->idev->keycodesize = sizeof(VAR_29->keycodes[0]);
 VAR_29->idev->keycodemax = VAR_31->num_channels;

 VAR_29->idev->id.vendor = VAR_1;
 VAR_29->idev->id.product = VAR_31->product_id;
 VAR_29->idev->id.version = VAR_37;

 VAR_29->idev->open = VAR_22;
 VAR_29->idev->close = VAR_21;

 VAR_33 = FUNC_6(VAR_28, VAR_29, VAR_31->num_leds);
 if (VAR_33)
  return VAR_33;

 FUNC_17(VAR_29->idev, VAR_29);





 FUNC_7(VAR_29, 1);

 VAR_33 = FUNC_16(VAR_29->idev);
 if (VAR_33)
  return VAR_33;

 VAR_34 = FUNC_18(VAR_30, 0);
 if (!VAR_34) {
  FUNC_8(VAR_28, "Unable to parse or map IRQ\n");
  return -VAR_13;
 }

 VAR_33 = FUNC_14(VAR_28, VAR_34, ((void*)0), VAR_24,
       VAR_17, FUNC_10(VAR_28), VAR_29);
 if (VAR_33)
  return VAR_33;

 return 0;
}
