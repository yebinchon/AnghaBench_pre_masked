
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct device {struct crypto_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct crypto_platform_data {int dma_slave; } ;
struct TYPE_7__ {int chan; } ;
struct TYPE_6__ {int chan; } ;
struct TYPE_5__ {scalar_t__ has_authenc; } ;
struct atmel_aes_dev {int irq; int queue_task; int done_task; struct crypto_platform_data* iclk; int list; TYPE_3__ dst; TYPE_2__ src; TYPE_1__ caps; struct crypto_platform_data* io_base; int phys_base; int queue; int lock; struct device* dev; } ;
struct TYPE_8__ {int lock; int dev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct crypto_platform_data*) ;
 int FUNC_2 (struct crypto_platform_data*) ;
 TYPE_4__ VAR_8 ;
 int FUNC_3 (struct atmel_aes_dev*) ;
 int FUNC_4 (struct atmel_aes_dev*) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,struct crypto_platform_data*) ;
 int VAR_9 ;
 int FUNC_7 (struct atmel_aes_dev*) ;
 int FUNC_8 (struct atmel_aes_dev*) ;
 int VAR_10 ;
 struct crypto_platform_data* FUNC_9 (struct platform_device*) ;
 int VAR_11 ;
 int FUNC_10 (struct atmel_aes_dev*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct crypto_platform_data*) ;
 int FUNC_13 (struct crypto_platform_data*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct device*,char*) ;
 int FUNC_16 (struct device*,char*,int ,int ) ;
 struct crypto_platform_data* FUNC_17 (struct device*,char*) ;
 struct crypto_platform_data* FUNC_18 (struct device*,struct resource*) ;
 struct atmel_aes_dev* FUNC_19 (struct device*,int,int ) ;
 int FUNC_20 (struct device*,int,int ,int ,char*,struct atmel_aes_dev*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct atmel_aes_dev*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,int ,unsigned long) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_12)
{
 struct atmel_aes_dev *VAR_13;
 struct crypto_platform_data *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 struct resource *VAR_16;
 int VAR_17;

 VAR_14 = VAR_12->dev.platform_data;
 if (!VAR_14) {
  VAR_14 = FUNC_9(VAR_12);
  if (FUNC_1(VAR_14)) {
   VAR_17 = FUNC_2(VAR_14);
   goto aes_dd_err;
  }
 }

 if (!VAR_14->dma_slave) {
  VAR_17 = -VAR_3;
  goto aes_dd_err;
 }

 VAR_13 = FUNC_19(&VAR_12->dev, sizeof(*VAR_13), VAR_5);
 if (VAR_13 == ((void*)0)) {
  VAR_17 = -VAR_2;
  goto aes_dd_err;
 }

 VAR_13->dev = VAR_15;

 FUNC_26(VAR_12, VAR_13);

 FUNC_0(&VAR_13->list);
 FUNC_28(&VAR_13->lock);

 FUNC_30(&VAR_13->done_task, VAR_9,
     (unsigned long)VAR_13);
 FUNC_30(&VAR_13->queue_task, VAR_11,
     (unsigned long)VAR_13);

 FUNC_14(&VAR_13->queue, VAR_0);


 VAR_16 = FUNC_25(VAR_12, VAR_6, 0);
 if (!VAR_16) {
  FUNC_15(VAR_15, "no MEM resource info\n");
  VAR_17 = -VAR_1;
  goto res_err;
 }
 VAR_13->phys_base = VAR_16->start;


 VAR_13->irq = FUNC_24(VAR_12, 0);
 if (VAR_13->irq < 0) {
  VAR_17 = VAR_13->irq;
  goto res_err;
 }

 VAR_17 = FUNC_20(&VAR_12->dev, VAR_13->irq, VAR_10,
          VAR_7, "atmel-aes", VAR_13);
 if (VAR_17) {
  FUNC_15(VAR_15, "unable to request aes irq.\n");
  goto res_err;
 }


 VAR_13->iclk = FUNC_17(&VAR_12->dev, "aes_clk");
 if (FUNC_1(VAR_13->iclk)) {
  FUNC_15(VAR_15, "clock initialization failed.\n");
  VAR_17 = FUNC_2(VAR_13->iclk);
  goto res_err;
 }

 VAR_13->io_base = FUNC_18(&VAR_12->dev, VAR_16);
 if (FUNC_1(VAR_13->io_base)) {
  FUNC_15(VAR_15, "can't ioremap\n");
  VAR_17 = FUNC_2(VAR_13->io_base);
  goto res_err;
 }

 VAR_17 = FUNC_12(VAR_13->iclk);
 if (VAR_17)
  goto res_err;

 VAR_17 = FUNC_8(VAR_13);
 if (VAR_17)
  goto iclk_unprepare;

 FUNC_7(VAR_13);
 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17)
  goto err_aes_buff;

 VAR_17 = FUNC_6(VAR_13, VAR_14);
 if (VAR_17)
  goto err_aes_dma;

 FUNC_27(&VAR_8.lock);
 FUNC_22(&VAR_13->list, &VAR_8.dev_list);
 FUNC_29(&VAR_8.lock);

 VAR_17 = FUNC_10(VAR_13);
 if (VAR_17)
  goto err_algs;

 FUNC_16(VAR_15, "Atmel AES - Using %s, %s for DMA transfers\n",
   FUNC_21(VAR_13->src.chan),
   FUNC_21(VAR_13->dst.chan));

 return 0;

err_algs:
 FUNC_27(&VAR_8.lock);
 FUNC_23(&VAR_13->list);
 FUNC_29(&VAR_8.lock);
 FUNC_5(VAR_13);
err_aes_dma:
 FUNC_3(VAR_13);
err_aes_buff:
iclk_unprepare:
 FUNC_13(VAR_13->iclk);
res_err:
 FUNC_31(&VAR_13->done_task);
 FUNC_31(&VAR_13->queue_task);
aes_dd_err:
 if (VAR_17 != -VAR_4)
  FUNC_15(VAR_15, "initialization failed.\n");

 return VAR_17;
}
