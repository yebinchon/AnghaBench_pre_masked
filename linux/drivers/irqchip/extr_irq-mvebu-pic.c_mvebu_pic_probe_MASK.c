
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct irq_chip {int irq_eoi; int irq_unmask; int irq_mask; int name; } ;
struct mvebu_pic {scalar_t__ parent_irq; int domain; struct irq_chip irq_chip; int base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct mvebu_pic* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct device_node*,int ,int *,struct mvebu_pic*) ;
 scalar_t__ FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,struct mvebu_pic*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,struct mvebu_pic*,int) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct mvebu_pic*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct mvebu_pic *VAR_13;
 struct irq_chip *VAR_14;
 struct resource *VAR_15;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(struct mvebu_pic), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_15 = FUNC_11(VAR_11, VAR_3, 0);
 VAR_13->base = FUNC_4(&VAR_11->dev, VAR_15);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_14 = &VAR_13->irq_chip;
 VAR_14->name = FUNC_3(&VAR_11->dev);
 VAR_14->irq_mask = VAR_9;
 VAR_14->irq_unmask = VAR_10;
 VAR_14->irq_eoi = VAR_7;

 VAR_13->parent_irq = FUNC_7(VAR_12, 0);
 if (VAR_13->parent_irq <= 0) {
  FUNC_2(&VAR_11->dev, "Failed to parse parent interrupt\n");
  return -VAR_0;
 }

 VAR_13->domain = FUNC_6(VAR_12, VAR_4,
         &VAR_5, VAR_13);
 if (!VAR_13->domain) {
  FUNC_2(&VAR_11->dev, "Failed to allocate irq domain\n");
  return -VAR_1;
 }

 FUNC_8(VAR_13->parent_irq, VAR_8);
 FUNC_9(VAR_13->parent_irq, VAR_13);

 FUNC_10(VAR_6, VAR_13, 1);

 FUNC_12(VAR_11, VAR_13);

 return 0;
}
