
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_fpga_priv {scalar_t__ irq; int clk; int dma_done; int slcr; int io_base; int dma_lock; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,char*) ;
 struct fpga_manager* FUNC_9 (struct device*,char*,int *,struct zynq_fpga_priv*) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct zynq_fpga_priv* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int,int ,int ,int ,struct zynq_fpga_priv*) ;
 int FUNC_13 (struct fpga_manager*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct fpga_manager*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (struct zynq_fpga_priv*,int ) ;
 int FUNC_21 (struct zynq_fpga_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct zynq_fpga_priv *VAR_11;
 struct fpga_manager *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_11(VAR_10, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_18(&VAR_11->dma_lock);

 VAR_13 = FUNC_16(VAR_9, VAR_3, 0);
 VAR_11->io_base = FUNC_10(VAR_10, VAR_13);
 if (FUNC_0(VAR_11->io_base))
  return FUNC_1(VAR_11->io_base);

 VAR_11->slcr = FUNC_19(VAR_10->of_node,
  "syscon");
 if (FUNC_0(VAR_11->slcr)) {
  FUNC_6(VAR_10, "unable to get zynq-slcr regmap\n");
  return FUNC_1(VAR_11->slcr);
 }

 FUNC_14(&VAR_11->dma_done);

 VAR_11->irq = FUNC_15(VAR_9, 0);
 if (VAR_11->irq < 0) {
  FUNC_6(VAR_10, "No IRQ available\n");
  return VAR_11->irq;
 }

 VAR_11->clk = FUNC_8(VAR_10, "ref_clk");
 if (FUNC_0(VAR_11->clk)) {
  FUNC_6(VAR_10, "input clock not found\n");
  return FUNC_1(VAR_11->clk);
 }

 VAR_14 = FUNC_4(VAR_11->clk);
 if (VAR_14) {
  FUNC_6(VAR_10, "unable to enable clock\n");
  return VAR_14;
 }


 FUNC_21(VAR_11, VAR_6, VAR_5);

 FUNC_20(VAR_11, 0);
 FUNC_21(VAR_11, VAR_2, VAR_4);
 VAR_14 = FUNC_12(VAR_10, VAR_11->irq, VAR_7, 0, FUNC_7(VAR_10),
          VAR_11);
 if (VAR_14) {
  FUNC_6(VAR_10, "unable to request IRQ\n");
  FUNC_3(VAR_11->clk);
  return VAR_14;
 }

 FUNC_2(VAR_11->clk);

 VAR_12 = FUNC_9(VAR_10, "Xilinx Zynq FPGA Manager",
       &VAR_8, VAR_11);
 if (!VAR_12)
  return -VAR_0;

 FUNC_17(VAR_9, VAR_12);

 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14) {
  FUNC_6(VAR_10, "unable to register FPGA manager\n");
  FUNC_5(VAR_11->clk);
  return VAR_14;
 }

 return 0;
}
