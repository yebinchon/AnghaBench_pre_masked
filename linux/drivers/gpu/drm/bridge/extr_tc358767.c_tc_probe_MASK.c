
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; int * funcs; } ;
struct TYPE_3__ {char* name; int transfer; struct device* dev; } ;
struct tc_data {int hpd_pin; int have_irq; int rev; int assr; TYPE_2__ bridge; TYPE_1__ aux; struct device* dev; void* regmap; void* refclk; void* reset_gpio; void* sd_gpio; int panel; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {int irq; struct device dev; } ;


 int FUNC_0 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*,...) ;
 void* FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct device*,char*,int ) ;
 struct tc_data* FUNC_9 (struct device*,int,int ) ;
 void* FUNC_10 (struct i2c_client*,int *) ;
 int FUNC_11 (struct device*,int ,int *,int ,int ,char*,struct tc_data*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int,int ,int *,int *) ;
 int FUNC_15 (void*,int) ;
 int FUNC_16 (struct i2c_client*,struct tc_data*) ;
 int FUNC_17 (int ,char*,int*) ;
 int FUNC_18 (void*,int ,int*) ;
 int FUNC_19 (void*,int,int,int) ;
 int FUNC_20 (void*,int,int) ;
 int FUNC_21 (struct tc_data*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_22 (int,int) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_23, const struct i2c_device_id *VAR_24)
{
 struct device *VAR_25 = &VAR_23->dev;
 struct tc_data *VAR_26;
 int VAR_27;

 VAR_26 = FUNC_9(VAR_25, sizeof(*VAR_26), VAR_8);
 if (!VAR_26)
  return -VAR_7;

 VAR_26->dev = VAR_25;


 VAR_27 = FUNC_14(VAR_25->of_node, 2, 0, &VAR_26->panel, ((void*)0));
 if (VAR_27 && VAR_27 != -VAR_6)
  return VAR_27;


 VAR_26->sd_gpio = FUNC_8(VAR_25, "shutdown", VAR_9);
 if (FUNC_3(VAR_26->sd_gpio))
  return FUNC_4(VAR_26->sd_gpio);

 if (VAR_26->sd_gpio) {
  FUNC_15(VAR_26->sd_gpio, 0);
  FUNC_22(5000, 10000);
 }


 VAR_26->reset_gpio = FUNC_8(VAR_25, "reset", VAR_10);
 if (FUNC_3(VAR_26->reset_gpio))
  return FUNC_4(VAR_26->reset_gpio);

 if (VAR_26->reset_gpio) {
  FUNC_15(VAR_26->reset_gpio, 1);
  FUNC_22(5000, 10000);
 }

 VAR_26->refclk = FUNC_7(VAR_25, "ref");
 if (FUNC_3(VAR_26->refclk)) {
  VAR_27 = FUNC_4(VAR_26->refclk);
  FUNC_6(VAR_25, "Failed to get refclk: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_26->regmap = FUNC_10(VAR_23, &VAR_22);
 if (FUNC_3(VAR_26->regmap)) {
  VAR_27 = FUNC_4(VAR_26->regmap);
  FUNC_6(VAR_25, "Failed to initialize regmap: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_17(VAR_25->of_node, "toshiba,hpd-pin",
       &VAR_26->hpd_pin);
 if (VAR_27) {
  VAR_26->hpd_pin = -VAR_6;
 } else {
  if (VAR_26->hpd_pin < 0 || VAR_26->hpd_pin > 1) {
   FUNC_6(VAR_25, "failed to parse HPD number\n");
   return VAR_27;
  }
 }

 if (VAR_23->irq > 0) {

  FUNC_20(VAR_26->regmap, VAR_12, VAR_15);

  VAR_27 = FUNC_11(VAR_25, VAR_23->irq,
      ((void*)0), VAR_21,
      VAR_16,
      "tc358767-irq", VAR_26);
  if (VAR_27) {
   FUNC_6(VAR_25, "failed to register dp interrupt\n");
   return VAR_27;
  }

  VAR_26->have_irq = 1;
 }

 VAR_27 = FUNC_18(VAR_26->regmap, VAR_18, &VAR_26->rev);
 if (VAR_27) {
  FUNC_6(VAR_26->dev, "can not read device ID: %d\n", VAR_27);
  return VAR_27;
 }

 if ((VAR_26->rev != 0x6601) && (VAR_26->rev != 0x6603)) {
  FUNC_6(VAR_26->dev, "invalid device ID: 0x%08x\n", VAR_26->rev);
  return -VAR_0;
 }

 VAR_26->assr = (VAR_26->rev == 0x6601);

 if (!VAR_26->reset_gpio) {






  FUNC_19(VAR_26->regmap, VAR_17,
    VAR_4 | VAR_1 | VAR_2 | VAR_5 | VAR_3,
    0);
  FUNC_19(VAR_26->regmap, VAR_17,
    VAR_4 | VAR_1 | VAR_2 | VAR_5 | VAR_3,
    VAR_4 | VAR_1 | VAR_2 | VAR_5 | VAR_3);
  FUNC_22(5000, 10000);
 }

 if (VAR_26->hpd_pin >= 0) {
  u32 VAR_28 = VAR_26->hpd_pin == 0 ? VAR_13 : VAR_14;
  u32 VAR_29 = FUNC_1(VAR_26->hpd_pin) | FUNC_2(VAR_26->hpd_pin);


  FUNC_20(VAR_26->regmap, VAR_28,
        FUNC_5(VAR_26->refclk) * 2 / 1000);

  FUNC_20(VAR_26->regmap, VAR_11, FUNC_0(VAR_26->hpd_pin));

  if (VAR_26->have_irq) {

   FUNC_19(VAR_26->regmap, VAR_12, VAR_29, VAR_29);
  }
 }

 VAR_27 = FUNC_21(VAR_26);
 if (VAR_27)
  return VAR_27;


 VAR_26->aux.name = "TC358767 AUX i2c adapter";
 VAR_26->aux.dev = VAR_26->dev;
 VAR_26->aux.transfer = VAR_19;
 VAR_27 = FUNC_13(&VAR_26->aux);
 if (VAR_27)
  return VAR_27;

 VAR_26->bridge.funcs = &VAR_20;
 VAR_26->bridge.of_node = VAR_25->of_node;
 FUNC_12(&VAR_26->bridge);

 FUNC_16(VAR_23, VAR_26);

 return 0;
}
