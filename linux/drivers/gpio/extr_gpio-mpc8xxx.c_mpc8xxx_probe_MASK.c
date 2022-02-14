
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mpc8xxx_gpio_devtype {int (* gpio_dir_in_init ) (struct gpio_chip*) ;scalar_t__ gpio_get; scalar_t__ gpio_dir_out; int irq_set_type; } ;
struct gpio_chip {int (* write_reg ) (scalar_t__,int) ;int to_irq; scalar_t__ get; scalar_t__ direction_output; } ;
struct mpc8xxx_gpio_chip {scalar_t__ regs; int irqn; int irq; scalar_t__ direction_output; struct gpio_chip gc; int lock; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int irq_set_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gpio_chip*,TYPE_1__*,int,scalar_t__,int *,int *,scalar_t__,int *,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct mpc8xxx_gpio_chip* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct gpio_chip*,struct mpc8xxx_gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct device_node*,int ,int *,struct mpc8xxx_gpio_chip*) ;
 int FUNC_6 (struct device_node*,int ) ;
 int FUNC_7 (int ,int ,struct mpc8xxx_gpio_chip*) ;
 struct mpc8xxx_gpio_devtype VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 struct mpc8xxx_gpio_devtype* FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct device_node*,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct platform_device*,struct mpc8xxx_gpio_chip*) ;
 int FUNC_12 (char*,struct device_node*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 struct device_node *VAR_15 = VAR_14->dev.of_node;
 struct mpc8xxx_gpio_chip *VAR_16;
 struct gpio_chip *VAR_17;
 const struct mpc8xxx_gpio_devtype *VAR_18 =
  FUNC_8(&VAR_14->dev);
 int VAR_19;

 VAR_16 = FUNC_2(&VAR_14->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 FUNC_11(VAR_14, VAR_16);

 FUNC_13(&VAR_16->lock);

 VAR_16->regs = FUNC_9(VAR_15, 0);
 if (!VAR_16->regs)
  return -VAR_2;

 VAR_17 = &VAR_16->gc;

 if (FUNC_10(VAR_15, "little-endian")) {
  VAR_19 = FUNC_0(VAR_17, &VAR_14->dev, 4,
     VAR_16->regs + VAR_4,
     ((void*)0), ((void*)0),
     VAR_16->regs + VAR_5, ((void*)0),
     VAR_0);
  if (VAR_19)
   goto err;
  FUNC_1(&VAR_14->dev, "GPIO registers are LITTLE endian\n");
 } else {
  VAR_19 = FUNC_0(VAR_17, &VAR_14->dev, 4,
     VAR_16->regs + VAR_4,
     ((void*)0), ((void*)0),
     VAR_16->regs + VAR_5, ((void*)0),
     VAR_0
     | VAR_1);
  if (VAR_19)
   goto err;
  FUNC_1(&VAR_14->dev, "GPIO registers are BIG endian\n");
 }

 VAR_16->direction_output = VAR_17->direction_output;

 if (!VAR_18)
  VAR_18 = &VAR_9;





 VAR_13.irq_set_type = VAR_18->irq_set_type;

 if (VAR_18->gpio_dir_out)
  VAR_17->direction_output = VAR_18->gpio_dir_out;
 if (VAR_18->gpio_get)
  VAR_17->get = VAR_18->gpio_get;

 VAR_17->to_irq = VAR_12;

 VAR_19 = FUNC_3(VAR_17, VAR_16);
 if (VAR_19) {
  FUNC_12("%pOF: GPIO chip registration failed with status %d\n",
         VAR_15, VAR_19);
  goto err;
 }

 VAR_16->irqn = FUNC_6(VAR_15, 0);
 if (!VAR_16->irqn)
  return 0;

 VAR_16->irq = FUNC_5(VAR_15, VAR_8,
     &VAR_11, VAR_16);
 if (!VAR_16->irq)
  return 0;


 VAR_17->write_reg(VAR_16->regs + VAR_6, 0xffffffff);
 VAR_17->write_reg(VAR_16->regs + VAR_7, 0);

 if (VAR_18->gpio_dir_in_init)
  VAR_18->gpio_dir_in_init(VAR_17);

 FUNC_7(VAR_16->irqn,
      VAR_10, VAR_16);
 return 0;
err:
 FUNC_4(VAR_16->regs);
 return VAR_19;
}
