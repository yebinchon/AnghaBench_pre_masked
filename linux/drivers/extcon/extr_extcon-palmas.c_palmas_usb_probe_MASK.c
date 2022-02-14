
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct palmas_usb_platform_data {int wakeup; } ;
struct TYPE_11__ {int work; } ;
struct palmas_usb {int wakeup; int enable_id_detection; int enable_vbus_detection; int enable_gpio_id_detection; int enable_gpio_vbus_detection; int id_irq; scalar_t__ gpio_id_irq; int vbus_irq; scalar_t__ gpio_vbus_irq; TYPE_9__ wq_detectid; void* vbus_gpiod; void* vbus_otg_irq; TYPE_1__* dev; void* id_gpiod; void* id_otg_irq; void* edev; struct palmas* palmas; int sw_debounce_jiffies; } ;
struct palmas {int irq_data; struct palmas_usb* usb; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_9__*,int (*) (int *)) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (void*) ;
 int VAR_15 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct palmas* FUNC_4 (int ) ;
 struct palmas_usb_platform_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 void* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 void* FUNC_9 (TYPE_1__*,char*,int ) ;
 struct palmas_usb* FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (TYPE_1__*,int,int *,int (*) (int,struct palmas_usb*),int,char*,struct palmas_usb*) ;
 int FUNC_12 (void*,int) ;
 void* FUNC_13 (void*) ;
 int FUNC_14 (int) ;
 void* FUNC_15 (struct device_node*,char*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*,int*) ;
 int FUNC_17 (struct palmas_usb*) ;
 int VAR_16 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,struct palmas_usb*) ;
 int FUNC_20 (int,struct palmas_usb*) ;
 int FUNC_21 (struct palmas*,int ,int ,int ,int) ;
 int FUNC_22 (struct palmas*,int) ;
 int FUNC_23 (int,struct palmas_usb*) ;
 int FUNC_24 (struct platform_device*,struct palmas_usb*) ;
 void* FUNC_25 (int ,int ) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_17)
{
 struct palmas *VAR_18 = FUNC_4(VAR_17->dev.parent);
 struct palmas_usb_platform_data *VAR_19 = FUNC_5(&VAR_17->dev);
 struct device_node *VAR_20 = VAR_17->dev.of_node;
 struct palmas_usb *VAR_21;
 int VAR_22;

 if (!VAR_18) {
  FUNC_3(&VAR_17->dev, "failed to get valid parent\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_10(&VAR_17->dev, sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return -VAR_1;

 if (VAR_20 && !VAR_19) {
  VAR_21->wakeup = FUNC_15(VAR_20, "ti,wakeup");
  VAR_21->enable_id_detection = FUNC_15(VAR_20,
      "ti,enable-id-detection");
  VAR_21->enable_vbus_detection = FUNC_15(VAR_20,
      "ti,enable-vbus-detection");
 } else {
  VAR_21->wakeup = 1;
  VAR_21->enable_id_detection = 1;
  VAR_21->enable_vbus_detection = 1;

  if (VAR_19)
   VAR_21->wakeup = VAR_19->wakeup;
 }

 VAR_21->id_gpiod = FUNC_9(&VAR_17->dev, "id",
       VAR_3);
 if (FUNC_1(VAR_21->id_gpiod)) {
  FUNC_3(&VAR_17->dev, "failed to get id gpio\n");
  return FUNC_2(VAR_21->id_gpiod);
 }

 VAR_21->vbus_gpiod = FUNC_9(&VAR_17->dev, "vbus",
       VAR_3);
 if (FUNC_1(VAR_21->vbus_gpiod)) {
  FUNC_3(&VAR_17->dev, "failed to get vbus gpio\n");
  return FUNC_2(VAR_21->vbus_gpiod);
 }

 if (VAR_21->enable_id_detection && VAR_21->id_gpiod) {
  VAR_21->enable_id_detection = 0;
  VAR_21->enable_gpio_id_detection = 1;
 }

 if (VAR_21->enable_vbus_detection && VAR_21->vbus_gpiod) {
  VAR_21->enable_vbus_detection = 0;
  VAR_21->enable_gpio_vbus_detection = 1;
 }

 if (VAR_21->enable_gpio_id_detection) {
  u32 VAR_23;

  if (FUNC_16(VAR_20, "debounce-delay-ms", &VAR_23))
   VAR_23 = VAR_15;

  VAR_22 = FUNC_12(VAR_21->id_gpiod,
         VAR_23 * 1000);
  if (VAR_22 < 0)
   VAR_21->sw_debounce_jiffies = FUNC_14(VAR_23);
 }

 FUNC_0(&VAR_21->wq_detectid, FUNC_18);

 VAR_18->usb = VAR_21;
 VAR_21->palmas = VAR_18;

 VAR_21->dev = &VAR_17->dev;

 FUNC_22(VAR_18, VAR_21->wakeup);

 FUNC_24(VAR_17, VAR_21);

 VAR_21->edev = FUNC_7(&VAR_17->dev,
          VAR_16);
 if (FUNC_1(VAR_21->edev)) {
  FUNC_3(&VAR_17->dev, "failed to allocate extcon device\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_8(&VAR_17->dev, VAR_21->edev);
 if (VAR_22) {
  FUNC_3(&VAR_17->dev, "failed to register extcon device\n");
  return VAR_22;
 }

 if (VAR_21->enable_id_detection) {
  VAR_21->id_otg_irq = FUNC_25(VAR_18->irq_data,
            VAR_8);
  VAR_21->id_irq = FUNC_25(VAR_18->irq_data,
        VAR_7);
  VAR_22 = FUNC_11(VAR_21->dev,
    VAR_21->id_irq,
    ((void*)0), FUNC_20,
    VAR_5 | VAR_6 |
    VAR_4,
    "palmas_usb_id", VAR_21);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev, "can't get IRQ %d, err %d\n",
     VAR_21->id_irq, VAR_22);
   return VAR_22;
  }
 } else if (VAR_21->enable_gpio_id_detection) {
  VAR_21->gpio_id_irq = FUNC_13(VAR_21->id_gpiod);
  if (VAR_21->gpio_id_irq < 0) {
   FUNC_3(&VAR_17->dev, "failed to get id irq\n");
   return VAR_21->gpio_id_irq;
  }
  VAR_22 = FUNC_11(&VAR_17->dev,
         VAR_21->gpio_id_irq,
         ((void*)0),
         FUNC_19,
         VAR_6 |
         VAR_5 |
         VAR_4,
         "palmas_usb_id",
         VAR_21);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev,
    "failed to request handler for id irq\n");
   return VAR_22;
  }
 }

 if (VAR_21->enable_vbus_detection) {
  VAR_21->vbus_otg_irq = FUNC_25(VAR_18->irq_data,
             VAR_14);
  VAR_21->vbus_irq = FUNC_25(VAR_18->irq_data,
          VAR_13);
  VAR_22 = FUNC_11(VAR_21->dev,
    VAR_21->vbus_irq, ((void*)0),
    FUNC_23,
    VAR_5 | VAR_6 |
    VAR_4,
    "palmas_usb_vbus", VAR_21);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev, "can't get IRQ %d, err %d\n",
     VAR_21->vbus_irq, VAR_22);
   return VAR_22;
  }
 } else if (VAR_21->enable_gpio_vbus_detection) {

  VAR_22 = FUNC_21(VAR_18,
   VAR_12,
   VAR_9,
   VAR_10,
   (1 << VAR_11));
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev, "can't remux GPIO1\n");
   return VAR_22;
  }

  VAR_21->vbus_otg_irq = FUNC_25(VAR_18->irq_data,
             VAR_14);
  VAR_21->gpio_vbus_irq = FUNC_13(VAR_21->vbus_gpiod);
  if (VAR_21->gpio_vbus_irq < 0) {
   FUNC_3(&VAR_17->dev, "failed to get vbus irq\n");
   return VAR_21->gpio_vbus_irq;
  }
  VAR_22 = FUNC_11(&VAR_17->dev,
      VAR_21->gpio_vbus_irq,
      ((void*)0),
      FUNC_23,
      VAR_5 |
      VAR_6 |
      VAR_4,
      "palmas_usb_vbus",
      VAR_21);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev,
    "failed to request handler for vbus irq\n");
   return VAR_22;
  }
 }

 FUNC_17(VAR_21);

 if (VAR_21->enable_gpio_vbus_detection)
  FUNC_23(VAR_21->gpio_vbus_irq, VAR_21);
 FUNC_18(&VAR_21->wq_detectid.work);
 FUNC_6(&VAR_17->dev, 1);
 return 0;
}
