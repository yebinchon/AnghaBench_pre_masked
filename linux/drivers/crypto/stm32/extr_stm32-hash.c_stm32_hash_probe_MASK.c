
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_hash_dev {int clk; scalar_t__ dma_lch; int list; int engine; int dma_mode; struct device* dev; int rst; int phys_base; int io_base; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int lock; int dev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*,int ,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int *) ;
 int FUNC_12 (struct device*,struct resource*) ;
 struct stm32_hash_dev* FUNC_13 (struct device*,int,int ) ;
 int FUNC_14 (struct device*,int,int ,int ,int ,int ,struct stm32_hash_dev*) ;
 int FUNC_15 (struct device*,int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct stm32_hash_dev*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*,int ) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 TYPE_1__ VAR_7 ;
 int FUNC_34 (struct stm32_hash_dev*) ;
 int FUNC_35 (struct stm32_hash_dev*,struct device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_36 (struct stm32_hash_dev*,int ) ;
 int FUNC_37 (struct stm32_hash_dev*) ;
 int FUNC_38 (int) ;

__attribute__((used)) static int FUNC_39(struct platform_device *VAR_10)
{
 struct stm32_hash_dev *VAR_11;
 struct device *VAR_12 = &VAR_10->dev;
 struct resource *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_13(VAR_12, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_20(VAR_10, VAR_5, 0);
 VAR_11->io_base = FUNC_12(VAR_12, VAR_13);
 if (FUNC_0(VAR_11->io_base))
  return FUNC_1(VAR_11->io_base);

 VAR_11->phys_base = VAR_13->start;

 VAR_14 = FUNC_35(VAR_11, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_15 = FUNC_19(VAR_10, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_14(VAR_12, VAR_15, VAR_8,
     VAR_9, VAR_6,
     FUNC_10(VAR_12), VAR_11);
 if (VAR_14) {
  FUNC_8(VAR_12, "Cannot grab IRQ\n");
  return VAR_14;
 }

 VAR_11->clk = FUNC_11(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_8(VAR_12, "failed to get clock for hash (%lu)\n",
   FUNC_1(VAR_11->clk));
  return FUNC_1(VAR_11->clk);
 }

 VAR_14 = FUNC_3(VAR_11->clk);
 if (VAR_14) {
  FUNC_8(VAR_12, "failed to enable hash clock (%d)\n", VAR_14);
  return VAR_14;
 }

 FUNC_28(VAR_12, VAR_2);
 FUNC_29(VAR_12);

 FUNC_24(VAR_12);
 FUNC_27(VAR_12);
 FUNC_23(VAR_12);

 VAR_11->rst = FUNC_15(&VAR_10->dev, ((void*)0));
 if (!FUNC_0(VAR_11->rst)) {
  FUNC_30(VAR_11->rst);
  FUNC_38(2);
  FUNC_31(VAR_11->rst);
 }

 VAR_11->dev = VAR_12;

 FUNC_21(VAR_10, VAR_11);

 VAR_14 = FUNC_34(VAR_11);
 if (VAR_14)
  FUNC_7(VAR_12, "DMA mode not available\n");

 FUNC_32(&VAR_7.lock);
 FUNC_17(&VAR_11->list, &VAR_7.dev_list);
 FUNC_33(&VAR_7.lock);


 VAR_11->engine = FUNC_4(VAR_12, 1);
 if (!VAR_11->engine) {
  VAR_14 = -VAR_0;
  goto err_engine;
 }

 VAR_14 = FUNC_6(VAR_11->engine);
 if (VAR_14)
  goto err_engine_start;

 VAR_11->dma_mode = FUNC_36(VAR_11, VAR_3);


 VAR_14 = FUNC_37(VAR_11);
 if (VAR_14)
  goto err_algs;

 FUNC_9(VAR_12, "Init HASH done HW ver %x DMA mode %u\n",
   FUNC_36(VAR_11, VAR_4), VAR_11->dma_mode);

 FUNC_26(VAR_12);

 return 0;

err_algs:
err_engine_start:
 FUNC_5(VAR_11->engine);
err_engine:
 FUNC_32(&VAR_7.lock);
 FUNC_18(&VAR_11->list);
 FUNC_33(&VAR_7.lock);

 if (VAR_11->dma_lch)
  FUNC_16(VAR_11->dma_lch);

 FUNC_22(VAR_12);
 FUNC_25(VAR_12);

 FUNC_2(VAR_11->clk);

 return VAR_14;
}
