
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct img_hash_dev {int dma_task; int done_task; void* hash_clk; void* sys_clk; int dma_lch; int list; int bus_addr; void* cpu_addr; void* io_base; int queue; struct device* dev; int lock; } ;
struct TYPE_2__ {int lock; int dev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*) ;
 void* FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,struct resource*) ;
 struct img_hash_dev* FUNC_12 (struct device*,int,int ) ;
 void* FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct device*,int,int ,int ,int ,struct img_hash_dev*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_17 (struct img_hash_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (struct img_hash_dev*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int) ;
 int FUNC_23 (struct platform_device*,struct img_hash_dev*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ,unsigned long) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_8)
{
 struct img_hash_dev *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_12(VAR_10, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_25(&VAR_9->lock);

 VAR_9->dev = VAR_10;

 FUNC_23(VAR_8, VAR_9);

 FUNC_0(&VAR_9->list);

 FUNC_27(&VAR_9->done_task, VAR_6, (unsigned long)VAR_9);
 FUNC_27(&VAR_9->dma_task, VAR_5, (unsigned long)VAR_9);

 FUNC_5(&VAR_9->queue, VAR_2);


 VAR_9->io_base = FUNC_13(VAR_8, 0);
 if (FUNC_1(VAR_9->io_base)) {
  VAR_13 = FUNC_2(VAR_9->io_base);
  FUNC_7(VAR_10, "can't ioremap, returned %d\n", VAR_13);

  goto res_err;
 }


 VAR_11 = FUNC_22(VAR_8, VAR_3, 1);
 VAR_9->cpu_addr = FUNC_11(VAR_10, VAR_11);
 if (FUNC_1(VAR_9->cpu_addr)) {
  FUNC_7(VAR_10, "can't ioremap write port\n");
  VAR_13 = FUNC_2(VAR_9->cpu_addr);
  goto res_err;
 }
 VAR_9->bus_addr = VAR_11->start;

 VAR_12 = FUNC_21(VAR_8, 0);
 if (VAR_12 < 0) {
  VAR_13 = VAR_12;
  goto res_err;
 }

 VAR_13 = FUNC_14(VAR_10, VAR_12, VAR_7, 0,
          FUNC_9(VAR_10), VAR_9);
 if (VAR_13) {
  FUNC_7(VAR_10, "unable to request irq\n");
  goto res_err;
 }
 FUNC_6(VAR_10, "using IRQ channel %d\n", VAR_12);

 VAR_9->hash_clk = FUNC_10(&VAR_8->dev, "hash");
 if (FUNC_1(VAR_9->hash_clk)) {
  FUNC_7(VAR_10, "clock initialization failed.\n");
  VAR_13 = FUNC_2(VAR_9->hash_clk);
  goto res_err;
 }

 VAR_9->sys_clk = FUNC_10(&VAR_8->dev, "sys");
 if (FUNC_1(VAR_9->sys_clk)) {
  FUNC_7(VAR_10, "clock initialization failed.\n");
  VAR_13 = FUNC_2(VAR_9->sys_clk);
  goto res_err;
 }

 VAR_13 = FUNC_4(VAR_9->hash_clk);
 if (VAR_13)
  goto res_err;

 VAR_13 = FUNC_4(VAR_9->sys_clk);
 if (VAR_13)
  goto clk_err;

 VAR_13 = FUNC_17(VAR_9);
 if (VAR_13)
  goto dma_err;

 FUNC_6(VAR_10, "using %s for DMA transfers\n",
  FUNC_15(VAR_9->dma_lch));

 FUNC_24(&VAR_4.lock);
 FUNC_19(&VAR_9->list, &VAR_4.dev_list);
 FUNC_26(&VAR_4.lock);

 VAR_13 = FUNC_18(VAR_9);
 if (VAR_13)
  goto err_algs;
 FUNC_8(VAR_10, "Img MD5/SHA1/SHA224/SHA256 Hardware accelerator initialized\n");

 return 0;

err_algs:
 FUNC_24(&VAR_4.lock);
 FUNC_20(&VAR_9->list);
 FUNC_26(&VAR_4.lock);
 FUNC_16(VAR_9->dma_lch);
dma_err:
 FUNC_3(VAR_9->sys_clk);
clk_err:
 FUNC_3(VAR_9->hash_clk);
res_err:
 FUNC_28(&VAR_9->done_task);
 FUNC_28(&VAR_9->dma_task);

 return VAR_13;
}
