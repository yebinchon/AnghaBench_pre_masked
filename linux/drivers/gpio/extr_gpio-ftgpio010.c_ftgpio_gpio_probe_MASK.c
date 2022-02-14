
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; TYPE_1__* chip; } ;
struct TYPE_5__ {char* label; int base; struct gpio_irq_chip irq; int set_config; int owner; struct device* parent; } ;
struct TYPE_4__ {char* name; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct ftgpio_gpio {scalar_t__ clk; scalar_t__ base; TYPE_2__ gc; TYPE_1__ irq; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_2__*,struct device*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,TYPE_2__*,struct ftgpio_gpio*) ;
 int* FUNC_9 (struct device*,int,int,int ) ;
 struct ftgpio_gpio* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct ftgpio_gpio*) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_21)
{
 struct device *VAR_22 = &VAR_21->dev;
 struct ftgpio_gpio *VAR_23;
 struct gpio_irq_chip *VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_23 = FUNC_10(VAR_22, sizeof(*VAR_23), VAR_3);
 if (!VAR_23)
  return -VAR_1;

 VAR_23->dev = VAR_22;

 VAR_23->base = FUNC_11(VAR_21, 0);
 if (FUNC_0(VAR_23->base))
  return FUNC_1(VAR_23->base);

 VAR_25 = FUNC_12(VAR_21, 0);
 if (VAR_25 <= 0)
  return VAR_25 ? VAR_25 : -VAR_0;

 VAR_23->clk = FUNC_7(VAR_22, ((void*)0));
 if (!FUNC_0(VAR_23->clk)) {
  VAR_26 = FUNC_4(VAR_23->clk);
  if (VAR_26)
   return VAR_26;
 } else if (FUNC_1(VAR_23->clk) == -VAR_2) {




  return FUNC_1(VAR_23->clk);
 }

 VAR_26 = FUNC_2(&VAR_23->gc, VAR_22, 4,
    VAR_23->base + VAR_5,
    VAR_23->base + VAR_6,
    VAR_23->base + VAR_4,
    VAR_23->base + VAR_8,
    ((void*)0),
    0);
 if (VAR_26) {
  FUNC_5(VAR_22, "unable to init generic GPIO\n");
  goto dis_clk;
 }
 VAR_23->gc.label = "FTGPIO010";
 VAR_23->gc.base = -1;
 VAR_23->gc.parent = VAR_22;
 VAR_23->gc.owner = VAR_13;



 if (!FUNC_0(VAR_23->clk))
  VAR_23->gc.set_config = VAR_17;

 VAR_23->irq.name = "FTGPIO010";
 VAR_23->irq.irq_ack = VAR_14;
 VAR_23->irq.irq_mask = VAR_16;
 VAR_23->irq.irq_unmask = VAR_19;
 VAR_23->irq.irq_set_type = VAR_18;

 VAR_24 = &VAR_23->gc.irq;
 VAR_24->chip = &VAR_23->irq;
 VAR_24->parent_handler = VAR_15;
 VAR_24->num_parents = 1;
 VAR_24->parents = FUNC_9(VAR_22, 1, sizeof(*VAR_24->parents),
         VAR_3);
 if (!VAR_24->parents) {
  VAR_26 = -VAR_1;
  goto dis_clk;
 }
 VAR_24->default_type = VAR_12;
 VAR_24->handler = VAR_20;
 VAR_24->parents[0] = VAR_25;


 FUNC_14(0x0, VAR_23->base + VAR_10);
 FUNC_14(0x0, VAR_23->base + VAR_11);
 FUNC_14(~0x0, VAR_23->base + VAR_9);


 FUNC_14(0x0, VAR_23->base + VAR_7);

 VAR_26 = FUNC_8(VAR_22, &VAR_23->gc, VAR_23);
 if (VAR_26)
  goto dis_clk;

 FUNC_13(VAR_21, VAR_23);
 FUNC_6(VAR_22, "FTGPIO010 @%p registered\n", VAR_23->base);

 return 0;

dis_clk:
 if (!FUNC_0(VAR_23->clk))
  FUNC_3(VAR_23->clk);
 return VAR_26;
}
