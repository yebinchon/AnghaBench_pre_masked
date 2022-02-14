
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; int * chip; } ;
struct TYPE_11__ {int ngpio; int base; struct gpio_irq_chip irq; int free; int request; int owner; TYPE_1__* parent; int label; } ;
struct cdns_gpio_chip {scalar_t__ regs; scalar_t__ pclk; void* bypass_orig; TYPE_4__ gc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*,int,scalar_t__,scalar_t__,int *,int *,scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_4__*,struct cdns_gpio_chip*) ;
 int* FUNC_10 (TYPE_1__*,int,int,int ) ;
 struct cdns_gpio_chip* FUNC_11 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 int VAR_15 ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int ,char*,int*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct cdns_gpio_chip*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_16)
{
 struct cdns_gpio_chip *VAR_17;
 int VAR_18, VAR_19;
 u32 VAR_20;
 u32 VAR_21 = 32;

 VAR_17 = FUNC_11(&VAR_16->dev, sizeof(*VAR_17), VAR_8);
 if (!VAR_17)
  return -VAR_7;

 VAR_17->regs = FUNC_12(VAR_16, 0);
 if (FUNC_1(VAR_17->regs))
  return FUNC_2(VAR_17->regs);

 FUNC_15(VAR_16->dev.of_node, "ngpios", &VAR_21);

 if (VAR_21 > 32) {
  FUNC_6(&VAR_16->dev, "ngpios must be less or equal 32\n");
  return -VAR_6;
 }
 VAR_20 = FUNC_13(VAR_17->regs + VAR_2);
 FUNC_14(FUNC_0(VAR_21 - 1, 0),
    VAR_17->regs + VAR_2);

 VAR_18 = FUNC_3(&VAR_17->gc, &VAR_16->dev, 4,
    VAR_17->regs + VAR_3,
    VAR_17->regs + VAR_5,
    ((void*)0),
    ((void*)0),
    VAR_17->regs + VAR_2,
    VAR_0);
 if (VAR_18) {
  FUNC_6(&VAR_16->dev, "Failed to register generic gpio, %d\n",
   VAR_18);
  goto err_revert_dir;
 }

 VAR_17->gc.label = FUNC_7(&VAR_16->dev);
 VAR_17->gc.ngpio = VAR_21;
 VAR_17->gc.parent = &VAR_16->dev;
 VAR_17->gc.base = -1;
 VAR_17->gc.owner = VAR_10;
 VAR_17->gc.request = VAR_14;
 VAR_17->gc.free = VAR_11;

 VAR_17->pclk = FUNC_8(&VAR_16->dev, ((void*)0));
 if (FUNC_1(VAR_17->pclk)) {
  VAR_18 = FUNC_2(VAR_17->pclk);
  FUNC_6(&VAR_16->dev,
   "Failed to retrieve peripheral clock, %d\n", VAR_18);
  goto err_revert_dir;
 }

 VAR_18 = FUNC_5(VAR_17->pclk);
 if (VAR_18) {
  FUNC_6(&VAR_16->dev,
   "Failed to enable the peripheral clock, %d\n", VAR_18);
  goto err_revert_dir;
 }




 VAR_19 = FUNC_16(VAR_16, 0);
 if (VAR_19 >= 0) {
  struct gpio_irq_chip *VAR_22;

  VAR_22 = &VAR_17->gc.irq;
  VAR_22->chip = &VAR_13;
  VAR_22->parent_handler = VAR_12;
  VAR_22->num_parents = 1;
  VAR_22->parents = FUNC_10(&VAR_16->dev, 1,
          sizeof(*VAR_22->parents),
          VAR_8);
  if (!VAR_22->parents) {
   VAR_18 = -VAR_7;
   goto err_disable_clk;
  }
  VAR_22->parents[0] = VAR_19;
  VAR_22->default_type = VAR_9;
  VAR_22->handler = VAR_15;
 }

 VAR_18 = FUNC_9(&VAR_16->dev, &VAR_17->gc, VAR_17);
 if (VAR_18 < 0) {
  FUNC_6(&VAR_16->dev, "Could not register gpiochip, %d\n", VAR_18);
  goto err_disable_clk;
 }

 VAR_17->bypass_orig = FUNC_13(VAR_17->regs + VAR_1);




 FUNC_14(FUNC_0(VAR_21 - 1, 0),
    VAR_17->regs + VAR_4);
 FUNC_14(0, VAR_17->regs + VAR_1);

 FUNC_17(VAR_16, VAR_17);
 return 0;

err_disable_clk:
 FUNC_4(VAR_17->pclk);

err_revert_dir:
 FUNC_14(VAR_20, VAR_17->regs + VAR_2);

 return VAR_18;
}
