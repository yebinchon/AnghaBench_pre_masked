
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct dmi_system_id {int ident; } ;
struct bcm_device {scalar_t__ irq; int dev; TYPE_1__* supplies; int set_shutdown; int set_device_wakeup; struct gpio_desc* shutdown; struct gpio_desc* device_wakeup; struct gpio_desc* txco_clk; struct gpio_desc* lpo_clk; int name; } ;
struct TYPE_2__ {char* supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct bcm_device*) ;
 int VAR_4 ;
 struct gpio_desc* FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct gpio_desc*,struct gpio_desc*) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;
 struct gpio_desc* FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,struct gpio_desc*) ;
 void* FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ,int ,TYPE_1__*) ;
 struct dmi_system_id* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct gpio_desc*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_15(struct bcm_device *VAR_8)
{
 const struct dmi_system_id *VAR_9;
 int VAR_10;

 VAR_8->name = FUNC_8(VAR_8->dev);

 if (VAR_7 && !FUNC_3(VAR_8))
  return 0;

 VAR_8->txco_clk = FUNC_4(VAR_8->dev);


 if (VAR_8->txco_clk == FUNC_0(-VAR_1))
  return FUNC_2(VAR_8->txco_clk);


 if (FUNC_1(VAR_8->txco_clk))
  VAR_8->txco_clk = ((void*)0);

 VAR_8->lpo_clk = FUNC_9(VAR_8->dev, "lpo");
 if (VAR_8->lpo_clk == FUNC_0(-VAR_1))
  return FUNC_2(VAR_8->lpo_clk);

 if (FUNC_1(VAR_8->lpo_clk))
  VAR_8->lpo_clk = ((void*)0);


 if (VAR_8->lpo_clk && FUNC_5(VAR_8->lpo_clk, VAR_8->txco_clk)) {
  FUNC_10(VAR_8->dev, VAR_8->txco_clk);
  VAR_8->txco_clk = ((void*)0);
 }

 VAR_8->device_wakeup = FUNC_11(VAR_8->dev, "device-wakeup",
           VAR_3);
 if (FUNC_1(VAR_8->device_wakeup))
  return FUNC_2(VAR_8->device_wakeup);

 VAR_8->shutdown = FUNC_11(VAR_8->dev, "shutdown",
      VAR_3);
 if (FUNC_1(VAR_8->shutdown))
  return FUNC_2(VAR_8->shutdown);

 VAR_8->set_device_wakeup = VAR_5;
 VAR_8->set_shutdown = VAR_6;

 VAR_8->supplies[0].supply = "vbat";
 VAR_8->supplies[1].supply = "vddio";
 VAR_10 = FUNC_12(VAR_8->dev, VAR_0,
          VAR_8->supplies);
 if (VAR_10)
  return VAR_10;


 if (VAR_8->irq <= 0) {
  struct gpio_desc *VAR_11;

  VAR_11 = FUNC_11(VAR_8->dev, "host-wakeup",
            VAR_2);
  if (FUNC_1(VAR_11))
   return FUNC_2(VAR_11);

  VAR_8->irq = FUNC_14(VAR_11);
 }

 VAR_9 = FUNC_13(VAR_4);
 if (VAR_9) {
  FUNC_7(VAR_8->dev, "%s: Has a broken IRQ config, disabling IRQ support / runtime-pm\n",
    VAR_9->ident);
  VAR_8->irq = 0;
 }

 FUNC_6(VAR_8->dev, "BCM irq: %d\n", VAR_8->irq);
 return 0;
}
