
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct lpc18xx_gpio_pin_ic {int base; int domain; int lock; } ;
struct TYPE_2__ {struct device* parent; } ;
struct lpc18xx_gpio_chip {struct lpc18xx_gpio_pin_ic* pin_ic; TYPE_1__ gpio; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,struct lpc18xx_gpio_pin_ic*) ;
 struct lpc18xx_gpio_pin_ic* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct irq_domain*,int ,int ,int ,int *,struct lpc18xx_gpio_pin_ic*) ;
 struct irq_domain* FUNC_7 (struct device_node*) ;
 int VAR_5 ;
 int FUNC_8 (int ,int,struct resource*) ;
 struct device_node* FUNC_9 (int ) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct lpc18xx_gpio_chip *VAR_6)
{
 struct device *VAR_7 = VAR_6->gpio.parent;
 struct irq_domain *VAR_8;
 struct device_node *VAR_9;
 struct lpc18xx_gpio_pin_ic *VAR_10;
 struct resource VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_9(VAR_7->of_node);
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_7(VAR_9);
 FUNC_10(VAR_9);
 if (!VAR_8)
  return -VAR_2;

 VAR_10 = FUNC_5(VAR_7, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = FUNC_11(VAR_7->of_node, "reg-names",
      "gpio-pin-ic");
 if (VAR_13 < 0) {
  VAR_12 = -VAR_0;
  goto free_ic;
 }

 VAR_12 = FUNC_8(VAR_7->of_node, VAR_13, &VAR_11);
 if (VAR_12 < 0)
  goto free_ic;

 VAR_10->base = FUNC_2(VAR_7, &VAR_11);
 if (FUNC_0(VAR_10->base)) {
  VAR_12 = FUNC_1(VAR_10->base);
  goto free_ic;
 }

 FUNC_13(&VAR_10->lock);

 VAR_10->domain = FUNC_6(VAR_8, 0,
           VAR_4,
           VAR_7->of_node,
           &VAR_5,
           VAR_10);
 if (!VAR_10->domain) {
  FUNC_12("unable to add irq domain\n");
  VAR_12 = -VAR_0;
  goto free_iomap;
 }

 VAR_6->pin_ic = VAR_10;

 return 0;

free_iomap:
 FUNC_3(VAR_7, VAR_10->base);
free_ic:
 FUNC_4(VAR_7, VAR_10);

 return VAR_12;
}
