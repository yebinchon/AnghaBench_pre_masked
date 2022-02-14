
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stpmic1_onkey {scalar_t__ irq_falling; scalar_t__ irq_rising; struct input_dev* input_dev; } ;
struct stpmic1 {int regmap; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct input_dev {char* name; char* phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct stpmic1* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int) ;
 scalar_t__ FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,unsigned int*) ;
 struct input_dev* FUNC_7 (struct device*) ;
 struct stpmic1_onkey* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int *,int ,int ,int ,struct stpmic1_onkey*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,struct stpmic1_onkey*) ;
 int FUNC_14 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct stpmic1 *VAR_16 = FUNC_2(VAR_15->dev.parent);
 struct device *VAR_17 = &VAR_15->dev;
 struct input_dev *VAR_18;
 struct stpmic1_onkey *VAR_19;
 unsigned int VAR_20, VAR_21 = 0;
 int VAR_22;

 VAR_19 = FUNC_8(VAR_17, sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->irq_falling = FUNC_12(VAR_15, "onkey-falling");
 if (VAR_19->irq_falling < 0)
  return VAR_19->irq_falling;

 VAR_19->irq_rising = FUNC_12(VAR_15, "onkey-rising");
 if (VAR_19->irq_rising < 0)
  return VAR_19->irq_rising;

 if (!FUNC_6(VAR_17, "power-off-time-sec", &VAR_20)) {
  if (VAR_20 > 0 && VAR_20 <= 16) {
   FUNC_0(VAR_17, "power-off-time=%d seconds\n", VAR_20);
   VAR_21 |= VAR_10;
   VAR_21 |= ((16 - VAR_20) & VAR_12);
  } else {
   FUNC_1(VAR_17, "power-off-time-sec out of range\n");
   return -VAR_0;
  }
 }

 if (FUNC_5(VAR_17, "st,onkey-clear-cc-flag"))
  VAR_21 |= VAR_8;

 VAR_22 = FUNC_14(VAR_16->regmap, VAR_7,
       VAR_11, VAR_21);
 if (VAR_22) {
  FUNC_1(VAR_17, "PKEY_TURNOFF_CR write failed: %d\n", VAR_22);
  return VAR_22;
 }

 if (FUNC_5(VAR_17, "st,onkey-pu-inactive")) {
  VAR_22 = FUNC_14(VAR_16->regmap, VAR_6,
        VAR_9,
        VAR_9);
  if (VAR_22) {
   FUNC_1(VAR_17, "ONKEY Pads configuration failed: %d\n",
    VAR_22);
   return VAR_22;
  }
 }

 VAR_18 = FUNC_7(VAR_17);
 if (!VAR_18) {
  FUNC_1(VAR_17, "Can't allocate Pwr Onkey Input Device\n");
  return -VAR_1;
 }

 VAR_18->name = "pmic_onkey";
 VAR_18->phys = "pmic_onkey/input0";

 FUNC_11(VAR_18, VAR_2, VAR_5);

 VAR_19->input_dev = VAR_18;


 VAR_22 = FUNC_9(VAR_17, VAR_19->irq_falling, ((void*)0),
       VAR_13, VAR_4,
       FUNC_3(VAR_17), VAR_19);
 if (VAR_22) {
  FUNC_1(VAR_17, "Can't get IRQ Onkey Falling: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_9(VAR_17, VAR_19->irq_rising, ((void*)0),
       VAR_14, VAR_4,
       FUNC_3(VAR_17), VAR_19);
 if (VAR_22) {
  FUNC_1(VAR_17, "Can't get IRQ Onkey Rising: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_10(VAR_18);
 if (VAR_22) {
  FUNC_1(VAR_17, "Can't register power button: %d\n", VAR_22);
  return VAR_22;
 }

 FUNC_13(VAR_15, VAR_19);
 FUNC_4(VAR_17, 1);

 return 0;
}
