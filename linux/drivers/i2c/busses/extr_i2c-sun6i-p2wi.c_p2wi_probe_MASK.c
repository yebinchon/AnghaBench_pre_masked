
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_4__ {struct device_node* of_node; struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; int owner; int * algo; int name; } ;
struct p2wi {int slave_addr; scalar_t__ clk; scalar_t__ rstc; TYPE_2__ adapter; scalar_t__ regs; int complete; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,unsigned long) ;
 scalar_t__ FUNC_9 (struct device*,int *) ;
 scalar_t__ FUNC_10 (struct device*,struct resource*) ;
 struct p2wi* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int,int ,int ,int ,struct p2wi*) ;
 scalar_t__ FUNC_13 (struct device*,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,struct p2wi*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device_node*) ;
 struct device_node* FUNC_18 (struct device_node*,int *) ;
 int FUNC_19 (struct device_node*,char*,unsigned long*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct p2wi*) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct device_node *VAR_15;
 unsigned long VAR_16;
 u32 VAR_17 = 100000;
 struct resource *VAR_18;
 struct p2wi *VAR_19;
 u32 VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 FUNC_19(VAR_14, "clock-frequency", &VAR_17);
 if (VAR_17 > VAR_8) {
  FUNC_7(VAR_13,
   "required clock-frequency (%u Hz) is too high (max = 6MHz)",
   VAR_17);
  return -VAR_0;
 }

 if (FUNC_17(VAR_14) > 1) {
  FUNC_7(VAR_13, "P2WI only supports one slave device\n");
  return -VAR_0;
 }

 VAR_19 = FUNC_11(VAR_13, sizeof(struct p2wi), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->slave_addr = -1;







 VAR_15 = FUNC_18(VAR_14, ((void*)0));
 if (VAR_15) {
  VAR_23 = FUNC_19(VAR_15, "reg", &VAR_20);
  if (VAR_23) {
   FUNC_7(VAR_13, "invalid slave address on node %pOF\n",
    VAR_15);
   return -VAR_0;
  }

  VAR_19->slave_addr = VAR_20;
 }

 VAR_18 = FUNC_21(VAR_12, VAR_3, 0);
 VAR_19->regs = FUNC_10(VAR_13, VAR_18);
 if (FUNC_0(VAR_19->regs))
  return FUNC_3(VAR_19->regs);

 FUNC_25(VAR_19->adapter.name, VAR_12->name, sizeof(VAR_19->adapter.name));
 VAR_22 = FUNC_20(VAR_12, 0);
 if (VAR_22 < 0) {
  FUNC_7(VAR_13, "failed to retrieve irq: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_19->clk = FUNC_9(VAR_13, ((void*)0));
 if (FUNC_0(VAR_19->clk)) {
  VAR_23 = FUNC_3(VAR_19->clk);
  FUNC_7(VAR_13, "failed to retrieve clk: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_6(VAR_19->clk);
 if (VAR_23) {
  FUNC_7(VAR_13, "failed to enable clk: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_16 = FUNC_5(VAR_19->clk);

 VAR_19->rstc = FUNC_13(VAR_13, ((void*)0));
 if (FUNC_0(VAR_19->rstc)) {
  VAR_23 = FUNC_3(VAR_19->rstc);
  FUNC_7(VAR_13, "failed to retrieve reset controller: %d\n", VAR_23);
  goto err_clk_disable;
 }

 VAR_23 = FUNC_24(VAR_19->rstc);
 if (VAR_23) {
  FUNC_7(VAR_13, "failed to deassert reset line: %d\n", VAR_23);
  goto err_clk_disable;
 }

 FUNC_16(&VAR_19->complete);
 VAR_19->adapter.dev.parent = VAR_13;
 VAR_19->adapter.algo = &VAR_10;
 VAR_19->adapter.owner = VAR_9;
 VAR_19->adapter.dev.of_node = VAR_12->dev.of_node;
 FUNC_22(VAR_12, VAR_19);
 FUNC_15(&VAR_19->adapter, VAR_19);

 VAR_23 = FUNC_12(VAR_13, VAR_22, VAR_11, 0, VAR_12->name, VAR_19);
 if (VAR_23) {
  FUNC_7(VAR_13, "can't register interrupt handler irq%d: %d\n",
   VAR_22, VAR_23);
  goto err_reset_assert;
 }

 FUNC_26(VAR_7, VAR_19->regs + VAR_6);

 VAR_21 = VAR_16 / VAR_17;
 if (!VAR_21) {
  FUNC_8(VAR_13,
    "clock-frequency is too high, setting it to %lu Hz\n",
    VAR_16);
  VAR_21 = 1;
 } else if (VAR_21 > VAR_5) {
  FUNC_8(VAR_13,
    "clock-frequency is too low, setting it to %lu Hz\n",
    VAR_16 / VAR_5);
  VAR_21 = VAR_5;
 }

 FUNC_26(FUNC_2(1) | FUNC_1(VAR_21),
        VAR_19->regs + VAR_4);

 VAR_23 = FUNC_14(&VAR_19->adapter);
 if (!VAR_23)
  return 0;

err_reset_assert:
 FUNC_23(VAR_19->rstc);

err_clk_disable:
 FUNC_4(VAR_19->clk);

 return VAR_23;
}
