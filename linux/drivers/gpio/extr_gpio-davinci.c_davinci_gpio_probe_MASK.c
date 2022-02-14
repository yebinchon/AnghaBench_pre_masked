
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; struct davinci_gpio_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct davinci_gpio_platform_data {unsigned int ngpio; int gpio_unbanked; int base; scalar_t__ no_auto_base; } ;
struct TYPE_2__ {unsigned int ngpio; int base; int of_gpio_n_cells; int free; int request; int of_node; struct device* parent; int set; int direction_output; int get; int direction_input; int label; } ;
struct davinci_gpio_controller {int* irqs; TYPE_1__ chip; scalar_t__* regs; int lock; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct davinci_gpio_platform_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int VAR_8 ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,TYPE_1__*,struct davinci_gpio_controller*) ;
 struct davinci_gpio_controller* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (int ,char*) ;
 scalar_t__* VAR_12 ;
 int FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,struct davinci_gpio_controller*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0;
 unsigned int VAR_17, VAR_18, VAR_19;
 struct davinci_gpio_controller *VAR_20;
 struct davinci_gpio_platform_data *VAR_21;
 struct device *VAR_22 = &VAR_13->dev;

 VAR_21 = FUNC_4(VAR_13);
 if (!VAR_21) {
  FUNC_6(VAR_22, "No platform data found\n");
  return -VAR_1;
 }

 VAR_22->platform_data = VAR_21;






 VAR_17 = VAR_21->ngpio;
 if (VAR_17 == 0) {
  FUNC_6(VAR_22, "How many GPIOs?\n");
  return -VAR_1;
 }

 if (FUNC_3(VAR_0 < VAR_17))
  VAR_17 = VAR_0;






 if (VAR_21->gpio_unbanked)
  VAR_19 = VAR_21->gpio_unbanked;
 else
  VAR_19 = FUNC_0(VAR_17, 16);

 VAR_20 = FUNC_10(VAR_22, sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_2;

 VAR_9 = FUNC_11(VAR_13, 0);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 for (VAR_15 = 0; VAR_15 < VAR_19; VAR_15++) {
  VAR_20->irqs[VAR_15] = FUNC_13(VAR_13, VAR_15);
  if (VAR_20->irqs[VAR_15] < 0) {
   if (VAR_20->irqs[VAR_15] != -VAR_3)
    FUNC_7(VAR_22, "IRQ not populated, err = %d\n",
      VAR_20->irqs[VAR_15]);
   return VAR_20->irqs[VAR_15];
  }
 }

 VAR_20->chip.label = FUNC_8(VAR_22);

 VAR_20->chip.direction_input = VAR_5;
 VAR_20->chip.get = VAR_7;
 VAR_20->chip.direction_output = VAR_6;
 VAR_20->chip.set = VAR_8;

 VAR_20->chip.ngpio = VAR_17;
 VAR_20->chip.base = VAR_21->no_auto_base ? VAR_21->base : -1;
 FUNC_15(&VAR_20->lock);

 VAR_18 = FUNC_0(VAR_17, 32);
 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++)
  VAR_20->regs[VAR_14] = VAR_9 + VAR_12[VAR_14];

 VAR_16 = FUNC_9(VAR_22, &VAR_20->chip, VAR_20);
 if (VAR_16)
  return VAR_16;

 FUNC_14(VAR_13, VAR_20);
 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16)
  return VAR_16;

 return 0;
}
