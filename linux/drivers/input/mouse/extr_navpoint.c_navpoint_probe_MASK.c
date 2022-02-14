
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_device {int irq; } ;
struct platform_device {int dev; int name; } ;
struct navpoint_platform_data {int gpio; int port; } ;
struct navpoint {int gpio; int * dev; struct input_dev* input; struct ssp_device* ssp; } ;
struct TYPE_2__ {int * parent; } ;
struct input_dev {int close; int open; int keybit; int evbit; TYPE_1__ dev; int name; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct navpoint_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ,struct navpoint*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*) ;
 struct input_dev* FUNC_9 () ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct navpoint*) ;
 int FUNC_14 (struct navpoint*) ;
 struct navpoint* FUNC_15 (int,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_16 (struct platform_device*,struct navpoint*) ;
 int FUNC_17 (struct ssp_device*) ;
 int FUNC_18 (struct ssp_device*,int ) ;
 struct ssp_device* FUNC_19 (int ,int ) ;
 int FUNC_20 (struct ssp_device*,int ,int ) ;
 int FUNC_21 (int ,int ,int ,int ,struct navpoint*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_24)
{
 const struct navpoint_platform_data *VAR_25 =
     FUNC_3(&VAR_24->dev);
 struct ssp_device *VAR_26;
 struct input_dev *VAR_27;
 struct navpoint *VAR_28;
 int VAR_29;

 if (!VAR_25) {
  FUNC_2(&VAR_24->dev, "no platform data\n");
  return -VAR_6;
 }

 if (FUNC_7(VAR_25->gpio)) {
  VAR_29 = FUNC_8(VAR_25->gpio, VAR_12,
      "SYNAPTICS_ON");
  if (VAR_29)
   return VAR_29;
 }

 VAR_26 = FUNC_19(VAR_25->port, VAR_24->name);
 if (!VAR_26) {
  VAR_29 = -VAR_7;
  goto err_free_gpio;
 }


 if (FUNC_18(VAR_26, VAR_19) & VAR_20) {
  FUNC_20(VAR_26, VAR_19, 0);
  FUNC_4(&VAR_24->dev, "ssp%d already enabled\n", VAR_25->port);
 }

 VAR_28 = FUNC_15(sizeof(*VAR_28), VAR_11);
 VAR_27 = FUNC_9();
 if (!VAR_28 || !VAR_27) {
  VAR_29 = -VAR_8;
  goto err_free_mem;
 }

 VAR_28->ssp = VAR_26;
 VAR_28->input = VAR_27;
 VAR_28->dev = &VAR_24->dev;
 VAR_28->gpio = VAR_25->gpio;

 VAR_27->name = VAR_24->name;
 VAR_27->dev.parent = &VAR_24->dev;

 FUNC_0(VAR_10, VAR_27->evbit);
 FUNC_0(VAR_9, VAR_27->evbit);
 FUNC_0(VAR_3, VAR_27->keybit);
 FUNC_0(VAR_5, VAR_27->keybit);
 FUNC_0(VAR_4, VAR_27->keybit);

 FUNC_12(VAR_27, VAR_1,
        VAR_16, VAR_15, 0, 0);
 FUNC_12(VAR_27, VAR_2,
        VAR_18, VAR_17, 0, 0);
 FUNC_12(VAR_27, VAR_0,
        VAR_14, VAR_13,
        0, 0);

 VAR_27->open = VAR_23;
 VAR_27->close = VAR_21;

 FUNC_13(VAR_27, VAR_28);

 VAR_29 = FUNC_21(VAR_26->irq, VAR_22, 0, VAR_24->name, VAR_28);
 if (VAR_29)
  goto err_free_mem;

 VAR_29 = FUNC_11(VAR_27);
 if (VAR_29)
  goto err_free_irq;

 FUNC_16(VAR_24, VAR_28);
 FUNC_1(&VAR_24->dev, "ssp%d, irq %d\n", VAR_25->port, VAR_26->irq);

 return 0;

err_free_irq:
 FUNC_5(VAR_26->irq, VAR_28);
err_free_mem:
 FUNC_10(VAR_27);
 FUNC_14(VAR_28);
 FUNC_17(VAR_26);
err_free_gpio:
 if (FUNC_7(VAR_25->gpio))
  FUNC_6(VAR_25->gpio);

 return VAR_29;
}
