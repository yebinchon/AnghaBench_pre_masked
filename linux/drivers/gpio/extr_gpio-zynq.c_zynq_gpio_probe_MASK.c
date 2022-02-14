
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; int * chip; } ;
struct gpio_chip {struct gpio_irq_chip irq; int ngpio; int base; int get_direction; int direction_output; int direction_input; int free; int request; int set; int get; TYPE_2__* parent; int owner; int label; } ;
struct zynq_gpio {scalar_t__ irq; scalar_t__ clk; scalar_t__ base_addr; TYPE_1__* p_data; struct gpio_chip chip; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_11__ {int max_bank; int ngpio; int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;
 int* FUNC_7 (TYPE_2__*,int,int,int ) ;
 struct zynq_gpio* FUNC_8 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct gpio_chip*,struct zynq_gpio*) ;
 int VAR_6 ;
 int FUNC_11 (int ,char*) ;
 struct of_device_id* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct zynq_gpio*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,scalar_t__) ;
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

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_17)
{
 int VAR_18, VAR_19;
 struct zynq_gpio *VAR_20;
 struct gpio_chip *VAR_21;
 struct gpio_irq_chip *VAR_22;
 const struct of_device_id *VAR_23;

 VAR_20 = FUNC_8(&VAR_17->dev, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 VAR_23 = FUNC_12(VAR_14, VAR_17->dev.of_node);
 if (!VAR_23) {
  FUNC_5(&VAR_17->dev, "of_match_node() failed\n");
  return -VAR_0;
 }
 VAR_20->p_data = VAR_23->data;
 FUNC_14(VAR_17, VAR_20);

 VAR_20->base_addr = FUNC_9(VAR_17, 0);
 if (FUNC_0(VAR_20->base_addr))
  return FUNC_1(VAR_20->base_addr);

 VAR_20->irq = FUNC_13(VAR_17, 0);
 if (VAR_20->irq < 0)
  return VAR_20->irq;


 VAR_21 = &VAR_20->chip;
 VAR_21->label = VAR_20->p_data->label;
 VAR_21->owner = VAR_4;
 VAR_21->parent = &VAR_17->dev;
 VAR_21->get = VAR_12;
 VAR_21->set = VAR_16;
 VAR_21->request = VAR_15;
 VAR_21->free = VAR_10;
 VAR_21->direction_input = VAR_7;
 VAR_21->direction_output = VAR_8;
 VAR_21->get_direction = VAR_11;
 VAR_21->base = FUNC_11(VAR_17->dev.of_node, "gpio");
 VAR_21->ngpio = VAR_20->p_data->ngpio;


 VAR_20->clk = FUNC_6(&VAR_17->dev, ((void*)0));
 if (FUNC_0(VAR_20->clk)) {
  FUNC_5(&VAR_17->dev, "input clock not found.\n");
  return FUNC_1(VAR_20->clk);
 }
 VAR_18 = FUNC_4(VAR_20->clk);
 if (VAR_18) {
  FUNC_5(&VAR_17->dev, "Unable to enable clock.\n");
  return VAR_18;
 }

 FUNC_19(&VAR_17->dev);
 FUNC_16(&VAR_17->dev);
 VAR_18 = FUNC_17(&VAR_17->dev);
 if (VAR_18 < 0)
  goto err_pm_dis;


 for (VAR_19 = 0; VAR_19 < VAR_20->p_data->max_bank; VAR_19++)
  FUNC_20(VAR_5, VAR_20->base_addr +
          FUNC_2(VAR_19));


 VAR_22 = &VAR_21->irq;
 VAR_22->chip = &VAR_9;
 VAR_22->parent_handler = VAR_13;
 VAR_22->num_parents = 1;
 VAR_22->parents = FUNC_7(&VAR_17->dev, 1,
         sizeof(*VAR_22->parents),
         VAR_2);
 if (!VAR_22->parents) {
  VAR_18 = -VAR_1;
  goto err_pm_put;
 }
 VAR_22->parents[0] = VAR_20->irq;
 VAR_22->default_type = VAR_3;
 VAR_22->handler = VAR_6;


 VAR_18 = FUNC_10(VAR_21, VAR_20);
 if (VAR_18) {
  FUNC_5(&VAR_17->dev, "Failed to add gpio chip\n");
  goto err_pm_put;
 }

 FUNC_18(&VAR_17->dev);

 return 0;

err_pm_put:
 FUNC_18(&VAR_17->dev);
err_pm_dis:
 FUNC_15(&VAR_17->dev);
 FUNC_3(VAR_20->clk);

 return VAR_18;
}
