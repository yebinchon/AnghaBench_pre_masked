
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_cryp {struct reset_control* clk; int list; int engine; struct device* dev; struct reset_control* regs; int caps; } ;
struct reset_control {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int lock; int dev_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int FUNC_2 (struct reset_control*) ;
 int VAR_5 ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*) ;
 struct reset_control* FUNC_14 (struct device*,int *) ;
 struct stm32_cryp* FUNC_15 (struct device*,int,int ) ;
 struct reset_control* FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct device*,int,int ,int ,int ,int ,struct stm32_cryp*) ;
 struct reset_control* FUNC_18 (struct device*,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct platform_device*,int ) ;
 int FUNC_23 (struct platform_device*,struct stm32_cryp*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (struct device*,int ) ;
 int FUNC_31 (struct device*) ;
 int FUNC_32 (struct reset_control*) ;
 int FUNC_33 (struct reset_control*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_36 (int) ;

__attribute__((used)) static int FUNC_37(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct stm32_cryp *VAR_12;
 struct reset_control *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_15(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->caps = FUNC_21(VAR_11);
 if (!VAR_12->caps)
  return -VAR_1;

 VAR_12->dev = VAR_11;

 VAR_12->regs = FUNC_16(VAR_10, 0);
 if (FUNC_1(VAR_12->regs))
  return FUNC_2(VAR_12->regs);

 VAR_14 = FUNC_22(VAR_10, 0);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_15 = FUNC_17(VAR_11, VAR_14, VAR_8,
     VAR_9, VAR_4,
     FUNC_13(VAR_11), VAR_12);
 if (VAR_15) {
  FUNC_11(VAR_11, "Cannot grab IRQ\n");
  return VAR_15;
 }

 VAR_12->clk = FUNC_14(VAR_11, ((void*)0));
 if (FUNC_1(VAR_12->clk)) {
  FUNC_11(VAR_11, "Could not get clock\n");
  return FUNC_2(VAR_12->clk);
 }

 VAR_15 = FUNC_4(VAR_12->clk);
 if (VAR_15) {
  FUNC_11(VAR_12->dev, "Failed to enable clock\n");
  return VAR_15;
 }

 FUNC_30(VAR_11, VAR_0);
 FUNC_31(VAR_11);

 FUNC_26(VAR_11);
 FUNC_29(VAR_11);
 FUNC_25(VAR_11);

 VAR_13 = FUNC_18(VAR_11, ((void*)0));
 if (!FUNC_1(VAR_13)) {
  FUNC_32(VAR_13);
  FUNC_36(2);
  FUNC_33(VAR_13);
 }

 FUNC_23(VAR_10, VAR_12);

 FUNC_34(&VAR_6.lock);
 FUNC_19(&VAR_12->list, &VAR_6.dev_list);
 FUNC_35(&VAR_6.lock);


 VAR_12->engine = FUNC_5(VAR_11, 1);
 if (!VAR_12->engine) {
  FUNC_11(VAR_11, "Could not init crypto engine\n");
  VAR_15 = -VAR_2;
  goto err_engine1;
 }

 VAR_15 = FUNC_7(VAR_12->engine);
 if (VAR_15) {
  FUNC_11(VAR_11, "Could not start crypto engine\n");
  goto err_engine2;
 }

 VAR_15 = FUNC_9(VAR_7, FUNC_0(VAR_7));
 if (VAR_15) {
  FUNC_11(VAR_11, "Could not register algs\n");
  goto err_algs;
 }

 VAR_15 = FUNC_8(VAR_5, FUNC_0(VAR_5));
 if (VAR_15)
  goto err_aead_algs;

 FUNC_12(VAR_11, "Initialized\n");

 FUNC_28(VAR_11);

 return 0;

err_aead_algs:
 FUNC_10(VAR_7, FUNC_0(VAR_7));
err_algs:
err_engine2:
 FUNC_6(VAR_12->engine);
err_engine1:
 FUNC_34(&VAR_6.lock);
 FUNC_20(&VAR_12->list);
 FUNC_35(&VAR_6.lock);

 FUNC_24(VAR_11);
 FUNC_27(VAR_11);
 FUNC_24(VAR_11);
 FUNC_27(VAR_11);

 FUNC_3(VAR_12->clk);

 return VAR_15;
}
