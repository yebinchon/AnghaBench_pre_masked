
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct usb_extcon_info {scalar_t__ id_irq; scalar_t__ vbus_irq; TYPE_1__ wq_detcable; void* vbus_gpiod; void* id_gpiod; int debounce_jiffies; void* edev; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int (*) (int *)) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int) ;
 void* FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,void*) ;
 void* FUNC_7 (struct device*,char*,int ) ;
 struct usb_extcon_info* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int *,int ,int,int ,struct usb_extcon_info*) ;
 int FUNC_10 (void*,int) ;
 void* FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct platform_device*,struct usb_extcon_info*) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct device_node *VAR_13 = VAR_12->of_node;
 struct usb_extcon_info *VAR_14;
 int VAR_15;

 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_8(&VAR_11->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->dev = VAR_12;
 VAR_14->id_gpiod = FUNC_7(&VAR_11->dev, "id", VAR_4);
 VAR_14->vbus_gpiod = FUNC_7(&VAR_11->dev, "vbus",
         VAR_4);

 if (!VAR_14->id_gpiod && !VAR_14->vbus_gpiod) {
  FUNC_3(VAR_12, "failed to get gpios\n");
  return -VAR_1;
 }

 if (FUNC_1(VAR_14->id_gpiod))
  return FUNC_2(VAR_14->id_gpiod);

 if (FUNC_1(VAR_14->vbus_gpiod))
  return FUNC_2(VAR_14->vbus_gpiod);

 VAR_14->edev = FUNC_5(VAR_12, VAR_9);
 if (FUNC_1(VAR_14->edev)) {
  FUNC_3(VAR_12, "failed to allocate extcon device\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_6(VAR_12, VAR_14->edev);
 if (VAR_15 < 0) {
  FUNC_3(VAR_12, "failed to register extcon device\n");
  return VAR_15;
 }

 if (VAR_14->id_gpiod)
  VAR_15 = FUNC_10(VAR_14->id_gpiod,
      VAR_8 * 1000);
 if (!VAR_15 && VAR_14->vbus_gpiod)
  VAR_15 = FUNC_10(VAR_14->vbus_gpiod,
      VAR_8 * 1000);

 if (VAR_15 < 0)
  VAR_14->debounce_jiffies = FUNC_12(VAR_8);

 FUNC_0(&VAR_14->wq_detcable, FUNC_14);

 if (VAR_14->id_gpiod) {
  VAR_14->id_irq = FUNC_11(VAR_14->id_gpiod);
  if (VAR_14->id_irq < 0) {
   FUNC_3(VAR_12, "failed to get ID IRQ\n");
   return VAR_14->id_irq;
  }

  VAR_15 = FUNC_9(VAR_12, VAR_14->id_irq, ((void*)0),
      VAR_10,
      VAR_7 |
      VAR_6 | VAR_5,
      VAR_11->name, VAR_14);
  if (VAR_15 < 0) {
   FUNC_3(VAR_12, "failed to request handler for ID IRQ\n");
   return VAR_15;
  }
 }

 if (VAR_14->vbus_gpiod) {
  VAR_14->vbus_irq = FUNC_11(VAR_14->vbus_gpiod);
  if (VAR_14->vbus_irq < 0) {
   FUNC_3(VAR_12, "failed to get VBUS IRQ\n");
   return VAR_14->vbus_irq;
  }

  VAR_15 = FUNC_9(VAR_12, VAR_14->vbus_irq, ((void*)0),
      VAR_10,
      VAR_7 |
      VAR_6 | VAR_5,
      VAR_11->name, VAR_14);
  if (VAR_15 < 0) {
   FUNC_3(VAR_12, "failed to request handler for VBUS IRQ\n");
   return VAR_15;
  }
 }

 FUNC_13(VAR_11, VAR_14);
 FUNC_4(&VAR_11->dev, 1);


 FUNC_14(&VAR_14->wq_detcable.work);

 return 0;
}
