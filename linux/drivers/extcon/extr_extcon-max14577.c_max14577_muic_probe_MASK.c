
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max14577_muic_irq {int virq; int irq; int name; } ;
struct max14577_muic_info {int muic_irqs_num; int wq_detcable; TYPE_1__* dev; struct max14577* max14577; int path_uart; int status; int path_usb; int edev; struct max14577_muic_irq* muic_irqs; int irq_work; int mutex; } ;
struct max14577 {int dev_type; int regmap; int irq_data; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct max14577* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 struct max14577_muic_info* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,int,int *,int ,int ,int ,struct max14577_muic_info*) ;
 int FUNC_11 (int ,int ,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct max14577_muic_info*,int ,int*) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_13 (struct max14577_muic_info*,int ) ;
 int FUNC_14 (struct max14577_muic_info*,int ,int) ;
 int FUNC_15 (int ,int ,int *) ;
 void* VAR_17 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct platform_device*,struct max14577_muic_info*) ;
 int FUNC_19 (int ,int *,int) ;
 int FUNC_20 (int ,int ) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 struct max14577 *VAR_20 = FUNC_5(VAR_19->dev.parent);
 struct max14577_muic_info *VAR_21;
 int VAR_22;
 int VAR_23;
 bool VAR_24;
 int VAR_25;
 int VAR_26;
 u8 VAR_27;

 VAR_21 = FUNC_9(&VAR_19->dev, sizeof(*VAR_21), VAR_6);
 if (!VAR_21)
  return -VAR_5;

 VAR_21->dev = &VAR_19->dev;
 VAR_21->max14577 = VAR_20;

 FUNC_18(VAR_19, VAR_21);
 FUNC_17(&VAR_21->mutex);

 FUNC_2(&VAR_21->irq_work, VAR_15);

 switch (VAR_20->dev_type) {
 case 128:
  VAR_21->muic_irqs = VAR_17;
  VAR_21->muic_irqs_num = FUNC_0(VAR_17);
  break;
 case 129:
 default:
  VAR_21->muic_irqs = VAR_16;
  VAR_21->muic_irqs_num = FUNC_0(VAR_16);
 }


 for (VAR_26 = 0; VAR_26 < VAR_21->muic_irqs_num; VAR_26++) {
  struct max14577_muic_irq *VAR_28 = &VAR_21->muic_irqs[VAR_26];
  int VAR_29 = 0;

  VAR_29 = FUNC_20(VAR_20->irq_data, VAR_28->irq);
  if (VAR_29 <= 0)
   return -VAR_4;
  VAR_28->virq = VAR_29;

  VAR_25 = FUNC_10(&VAR_19->dev, VAR_29, ((void*)0),
    VAR_14,
    VAR_7,
    VAR_28->name, VAR_21);
  if (VAR_25) {
   FUNC_4(&VAR_19->dev,
    "failed: irq request (IRQ: %d, error :%d)\n",
    VAR_28->irq, VAR_25);
   return VAR_25;
  }
 }


 VAR_21->edev = FUNC_7(&VAR_19->dev,
           VAR_12);
 if (FUNC_3(VAR_21->edev)) {
  FUNC_4(&VAR_19->dev, "failed to allocate memory for extcon\n");
  return -VAR_5;
 }

 VAR_25 = FUNC_8(&VAR_19->dev, VAR_21->edev);
 if (VAR_25) {
  FUNC_4(&VAR_19->dev, "failed to register extcon device\n");
  return VAR_25;
 }


 VAR_21->path_usb = VAR_2;
 VAR_21->path_uart = VAR_1;
 VAR_22 = FUNC_16(VAR_3);


 VAR_25 = FUNC_11(VAR_21->max14577->regmap,
   VAR_10, VAR_21->status, 2);
 if (VAR_25) {
  FUNC_4(VAR_21->dev, "Cannot read STATUS registers\n");
  return VAR_25;
 }
 VAR_23 = FUNC_12(VAR_21, VAR_8,
      &VAR_24);
 if (VAR_24 && VAR_23 == VAR_9)
  FUNC_14(VAR_21, VAR_21->path_uart, 1);


 VAR_25 = FUNC_15(VAR_21->max14577->regmap,
   VAR_11, &VAR_27);
 if (VAR_25 < 0) {
  FUNC_4(&VAR_19->dev, "failed to read revision number\n");
  return VAR_25;
 }
 FUNC_6(VAR_21->dev, "device ID : 0x%x\n", VAR_27);


 FUNC_13(VAR_21, VAR_0);
 FUNC_1(&VAR_21->wq_detcable, VAR_13);
 FUNC_19(VAR_18, &VAR_21->wq_detcable,
   VAR_22);

 return VAR_25;
}
