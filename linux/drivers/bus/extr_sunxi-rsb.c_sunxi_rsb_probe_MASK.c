
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sunxi_rsb {scalar_t__ clk; scalar_t__ rstc; scalar_t__ regs; int lock; int complete; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_2 (int) ;
 int VAR_5 ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct device*,char*,int,...) ;
 int FUNC_8 (struct device*,char*,unsigned long) ;
 int FUNC_9 (struct device*,char*,int) ;
 scalar_t__ FUNC_10 (struct device*,int *) ;
 scalar_t__ FUNC_11 (struct device*,struct resource*) ;
 struct sunxi_rsb* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,struct sunxi_rsb*) ;
 scalar_t__ FUNC_14 (struct device*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device_node*,char*,unsigned long*) ;
 int FUNC_18 (struct sunxi_rsb*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct sunxi_rsb*) ;
 int FUNC_22 (scalar_t__,unsigned long,int,int,int) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (struct sunxi_rsb*) ;
 int VAR_10 ;
 int FUNC_26 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct device_node *VAR_13 = VAR_12->of_node;
 struct resource *VAR_14;
 struct sunxi_rsb *VAR_15;
 unsigned long VAR_16;
 u32 VAR_17, VAR_18 = 3000000;
 int VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 FUNC_17(VAR_13, "clock-frequency", &VAR_18);
 if (VAR_18 > VAR_9) {
  FUNC_7(VAR_12,
   "clock-frequency (%u Hz) is too high (max = 20MHz)\n",
   VAR_18);
  return -VAR_0;
 }

 VAR_15 = FUNC_12(VAR_12, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->dev = VAR_12;
 FUNC_21(VAR_11, VAR_15);
 VAR_14 = FUNC_20(VAR_11, VAR_3, 0);
 VAR_15->regs = FUNC_11(VAR_12, VAR_14);
 if (FUNC_0(VAR_15->regs))
  return FUNC_1(VAR_15->regs);

 VAR_20 = FUNC_19(VAR_11, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_15->clk = FUNC_10(VAR_12, ((void*)0));
 if (FUNC_0(VAR_15->clk)) {
  VAR_21 = FUNC_1(VAR_15->clk);
  FUNC_7(VAR_12, "failed to retrieve clk: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_6(VAR_15->clk);
 if (VAR_21) {
  FUNC_7(VAR_12, "failed to enable clk: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_16 = FUNC_5(VAR_15->clk);

 VAR_15->rstc = FUNC_14(VAR_12, ((void*)0));
 if (FUNC_0(VAR_15->rstc)) {
  VAR_21 = FUNC_1(VAR_15->rstc);
  FUNC_7(VAR_12, "failed to retrieve reset controller: %d\n", VAR_21);
  goto err_clk_disable;
 }

 VAR_21 = FUNC_24(VAR_15->rstc);
 if (VAR_21) {
  FUNC_7(VAR_12, "failed to deassert reset line: %d\n", VAR_21);
  goto err_clk_disable;
 }

 FUNC_15(&VAR_15->complete);
 FUNC_16(&VAR_15->lock);


 FUNC_26(VAR_8, VAR_15->regs + VAR_6);
 FUNC_22(VAR_15->regs + VAR_6, VAR_22,
      !(VAR_22 & VAR_8), 1000, 100000);
 VAR_19 = VAR_16 / VAR_18 / 2;
 if (!VAR_19)
  VAR_19 = 1;
 else if (VAR_19 > VAR_5 + 1)
  VAR_19 = VAR_5 + 1;

 VAR_17 = VAR_19 >> 1;
 if (!VAR_17)
  VAR_17 = 1;

 FUNC_8(VAR_12, "RSB running at %lu Hz\n", VAR_16 / VAR_19 / 2);
 FUNC_26(FUNC_3(VAR_17) | FUNC_2(VAR_19 - 1),
        VAR_15->regs + VAR_4);

 VAR_21 = FUNC_13(VAR_12, VAR_20, VAR_10, 0, VAR_7, VAR_15);
 if (VAR_21) {
  FUNC_7(VAR_12, "can't register interrupt handler irq %d: %d\n",
   VAR_20, VAR_21);
  goto err_reset_assert;
 }


 VAR_21 = FUNC_25(VAR_15);
 if (VAR_21)
  FUNC_9(VAR_12, "Initialize device mode failed: %d\n", VAR_21);

 FUNC_18(VAR_15);

 return 0;

err_reset_assert:
 FUNC_23(VAR_15->rstc);

err_clk_disable:
 FUNC_4(VAR_15->clk);

 return VAR_21;
}
