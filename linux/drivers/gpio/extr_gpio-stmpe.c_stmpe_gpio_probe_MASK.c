
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int init_valid_mask; } ;
struct TYPE_11__ {scalar_t__ ngpio; int base; int dbg_show; TYPE_1__ irq; struct device_node* of_node; TYPE_7__* parent; } ;
struct stmpe_gpio {TYPE_2__ chip; int norequest_mask; struct stmpe* stmpe; TYPE_7__* dev; int irq_lock; } ;
struct stmpe {scalar_t__ num_gpios; } ;
struct TYPE_12__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_7__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_7__*,char*,...) ;
 struct stmpe* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,char*) ;
 int FUNC_4 (TYPE_7__*,int,int *,int ,int ,char*,struct stmpe_gpio*) ;
 int FUNC_5 (TYPE_2__*,struct stmpe_gpio*) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;
 int VAR_8 ;
 int FUNC_9 (struct stmpe_gpio*) ;
 struct stmpe_gpio* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device_node*,char*,int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct stmpe_gpio*) ;
 int VAR_9 ;
 int FUNC_15 (struct stmpe*,int ) ;
 int FUNC_16 (struct stmpe*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 struct stmpe *VAR_15 = FUNC_2(VAR_14->dev.parent);
 struct device_node *VAR_16 = VAR_14->dev.of_node;
 struct stmpe_gpio *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15->num_gpios > VAR_6) {
  FUNC_1(&VAR_14->dev, "Need to increase maximum GPIO number\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_10(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 FUNC_11(&VAR_17->irq_lock);

 VAR_17->dev = &VAR_14->dev;
 VAR_17->stmpe = VAR_15;
 VAR_17->chip = VAR_13;
 VAR_17->chip.ngpio = VAR_15->num_gpios;
 VAR_17->chip.parent = &VAR_14->dev;
 VAR_17->chip.of_node = VAR_16;
 VAR_17->chip.base = -1;
 VAR_17->chip.irq.init_valid_mask = VAR_12;

 if (FUNC_0(VAR_0))
                VAR_17->chip.dbg_show = VAR_9;

 FUNC_12(VAR_16, "st,norequest-mask",
   &VAR_17->norequest_mask);

 VAR_19 = FUNC_13(VAR_14, 0);
 if (VAR_19 < 0)
  FUNC_3(&VAR_14->dev,
   "device configured in no-irq mode: "
   "irqs are not available\n");

 VAR_18 = FUNC_16(VAR_15, VAR_7);
 if (VAR_18)
  goto out_free;

 VAR_18 = FUNC_5(&VAR_17->chip, VAR_17);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev, "unable to add gpiochip: %d\n", VAR_18);
  goto out_disable;
 }

 if (VAR_19 > 0) {
  VAR_18 = FUNC_4(&VAR_14->dev, VAR_19, ((void*)0),
    VAR_10, VAR_4,
    "stmpe-gpio", VAR_17);
  if (VAR_18) {
   FUNC_1(&VAR_14->dev, "unable to get irq: %d\n", VAR_18);
   goto out_disable;
  }
  VAR_18 = FUNC_6(&VAR_17->chip,
         &VAR_11,
         0,
         VAR_8,
         VAR_5);
  if (VAR_18) {
   FUNC_1(&VAR_14->dev,
    "could not connect irqchip to gpiochip\n");
   goto out_disable;
  }

  FUNC_8(&VAR_17->chip,
         &VAR_11,
         VAR_19);
 }

 FUNC_14(VAR_14, VAR_17);

 return 0;

out_disable:
 FUNC_15(VAR_15, VAR_7);
 FUNC_7(&VAR_17->chip);
out_free:
 FUNC_9(VAR_17);
 return VAR_18;
}
