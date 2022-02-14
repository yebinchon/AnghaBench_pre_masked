
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sta2x11_gpio_pdata {int * pinconfig; } ;
struct platform_device {int dev; } ;
struct pci_dev {int irq; int dev; } ;
struct gsta_gpio {int irq_base; int gpio; int lock; TYPE_1__** regs; TYPE_1__* reg_base; int * dev; } ;
struct TYPE_4__ {int ic; int fimsc; int rimsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,...) ;
 struct sta2x11_gpio_pdata* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,struct gsta_gpio*) ;
 int FUNC_6 (int *,int,int,int,int ) ;
 struct gsta_gpio* FUNC_7 (int *,int,int ) ;
 TYPE_1__* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ,struct gsta_gpio*) ;
 int FUNC_10 (struct gsta_gpio*) ;
 int VAR_7 ;
 int FUNC_11 (struct gsta_gpio*) ;
 int FUNC_12 (struct gsta_gpio*,int,int ) ;
 int FUNC_13 (struct platform_device*,struct gsta_gpio*) ;
 int FUNC_14 (char*,struct sta2x11_gpio_pdata*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10;
 struct pci_dev *VAR_11;
 struct sta2x11_gpio_pdata *VAR_12;
 struct gsta_gpio *VAR_13;

 VAR_11 = *(struct pci_dev **)FUNC_3(&VAR_8->dev);
 VAR_12 = FUNC_3(&VAR_11->dev);

 if (VAR_12 == ((void*)0))
  FUNC_2(&VAR_8->dev, "no gpio config\n");
 FUNC_14("gpio config: %p\n", VAR_12);

 VAR_13 = FUNC_7(&VAR_8->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;
 VAR_13->dev = &VAR_8->dev;
 VAR_13->reg_base = FUNC_8(VAR_8, 0);
 if (FUNC_0(VAR_13->reg_base))
  return FUNC_1(VAR_13->reg_base);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_13->regs[VAR_9] = VAR_13->reg_base + VAR_9 * 4096;

  FUNC_16(0, &VAR_13->regs[VAR_9]->rimsc);
  FUNC_16(0, &VAR_13->regs[VAR_9]->fimsc);
  FUNC_16(~0, &VAR_13->regs[VAR_9]->ic);
 }
 FUNC_15(&VAR_13->lock);
 FUNC_11(VAR_13);
 if (VAR_12)
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   FUNC_12(VAR_13, VAR_9, VAR_12->pinconfig[VAR_9]);


 VAR_10 = FUNC_6(&VAR_8->dev, -1, 384,
       VAR_3, VAR_6);
 if (VAR_10 < 0) {
  FUNC_4(&VAR_8->dev, "sta2x11 gpio: Can't get irq base (%i)\n",
    -VAR_10);
  return VAR_10;
 }
 VAR_13->irq_base = VAR_10;

 VAR_10 = FUNC_10(VAR_13);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(&VAR_8->dev, VAR_11->irq, VAR_7,
          VAR_4, VAR_5, VAR_13);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "sta2x11 gpio: Can't request irq (%i)\n",
   -VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_5(&VAR_8->dev, &VAR_13->gpio, VAR_13);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "sta2x11 gpio: Can't register (%i)\n",
   -VAR_10);
  return VAR_10;
 }

 FUNC_13(VAR_8, VAR_13);
 return 0;
}
