
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct irqsteer_data {int channel; int irq_count; int reg_num; scalar_t__ ipg_clk; int * irq; int domain; scalar_t__ regs; void* saved_reg; int lock; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*) ;
 void* FUNC_9 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct device_node*,int,int *,struct irqsteer_data*) ;
 int FUNC_12 (struct device_node*,int) ;
 int FUNC_13 (int ,int ,struct irqsteer_data*) ;
 int FUNC_14 (struct device_node*,char*,int*) ;
 int FUNC_15 (struct platform_device*,struct irqsteer_data*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct irqsteer_data *VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_9(&VAR_9->dev, sizeof(*VAR_11), VAR_6);
 if (!VAR_11)
  return -VAR_4;

 VAR_11->regs = FUNC_10(VAR_9, 0);
 if (FUNC_3(VAR_11->regs)) {
  FUNC_7(&VAR_9->dev, "failed to initialize reg\n");
  return FUNC_4(VAR_11->regs);
 }

 VAR_11->ipg_clk = FUNC_8(&VAR_9->dev, "ipg");
 if (FUNC_3(VAR_11->ipg_clk)) {
  VAR_14 = FUNC_4(VAR_11->ipg_clk);
  if (VAR_14 != -VAR_5)
   FUNC_7(&VAR_9->dev, "failed to get ipg clk: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_16(&VAR_11->lock);

 VAR_14 = FUNC_14(VAR_10, "fsl,num-irqs", &VAR_12);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_14(VAR_10, "fsl,channel", &VAR_11->channel);
 if (VAR_14)
  return VAR_14;





 VAR_11->irq_count = FUNC_1(VAR_12, 64);
 VAR_11->reg_num = VAR_12 / 32;

 if (FUNC_2(VAR_2)) {
  VAR_11->saved_reg = FUNC_9(&VAR_9->dev,
     sizeof(u32) * VAR_11->reg_num,
     VAR_6);
  if (!VAR_11->saved_reg)
   return -VAR_4;
 }

 VAR_14 = FUNC_6(VAR_11->ipg_clk);
 if (VAR_14) {
  FUNC_7(&VAR_9->dev, "failed to enable ipg clk: %d\n", VAR_14);
  return VAR_14;
 }


 FUNC_17(FUNC_0(VAR_11->channel), VAR_11->regs + VAR_0);

 VAR_11->domain = FUNC_11(VAR_10, VAR_11->reg_num * 32,
          &VAR_7, VAR_11);
 if (!VAR_11->domain) {
  FUNC_7(&VAR_9->dev, "failed to create IRQ domain\n");
  VAR_14 = -VAR_4;
  goto out;
 }

 if (!VAR_11->irq_count || VAR_11->irq_count > VAR_1) {
  VAR_14 = -VAR_3;
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->irq_count; VAR_13++) {
  VAR_11->irq[VAR_13] = FUNC_12(VAR_10, VAR_13);
  if (!VAR_11->irq[VAR_13]) {
   VAR_14 = -VAR_3;
   goto out;
  }

  FUNC_13(VAR_11->irq[VAR_13],
       VAR_8,
       VAR_11);
 }

 FUNC_15(VAR_9, VAR_11);

 return 0;
out:
 FUNC_5(VAR_11->ipg_clk);
 return VAR_14;
}
