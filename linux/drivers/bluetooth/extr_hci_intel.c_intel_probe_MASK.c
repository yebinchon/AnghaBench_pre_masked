
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_device {scalar_t__ irq; struct gpio_desc* reset; int list; struct platform_device* pdev; int hu_lock; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_4 ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 void* FUNC_9 (int *,char*,int ) ;
 struct intel_device* FUNC_10 (int *,int,int ) ;
 scalar_t__ FUNC_11 (struct gpio_desc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct intel_device*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct intel_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_10(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_13(&VAR_8->hu_lock);

 VAR_8->pdev = VAR_7;

 VAR_9 = FUNC_8(&VAR_7->dev, VAR_4);
 if (VAR_9)
  FUNC_3(&VAR_7->dev, "Unable to add GPIO mapping table\n");

 VAR_8->reset = FUNC_9(&VAR_7->dev, "reset", VAR_3);
 if (FUNC_0(VAR_8->reset)) {
  FUNC_4(&VAR_7->dev, "Unable to retrieve gpio\n");
  return FUNC_1(VAR_8->reset);
 }

 VAR_8->irq = FUNC_16(VAR_7, 0);
 if (VAR_8->irq < 0) {
  struct gpio_desc *VAR_10;

  FUNC_4(&VAR_7->dev, "No IRQ, falling back to gpio-irq\n");

  VAR_10 = FUNC_9(&VAR_7->dev, "host-wake", VAR_2);
  if (FUNC_0(VAR_10)) {
   FUNC_4(&VAR_7->dev, "Unable to retrieve IRQ\n");
   goto no_irq;
  }

  VAR_8->irq = FUNC_11(VAR_10);
  if (VAR_8->irq < 0) {
   FUNC_4(&VAR_7->dev, "No corresponding irq for gpio\n");
   goto no_irq;
  }
 }


 FUNC_6(&VAR_7->dev, 1);
 FUNC_7(&VAR_7->dev);

no_irq:
 FUNC_17(VAR_7, VAR_8);


 FUNC_14(&VAR_6);
 FUNC_12(&VAR_8->list, &VAR_5);
 FUNC_15(&VAR_6);

 FUNC_5(&VAR_7->dev, "registered, gpio(%d)/irq(%d).\n",
   FUNC_2(VAR_8->reset), VAR_8->irq);

 return 0;
}
