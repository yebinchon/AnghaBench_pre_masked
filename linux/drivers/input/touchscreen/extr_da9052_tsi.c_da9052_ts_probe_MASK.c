
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_5__ {TYPE_3__* parent; } ;
struct TYPE_4__ {int version; int vendor; int product; } ;
struct input_dev {char* name; int keybit; int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; } ;
struct da9052_tsi {int stopped; struct da9052* da9052; struct input_dev* dev; int ts_pen_work; } ;
struct da9052 {int dev; } ;


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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct da9052_tsi*) ;
 int FUNC_3 (struct da9052*,int ) ;
 int FUNC_4 (struct da9052*,int ,struct da9052_tsi*) ;
 int FUNC_5 (struct da9052*,int ,int,int ) ;
 int FUNC_6 (struct da9052*,int ,char*,int ,struct da9052_tsi*) ;
 int FUNC_7 (struct da9052_tsi*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ,char*,int) ;
 struct da9052* FUNC_9 (int ) ;
 struct input_dev* FUNC_10 () ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_14 (struct input_dev*,struct da9052_tsi*) ;
 int FUNC_15 (struct da9052_tsi*) ;
 struct da9052_tsi* FUNC_16 (int,int ) ;
 int FUNC_17 (struct platform_device*,struct da9052_tsi*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_17)
{
 struct da9052 *VAR_18;
 struct da9052_tsi *VAR_19;
 struct input_dev *VAR_20;
 int VAR_21;

 VAR_18 = FUNC_9(VAR_17->dev.parent);
 if (!VAR_18)
  return -VAR_7;

 VAR_19 = FUNC_16(sizeof(struct da9052_tsi), VAR_11);
 VAR_20 = FUNC_10();
 if (!VAR_19 || !VAR_20) {
  VAR_21 = -VAR_8;
  goto err_free_mem;
 }

 VAR_19->da9052 = VAR_18;
 VAR_19->dev = VAR_20;
 VAR_19->stopped = 1;
 FUNC_0(&VAR_19->ts_pen_work, VAR_15);

 VAR_20->id.version = 0x0101;
 VAR_20->id.vendor = 0x15B6;
 VAR_20->id.product = 0x9052;
 VAR_20->name = "Dialog DA9052 TouchScreen Driver";
 VAR_20->dev.parent = &VAR_17->dev;
 VAR_20->open = VAR_14;
 VAR_20->close = VAR_13;

 FUNC_1(VAR_9, VAR_20->evbit);
 FUNC_1(VAR_10, VAR_20->evbit);
 FUNC_1(VAR_3, VAR_20->keybit);

 FUNC_13(VAR_20, VAR_1, 0, 1023, 0, 0);
 FUNC_13(VAR_20, VAR_2, 0, 1023, 0, 0);
 FUNC_13(VAR_20, VAR_0, 0, 1023, 0, 0);

 FUNC_14(VAR_20, VAR_19);


 FUNC_5(VAR_19->da9052, VAR_6, 1 << 1, 0);


 FUNC_7(VAR_19, 0);

 VAR_21 = FUNC_6(VAR_19->da9052, VAR_4,
    "pendown-irq", VAR_16, VAR_19);
 if (VAR_21) {
  FUNC_8(VAR_19->da9052->dev,
   "Failed to register PENDWN IRQ: %d\n", VAR_21);
  goto err_free_mem;
 }

 VAR_21 = FUNC_6(VAR_19->da9052, VAR_5,
    "tsiready-irq", VAR_12, VAR_19);
 if (VAR_21) {
  FUNC_8(VAR_19->da9052->dev,
   "Failed to register TSIRDY IRQ :%d\n", VAR_21);
  goto err_free_pendwn_irq;
 }


 FUNC_3(VAR_19->da9052, VAR_4);
 FUNC_3(VAR_19->da9052, VAR_5);

 VAR_21 = FUNC_2(VAR_19);
 if (VAR_21)
  goto err_free_datardy_irq;

 VAR_21 = FUNC_12(VAR_19->dev);
 if (VAR_21)
  goto err_free_datardy_irq;

 FUNC_17(VAR_17, VAR_19);

 return 0;

err_free_datardy_irq:
 FUNC_4(VAR_19->da9052, VAR_5, VAR_19);
err_free_pendwn_irq:
 FUNC_4(VAR_19->da9052, VAR_4, VAR_19);
err_free_mem:
 FUNC_15(VAR_19);
 FUNC_11(VAR_20);

 return VAR_21;
}
