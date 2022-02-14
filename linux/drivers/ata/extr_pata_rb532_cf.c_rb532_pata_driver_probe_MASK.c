
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct rb532_cf_info {int irq; int iobase; struct gpio_desc* gpio_line; } ;
struct platform_device {int dev; } ;
struct gpio_desc {int dummy; } ;
struct ata_host {struct rb532_cf_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_8 ;
 int FUNC_2 (struct ata_host*,int,int ,int ,int *) ;
 struct ata_host* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,...) ;
 struct gpio_desc* FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct rb532_cf_info* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct gpio_desc*,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (struct ata_host*) ;
 int VAR_10 ;
 int FUNC_12 (struct resource*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 int VAR_12;
 struct gpio_desc *VAR_13;
 struct resource *VAR_14;
 struct ata_host *VAR_15;
 struct rb532_cf_info *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_10(VAR_11, VAR_6, 0);
 if (!VAR_14) {
  FUNC_4(&VAR_11->dev, "no IOMEM resource found\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_9(VAR_11, 0);
 if (VAR_12 <= 0) {
  FUNC_4(&VAR_11->dev, "no IRQ resource found\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_5(&VAR_11->dev, ((void*)0), VAR_5);
 if (FUNC_0(VAR_13)) {
  FUNC_4(&VAR_11->dev, "no GPIO found for irq%d\n", VAR_12);
  return FUNC_1(VAR_13);
 }
 FUNC_8(VAR_13, VAR_0);


 VAR_15 = FUNC_3(&VAR_11->dev, VAR_8);
 if (!VAR_15)
  return -VAR_3;

 VAR_16 = FUNC_7(&VAR_11->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;

 VAR_15->private_data = VAR_16;
 VAR_16->gpio_line = VAR_13;
 VAR_16->irq = VAR_12;

 VAR_16->iobase = FUNC_6(&VAR_11->dev, VAR_14->start,
    FUNC_12(VAR_14));
 if (!VAR_16->iobase)
  return -VAR_3;

 FUNC_11(VAR_15);

 VAR_17 = FUNC_2(VAR_15, VAR_12, VAR_9,
    VAR_7, &VAR_10);
 if (VAR_17)
  return VAR_17;

 return 0;
}
