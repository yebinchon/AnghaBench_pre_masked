
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct pmic8xxx_pwrkey {int key_press_irq; struct regmap* regmap; int shutdown_fn; } ;
struct TYPE_8__ {int parent; int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
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
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct regmap* FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct input_dev* FUNC_4 (TYPE_1__*) ;
 struct pmic8xxx_pwrkey* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ,char*,struct input_dev*) ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,char*,int*) ;
 int FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,struct pmic8xxx_pwrkey*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct regmap*,int ,unsigned int*) ;
 int FUNC_16 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_13)
{
 struct input_dev *VAR_14;
 int VAR_15 = FUNC_13(VAR_13, 0);
 int VAR_16 = FUNC_13(VAR_13, 1);
 int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 struct regmap *VAR_20;
 struct pmic8xxx_pwrkey *VAR_21;
 u32 VAR_22;
 bool VAR_23;

 if (FUNC_12(VAR_13->dev.of_node, "debounce", &VAR_22))
  VAR_22 = 15625;


 if (VAR_22 > VAR_10 * 2 || VAR_22 < VAR_10 / 64) {
  FUNC_1(&VAR_13->dev, "invalid power key trigger delay\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_11(VAR_13->dev.of_node, "pull-up");

 VAR_20 = FUNC_2(VAR_13->dev.parent, ((void*)0));
 if (!VAR_20) {
  FUNC_1(&VAR_13->dev, "failed to locate regmap for the device\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_5(&VAR_13->dev, sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_2;

 VAR_21->shutdown_fn = FUNC_10(&VAR_13->dev);
 VAR_21->regmap = VAR_20;
 VAR_21->key_press_irq = VAR_16;

 VAR_14 = FUNC_4(&VAR_13->dev);
 if (!VAR_14) {
  FUNC_0(&VAR_13->dev, "Can't allocate power button\n");
  return -VAR_2;
 }

 FUNC_9(VAR_14, VAR_3, VAR_6);

 VAR_14->name = "pmic8xxx_pwrkey";
 VAR_14->phys = "pmic8xxx_pwrkey/input0";

 VAR_18 = (VAR_22 << 6) / VAR_10;
 VAR_18 = FUNC_7(VAR_18);

 VAR_17 = FUNC_15(VAR_20, VAR_7, &VAR_19);
 if (VAR_17 < 0) {
  FUNC_1(&VAR_13->dev, "failed reading PON_CNTL_1 err=%d\n", VAR_17);
  return VAR_17;
 }

 VAR_19 &= ~VAR_9;
 VAR_19 |= (VAR_18 & VAR_9);
 if (VAR_23)
  VAR_19 |= VAR_8;
 else
  VAR_19 &= ~VAR_8;

 VAR_17 = FUNC_16(VAR_20, VAR_7, VAR_19);
 if (VAR_17 < 0) {
  FUNC_1(&VAR_13->dev, "failed writing PON_CNTL_1 err=%d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_6(&VAR_13->dev, VAR_16, VAR_11,
          VAR_5,
          "pmic8xxx_pwrkey_press", VAR_14);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "Can't get %d IRQ for pwrkey: %d\n",
   VAR_16, VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_6(&VAR_13->dev, VAR_15, VAR_12,
          VAR_5,
          "pmic8xxx_pwrkey_release", VAR_14);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "Can't get %d IRQ for pwrkey: %d\n",
   VAR_15, VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_8(VAR_14);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "Can't register power key: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_14(VAR_13, VAR_21);
 FUNC_3(&VAR_13->dev, 1);

 return 0;
}
