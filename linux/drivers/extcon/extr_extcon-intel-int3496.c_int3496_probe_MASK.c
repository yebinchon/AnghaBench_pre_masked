
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct int3496_data {int usb_id_irq; int work; void* edev; void* gpio_usb_mux; void* gpio_vbus_en; void* gpio_usb_id; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ) ;
 void* FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,void*) ;
 void* FUNC_9 (struct device*,char*,int ) ;
 struct int3496_data* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int,int *,int ,int,int ,struct int3496_data*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct platform_device*,struct int3496_data*) ;
 int FUNC_15 (int ,int *,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct int3496_data *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_6(VAR_14, VAR_8);
 if (VAR_16) {
  FUNC_3(VAR_14, "can't add GPIO ACPI mapping\n");
  return VAR_16;
 }

 VAR_15 = FUNC_10(VAR_14, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->dev = VAR_14;
 FUNC_0(&VAR_15->work, VAR_10);

 VAR_15->gpio_usb_id = FUNC_9(VAR_14, "id", VAR_3);
 if (FUNC_1(VAR_15->gpio_usb_id)) {
  VAR_16 = FUNC_2(VAR_15->gpio_usb_id);
  FUNC_3(VAR_14, "can't request USB ID GPIO: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_15->usb_id_irq = FUNC_13(VAR_15->gpio_usb_id);
 if (VAR_15->usb_id_irq < 0) {
  FUNC_3(VAR_14, "can't get USB ID IRQ: %d\n", VAR_15->usb_id_irq);
  return VAR_15->usb_id_irq;
 }

 VAR_15->gpio_vbus_en = FUNC_9(VAR_14, "vbus", VAR_2);
 if (FUNC_1(VAR_15->gpio_vbus_en))
  FUNC_4(VAR_14, "can't request VBUS EN GPIO\n");

 VAR_15->gpio_usb_mux = FUNC_9(VAR_14, "mux", VAR_2);
 if (FUNC_1(VAR_15->gpio_usb_mux))
  FUNC_4(VAR_14, "can't request USB MUX GPIO\n");


 VAR_15->edev = FUNC_7(VAR_14, VAR_9);
 if (FUNC_1(VAR_15->edev))
  return -VAR_0;

 VAR_16 = FUNC_8(VAR_14, VAR_15->edev);
 if (VAR_16 < 0) {
  FUNC_3(VAR_14, "can't register extcon device: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_11(VAR_14, VAR_15->usb_id_irq,
     ((void*)0), VAR_11,
     VAR_5 | VAR_4 |
     VAR_7 |
     VAR_6,
     FUNC_5(VAR_14), VAR_15);
 if (VAR_16 < 0) {
  FUNC_3(VAR_14, "can't request IRQ for USB ID GPIO: %d\n", VAR_16);
  return VAR_16;
 }


 FUNC_15(VAR_12, &VAR_15->work, 0);
 FUNC_12(&VAR_15->work);

 FUNC_14(VAR_13, VAR_15);

 return 0;
}
