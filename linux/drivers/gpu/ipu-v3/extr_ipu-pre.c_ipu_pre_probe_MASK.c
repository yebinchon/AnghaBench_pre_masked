
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct ipu_pre {int list; struct device* dev; int clk_axi; int buffer_virt; int buffer_paddr; int iram; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct ipu_pre* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int ,int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ipu_pre*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct resource *VAR_11;
 struct ipu_pre *VAR_12;

 VAR_12 = FUNC_5(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_11(VAR_9, VAR_3, 0);
 VAR_12->regs = FUNC_4(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_12->regs))
  return FUNC_1(VAR_12->regs);

 VAR_12->clk_axi = FUNC_3(VAR_10, "axi");
 if (FUNC_0(VAR_12->clk_axi))
  return FUNC_1(VAR_12->clk_axi);

 VAR_12->iram = FUNC_10(VAR_10->of_node, "fsl,iram", 0);
 if (!VAR_12->iram)
  return -VAR_1;






 VAR_12->buffer_virt = FUNC_6(VAR_12->iram, VAR_4 *
           VAR_5 * 4,
           &VAR_12->buffer_paddr);
 if (!VAR_12->buffer_virt)
  return -VAR_0;

 FUNC_2(VAR_12->clk_axi);

 VAR_12->dev = VAR_10;
 FUNC_12(VAR_9, VAR_12);
 FUNC_8(&VAR_8);
 FUNC_7(&VAR_12->list, &VAR_7);
 VAR_6++;
 FUNC_9(&VAR_8);

 return 0;
}
