
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct rb153_cf_info {int gpio_line; unsigned int irq; int iobase; } ;
struct platform_device {int dev; } ;
struct ata_host {struct rb153_cf_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_host*,unsigned int,int ,int ,int *) ;
 struct ata_host* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 struct rb153_cf_info* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct ata_host*) ;
 int VAR_8 ;
 int FUNC_12 (struct ata_host*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 struct resource *VAR_13;
 struct ata_host *VAR_14;
 struct rb153_cf_info *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_10(VAR_10, VAR_5, 0);
 if (!VAR_13) {
  FUNC_2(&VAR_10->dev, "no IOMEM resource found\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_9(VAR_10, 0);
 if (VAR_11 <= 0) {
  FUNC_2(&VAR_10->dev, "no IRQ resource found\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "no GPIO found for irq%d\n", VAR_11);
  return -VAR_2;
 }

 VAR_16 = FUNC_7(VAR_12, VAR_0);
 if (VAR_16) {
  FUNC_2(&VAR_10->dev, "GPIO request failed\n");
  return VAR_16;
 }

 VAR_14 = FUNC_1(&VAR_10->dev, VAR_7);
 if (!VAR_14)
  return -VAR_3;

 FUNC_11(VAR_10, VAR_14);

 VAR_15 = FUNC_4(&VAR_10->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 VAR_14->private_data = VAR_15;
 VAR_15->gpio_line = VAR_12;
 VAR_15->irq = VAR_11;

 VAR_15->iobase = FUNC_3(&VAR_10->dev, VAR_13->start,
    VAR_13->end - VAR_13->start + 1);
 if (!VAR_15->iobase)
  return -VAR_3;

 VAR_16 = FUNC_5(VAR_12);
 if (VAR_16) {
  FUNC_2(&VAR_10->dev, "unable to set GPIO direction, err=%d\n",
    VAR_16);
  goto err_free_gpio;
 }

 FUNC_12(VAR_14);

 VAR_16 = FUNC_0(VAR_14, VAR_11, VAR_8,
    VAR_6, &VAR_9);
 if (VAR_16)
  goto err_free_gpio;

 return 0;

err_free_gpio:
 FUNC_6(VAR_12);

 return VAR_16;
}
