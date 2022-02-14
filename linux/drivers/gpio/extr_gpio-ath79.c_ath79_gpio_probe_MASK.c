
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct gpio_irq_chip {int num_parents; int handler; int default_type; int * parents; int parent_handler; int * chip; } ;
struct device_node {int dummy; } ;
struct ath79_gpio_platform_data {int ngpios; int oe_inverted; } ;
struct TYPE_3__ {struct gpio_irq_chip irq; scalar_t__ base; } ;
struct ath79_gpio_ctrl {TYPE_1__ gc; int * base; int lock; } ;


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
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,struct device*,int,int *,int *,int *,int *,int *,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct ath79_gpio_platform_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,TYPE_1__*,struct ath79_gpio_ctrl*) ;
 int * FUNC_4 (struct device*,int ,int ) ;
 int * FUNC_5 (struct device*,int,int,int ) ;
 struct ath79_gpio_ctrl* FUNC_6 (struct device*,int,int ) ;
 int VAR_11 ;
 int FUNC_7 (struct device_node*,char*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*,int*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ath79_gpio_ctrl*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 struct ath79_gpio_platform_data *VAR_13 = FUNC_2(&VAR_12->dev);
 struct device *VAR_14 = &VAR_12->dev;
 struct device_node *VAR_15 = VAR_14->of_node;
 struct ath79_gpio_ctrl *VAR_16;
 struct gpio_irq_chip *VAR_17;
 struct resource *VAR_18;
 u32 VAR_19;
 bool VAR_20;
 int VAR_21;

 VAR_16 = FUNC_6(VAR_14, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_5;
 FUNC_12(VAR_12, VAR_16);

 if (VAR_15) {
  VAR_21 = FUNC_9(VAR_15, "ngpios", &VAR_19);
  if (VAR_21) {
   FUNC_1(VAR_14, "ngpios property is not valid\n");
   return VAR_21;
  }
  VAR_20 = FUNC_7(VAR_15, "qca,ar9340-gpio");
 } else if (VAR_13) {
  VAR_19 = VAR_13->ngpios;
  VAR_20 = VAR_13->oe_inverted;
 } else {
  FUNC_1(VAR_14, "No DT node or platform data found\n");
  return -VAR_4;
 }

 if (VAR_19 >= 32) {
  FUNC_1(VAR_14, "ngpios must be less than 32\n");
  return -VAR_4;
 }

 VAR_18 = FUNC_11(VAR_12, VAR_7, 0);
 if (!VAR_18)
  return -VAR_4;
 VAR_16->base = FUNC_4(VAR_14, VAR_18->start, FUNC_14(VAR_18));
 if (!VAR_16->base)
  return -VAR_5;

 FUNC_13(&VAR_16->lock);
 VAR_21 = FUNC_0(&VAR_16->gc, VAR_14, 4,
   VAR_16->base + VAR_1,
   VAR_16->base + VAR_3,
   VAR_16->base + VAR_0,
   VAR_20 ? ((void*)0) : VAR_16->base + VAR_2,
   VAR_20 ? VAR_16->base + VAR_2 : ((void*)0),
   0);
 if (VAR_21) {
  FUNC_1(VAR_14, "bgpio_init failed\n");
  return VAR_21;
 }

 VAR_16->gc.base = 0;


 if (!VAR_15 || FUNC_8(VAR_15, "interrupt-controller")) {
  VAR_17 = &VAR_16->gc.irq;
  VAR_17->chip = &VAR_10;
  VAR_17->parent_handler = VAR_9;
  VAR_17->num_parents = 1;
  VAR_17->parents = FUNC_5(VAR_14, 1, sizeof(*VAR_17->parents),
          VAR_6);
  if (!VAR_17->parents)
   return -VAR_5;
  VAR_17->parents[0] = FUNC_10(VAR_12, 0);
  VAR_17->default_type = VAR_8;
  VAR_17->handler = VAR_11;
 }

 VAR_21 = FUNC_3(VAR_14, &VAR_16->gc, VAR_16);
 if (VAR_21) {
  FUNC_1(VAR_14,
   "cannot add AR71xx GPIO chip, error=%d", VAR_21);
  return VAR_21;
 }
 return 0;
}
