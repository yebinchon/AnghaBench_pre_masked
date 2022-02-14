
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct device {struct crypto_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct crypto_platform_data {int dma_slave; } ;
struct TYPE_5__ {scalar_t__ has_dma; scalar_t__ has_sha_384_512; scalar_t__ has_sha224; } ;
struct TYPE_4__ {int chan; } ;
struct atmel_sha_dev {int irq; int done_task; int queue_task; struct crypto_platform_data* iclk; TYPE_2__ caps; int list; TYPE_1__ dma_lch_in; struct crypto_platform_data* io_base; int phys_base; int queue; int lock; struct device* dev; } ;
struct TYPE_6__ {int lock; int dev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct crypto_platform_data*) ;
 int FUNC_2 (struct crypto_platform_data*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_3 (struct atmel_sha_dev*) ;
 int FUNC_4 (struct atmel_sha_dev*,struct crypto_platform_data*) ;
 int VAR_8 ;
 int FUNC_5 (struct atmel_sha_dev*) ;
 int FUNC_6 (struct atmel_sha_dev*) ;
 int VAR_9 ;
 struct crypto_platform_data* FUNC_7 (struct platform_device*) ;
 int VAR_10 ;
 int FUNC_8 (struct atmel_sha_dev*) ;
 int FUNC_9 (struct crypto_platform_data*) ;
 int FUNC_10 (struct crypto_platform_data*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,char*,char*,...) ;
 struct crypto_platform_data* FUNC_14 (struct device*,char*) ;
 struct crypto_platform_data* FUNC_15 (struct device*,struct resource*) ;
 struct atmel_sha_dev* FUNC_16 (struct device*,int,int ) ;
 int FUNC_17 (struct device*,int,int ,int ,char*,struct atmel_sha_dev*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct atmel_sha_dev*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ,unsigned long) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_11)
{
 struct atmel_sha_dev *VAR_12;
 struct crypto_platform_data *VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 struct resource *VAR_15;
 int VAR_16;

 VAR_12 = FUNC_16(&VAR_11->dev, sizeof(*VAR_12), VAR_4);
 if (VAR_12 == ((void*)0)) {
  VAR_16 = -VAR_2;
  goto sha_dd_err;
 }

 VAR_12->dev = VAR_14;

 FUNC_23(VAR_11, VAR_12);

 FUNC_0(&VAR_12->list);
 FUNC_25(&VAR_12->lock);

 FUNC_27(&VAR_12->done_task, VAR_8,
     (unsigned long)VAR_12);
 FUNC_27(&VAR_12->queue_task, VAR_10,
     (unsigned long)VAR_12);

 FUNC_11(&VAR_12->queue, VAR_0);


 VAR_15 = FUNC_22(VAR_11, VAR_5, 0);
 if (!VAR_15) {
  FUNC_12(VAR_14, "no MEM resource info\n");
  VAR_16 = -VAR_1;
  goto res_err;
 }
 VAR_12->phys_base = VAR_15->start;


 VAR_12->irq = FUNC_21(VAR_11, 0);
 if (VAR_12->irq < 0) {
  VAR_16 = VAR_12->irq;
  goto res_err;
 }

 VAR_16 = FUNC_17(&VAR_11->dev, VAR_12->irq, VAR_9,
          VAR_6, "atmel-sha", VAR_12);
 if (VAR_16) {
  FUNC_12(VAR_14, "unable to request sha irq.\n");
  goto res_err;
 }


 VAR_12->iclk = FUNC_14(&VAR_11->dev, "sha_clk");
 if (FUNC_1(VAR_12->iclk)) {
  FUNC_12(VAR_14, "clock initialization failed.\n");
  VAR_16 = FUNC_2(VAR_12->iclk);
  goto res_err;
 }

 VAR_12->io_base = FUNC_15(&VAR_11->dev, VAR_15);
 if (FUNC_1(VAR_12->io_base)) {
  FUNC_12(VAR_14, "can't ioremap\n");
  VAR_16 = FUNC_2(VAR_12->io_base);
  goto res_err;
 }

 VAR_16 = FUNC_9(VAR_12->iclk);
 if (VAR_16)
  goto res_err;

 FUNC_6(VAR_12);

 FUNC_5(VAR_12);

 if (VAR_12->caps.has_dma) {
  VAR_13 = VAR_11->dev.platform_data;
  if (!VAR_13) {
   VAR_13 = FUNC_7(VAR_11);
   if (FUNC_1(VAR_13)) {
    FUNC_12(&VAR_11->dev, "platform data not available\n");
    VAR_16 = FUNC_2(VAR_13);
    goto iclk_unprepare;
   }
  }
  if (!VAR_13->dma_slave) {
   VAR_16 = -VAR_3;
   goto iclk_unprepare;
  }
  VAR_16 = FUNC_4(VAR_12, VAR_13);
  if (VAR_16)
   goto err_sha_dma;

  FUNC_13(VAR_14, "using %s for DMA transfers\n",
    FUNC_18(VAR_12->dma_lch_in.chan));
 }

 FUNC_24(&VAR_7.lock);
 FUNC_19(&VAR_12->list, &VAR_7.dev_list);
 FUNC_26(&VAR_7.lock);

 VAR_16 = FUNC_8(VAR_12);
 if (VAR_16)
  goto err_algs;

 FUNC_13(VAR_14, "Atmel SHA1/SHA256%s%s\n",
   VAR_12->caps.has_sha224 ? "/SHA224" : "",
   VAR_12->caps.has_sha_384_512 ? "/SHA384/SHA512" : "");

 return 0;

err_algs:
 FUNC_24(&VAR_7.lock);
 FUNC_20(&VAR_12->list);
 FUNC_26(&VAR_7.lock);
 if (VAR_12->caps.has_dma)
  FUNC_3(VAR_12);
err_sha_dma:
iclk_unprepare:
 FUNC_10(VAR_12->iclk);
res_err:
 FUNC_28(&VAR_12->queue_task);
 FUNC_28(&VAR_12->done_task);
sha_dd_err:
 FUNC_12(VAR_14, "initialization failed.\n");

 return VAR_16;
}
