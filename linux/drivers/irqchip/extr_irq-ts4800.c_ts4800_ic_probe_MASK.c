
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct irq_chip {int irq_unmask; int irq_mask; int name; } ;
struct ts4800_irq_data {int domain; struct irq_chip irq_chip; scalar_t__ base; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct resource*) ;
 struct ts4800_irq_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct device_node*,int,int *,struct ts4800_irq_data*) ;
 int FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (int,int ,struct ts4800_irq_data*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct ts4800_irq_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct ts4800_irq_data *VAR_11;
 struct irq_chip *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_9(VAR_9, VAR_3, 0);
 VAR_11->base = FUNC_4(&VAR_9->dev, VAR_13);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 FUNC_11(0xFFFF, VAR_11->base + VAR_4);

 VAR_14 = FUNC_7(VAR_10, 0);
 if (!VAR_14) {
  FUNC_2(&VAR_9->dev, "failed to get parent IRQ\n");
  return -VAR_0;
 }

 VAR_12 = &VAR_11->irq_chip;
 VAR_12->name = FUNC_3(&VAR_9->dev);
 VAR_12->irq_mask = VAR_7;
 VAR_12->irq_unmask = VAR_8;

 VAR_11->domain = FUNC_6(VAR_10, 8, &VAR_6, VAR_11);
 if (!VAR_11->domain) {
  FUNC_2(&VAR_9->dev, "cannot add IRQ domain\n");
  return -VAR_1;
 }

 FUNC_8(VAR_14,
      VAR_5, VAR_11);

 FUNC_10(VAR_9, VAR_11);

 return 0;
}
