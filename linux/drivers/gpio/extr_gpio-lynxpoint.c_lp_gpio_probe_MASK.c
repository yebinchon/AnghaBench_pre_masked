
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gpio_irq_chip {int num_parents; unsigned int* parents; int handler; int default_type; int parent_handler; int init_hw; int * chip; } ;
struct gpio_chip {int base; int can_sleep; struct gpio_irq_chip irq; struct device* parent; int ngpio; int set; int get; int direction_output; int direction_input; int free; int request; int owner; int label; } ;
struct lp_gpio {struct gpio_chip chip; int lock; scalar_t__ reg_base; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,struct gpio_chip*,struct lp_gpio*) ;
 unsigned int* FUNC_3 (struct device*,int,int,int ) ;
 struct lp_gpio* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,scalar_t__,unsigned long,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct lp_gpio*) ;
 int FUNC_8 (struct device*) ;
 unsigned long FUNC_9 (struct resource*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_20)
{
 struct lp_gpio *VAR_21;
 struct gpio_chip *VAR_22;
 struct resource *VAR_23, *VAR_24;
 struct device *VAR_25 = &VAR_20->dev;
 unsigned long VAR_26;
 int VAR_27 = -VAR_2;

 VAR_21 = FUNC_4(VAR_25, sizeof(struct lp_gpio), VAR_4);
 if (!VAR_21)
  return -VAR_3;

 VAR_21->pdev = VAR_20;
 FUNC_7(VAR_20, VAR_21);

 VAR_23 = FUNC_6(VAR_20, VAR_5, 0);
 VAR_24 = FUNC_6(VAR_20, VAR_6, 0);

 if (!VAR_23) {
  FUNC_0(VAR_25, "missing IO resources\n");
  return -VAR_1;
 }

 VAR_21->reg_base = VAR_23->start;
 VAR_26 = FUNC_9(VAR_23);

 if (!FUNC_5(VAR_25, VAR_21->reg_base, VAR_26, "lp-gpio")) {
  FUNC_0(VAR_25, "failed requesting IO region 0x%x\n",
   (unsigned int)VAR_21->reg_base);
  return -VAR_0;
 }

 FUNC_10(&VAR_21->lock);

 VAR_22 = &VAR_21->chip;
 VAR_22->label = FUNC_1(VAR_25);
 VAR_22->owner = VAR_9;
 VAR_22->request = VAR_17;
 VAR_22->free = VAR_13;
 VAR_22->direction_input = VAR_11;
 VAR_22->direction_output = VAR_12;
 VAR_22->get = VAR_14;
 VAR_22->set = VAR_18;
 VAR_22->base = -1;
 VAR_22->ngpio = VAR_8;
 VAR_22->can_sleep = 0;
 VAR_22->parent = VAR_25;


 if (VAR_24 && VAR_24->start) {
  struct gpio_irq_chip *VAR_28;

  VAR_28 = &VAR_22->irq;
  VAR_28->chip = &VAR_19;
  VAR_28->init_hw = VAR_16;
  VAR_28->parent_handler = VAR_15;
  VAR_28->num_parents = 1;
  VAR_28->parents = FUNC_3(&VAR_20->dev, VAR_28->num_parents,
          sizeof(*VAR_28->parents),
          VAR_4);
  if (!VAR_28->parents)
   return -VAR_3;
  VAR_28->parents[0] = (unsigned)VAR_24->start;
  VAR_28->default_type = VAR_7;
  VAR_28->handler = VAR_10;
 }

 VAR_27 = FUNC_2(VAR_25, VAR_22, VAR_21);
 if (VAR_27) {
  FUNC_0(VAR_25, "failed adding lp-gpio chip\n");
  return VAR_27;
 }

 FUNC_8(VAR_25);

 return 0;
}
