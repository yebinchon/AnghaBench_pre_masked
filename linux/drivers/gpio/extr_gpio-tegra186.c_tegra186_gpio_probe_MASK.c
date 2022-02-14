
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct tegra_gpio_port {unsigned int pins; size_t irq; int name; } ;
struct gpio_irq_chip {unsigned int num_parents; int* parents; int* map; struct tegra_gpio* parent_handler_data; int parent_handler; int default_type; int handler; int * domain_ops; TYPE_2__* chip; } ;
struct TYPE_11__ {int base; int ngpio; char const* const* names; int of_gpio_n_cells; struct gpio_irq_chip irq; int of_xlate; TYPE_1__* of_node; TYPE_4__* parent; int set; int get; int direction_output; int direction_input; int get_direction; int label; } ;
struct TYPE_13__ {int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; int name; } ;
struct tegra_gpio {int num_irq; int* irq; TYPE_10__ gpio; TYPE_3__* soc; TYPE_2__ intc; int base; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_14__ {unsigned int num_ports; struct tegra_gpio_port* ports; int name; } ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_10__*,struct tegra_gpio*) ;
 int FUNC_3 (TYPE_4__*,struct resource*) ;
 char* FUNC_4 (TYPE_4__*,int ,char*,int ,unsigned int) ;
 void* FUNC_5 (TYPE_4__*,int,int,int ) ;
 struct tegra_gpio* FUNC_6 (TYPE_4__*,int,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct platform_device*,unsigned int) ;
 struct resource* FUNC_9 (struct platform_device*,int ,char*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,struct tegra_gpio*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_17)
{
 unsigned int VAR_18, VAR_19, VAR_20;
 struct gpio_irq_chip *VAR_21;
 struct tegra_gpio *VAR_22;
 struct resource *VAR_23;
 char **VAR_24;
 int VAR_25;

 VAR_22 = FUNC_6(&VAR_17->dev, sizeof(*VAR_22), VAR_1);
 if (!VAR_22)
  return -VAR_0;

 VAR_22->soc = FUNC_7(&VAR_17->dev);

 VAR_23 = FUNC_9(VAR_17, VAR_2, "gpio");
 VAR_22->base = FUNC_3(&VAR_17->dev, VAR_23);
 if (FUNC_0(VAR_22->base))
  return FUNC_1(VAR_22->base);

 VAR_25 = FUNC_10(VAR_17);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_22->num_irq = VAR_25;

 VAR_22->irq = FUNC_5(&VAR_17->dev, VAR_22->num_irq, sizeof(*VAR_22->irq),
     VAR_1);
 if (!VAR_22->irq)
  return -VAR_0;

 for (VAR_18 = 0; VAR_18 < VAR_22->num_irq; VAR_18++) {
  VAR_25 = FUNC_8(VAR_17, VAR_18);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_22->irq[VAR_18] = VAR_25;
 }

 VAR_22->gpio.label = VAR_22->soc->name;
 VAR_22->gpio.parent = &VAR_17->dev;

 VAR_22->gpio.get_direction = VAR_8;
 VAR_22->gpio.direction_input = VAR_5;
 VAR_22->gpio.direction_output = VAR_6;
 VAR_22->gpio.get = VAR_7,
 VAR_22->gpio.set = VAR_12;

 VAR_22->gpio.base = -1;

 for (VAR_18 = 0; VAR_18 < VAR_22->soc->num_ports; VAR_18++)
  VAR_22->gpio.ngpio += VAR_22->soc->ports[VAR_18].pins;

 VAR_24 = FUNC_5(VAR_22->gpio.parent, VAR_22->gpio.ngpio,
        sizeof(*VAR_24), VAR_1);
 if (!VAR_24)
  return -VAR_0;

 for (VAR_18 = 0, VAR_20 = 0; VAR_18 < VAR_22->soc->num_ports; VAR_18++) {
  const struct tegra_gpio_port *VAR_26 = &VAR_22->soc->ports[VAR_18];
  char *VAR_27;

  for (VAR_19 = 0; VAR_19 < VAR_26->pins; VAR_19++) {
   VAR_27 = FUNC_4(VAR_22->gpio.parent, VAR_1,
           "P%s.%02x", VAR_26->name, VAR_19);
   if (!VAR_27)
    return -VAR_0;

   VAR_24[VAR_20 + VAR_19] = VAR_27;
  }

  VAR_20 += VAR_26->pins;
 }

 VAR_22->gpio.names = (const char * const *)VAR_24;

 VAR_22->gpio.of_node = VAR_17->dev.of_node;
 VAR_22->gpio.of_gpio_n_cells = 2;
 VAR_22->gpio.of_xlate = VAR_11;

 VAR_22->intc.name = VAR_17->dev.of_node->name;
 VAR_22->intc.irq_ack = VAR_13;
 VAR_22->intc.irq_mask = VAR_14;
 VAR_22->intc.irq_unmask = VAR_16;
 VAR_22->intc.irq_set_type = VAR_15;

 VAR_21 = &VAR_22->gpio.irq;
 VAR_21->chip = &VAR_22->intc;
 VAR_21->domain_ops = &VAR_10;
 VAR_21->handler = VAR_4;
 VAR_21->default_type = VAR_3;
 VAR_21->parent_handler = VAR_9;
 VAR_21->parent_handler_data = VAR_22;
 VAR_21->num_parents = VAR_22->num_irq;
 VAR_21->parents = VAR_22->irq;

 VAR_21->map = FUNC_5(&VAR_17->dev, VAR_22->gpio.ngpio,
    sizeof(*VAR_21->map), VAR_1);
 if (!VAR_21->map)
  return -VAR_0;

 for (VAR_18 = 0, VAR_20 = 0; VAR_18 < VAR_22->soc->num_ports; VAR_18++) {
  const struct tegra_gpio_port *VAR_28 = &VAR_22->soc->ports[VAR_18];

  for (VAR_19 = 0; VAR_19 < VAR_28->pins; VAR_19++)
   VAR_21->map[VAR_20 + VAR_19] = VAR_21->parents[VAR_28->irq];

  VAR_20 += VAR_28->pins;
 }

 FUNC_11(VAR_17, VAR_22);

 VAR_25 = FUNC_2(&VAR_17->dev, &VAR_22->gpio, VAR_22);
 if (VAR_25 < 0)
  return VAR_25;

 return 0;
}
