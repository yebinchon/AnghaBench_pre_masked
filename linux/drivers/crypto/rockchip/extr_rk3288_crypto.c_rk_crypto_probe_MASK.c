
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int irq; int busy; int done_task; int queue_task; int enqueue; int unload_data; int load_data; int disable_clk; int enable_clk; int queue; struct device* dev; void* dmaclk; void* sclk; void* hclk; void* aclk; void* reg; int lock; void* rst; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int ,struct rk_crypto_info*) ;
 void* FUNC_7 (struct device*,char*) ;
 struct rk_crypto_info* FUNC_8 (struct device*,int,int ) ;
 void* FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,char*,struct platform_device*) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct rk_crypto_info*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct rk_crypto_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int,int) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct rk_crypto_info *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_8(&VAR_12->dev,
       sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  goto err_crypto;
 }

 VAR_14->rst = FUNC_11(VAR_13, "crypto-rst");
 if (FUNC_0(VAR_14->rst)) {
  VAR_15 = FUNC_1(VAR_14->rst);
  goto err_crypto;
 }

 FUNC_14(VAR_14->rst);
 FUNC_20(10, 20);
 FUNC_15(VAR_14->rst);

 VAR_15 = FUNC_6(VAR_13, VAR_3, VAR_14);
 if (VAR_15)
  goto err_crypto;

 FUNC_17(&VAR_14->lock);

 VAR_14->reg = FUNC_9(VAR_12, 0);
 if (FUNC_0(VAR_14->reg)) {
  VAR_15 = FUNC_1(VAR_14->reg);
  goto err_crypto;
 }

 VAR_14->aclk = FUNC_7(&VAR_12->dev, "aclk");
 if (FUNC_0(VAR_14->aclk)) {
  VAR_15 = FUNC_1(VAR_14->aclk);
  goto err_crypto;
 }

 VAR_14->hclk = FUNC_7(&VAR_12->dev, "hclk");
 if (FUNC_0(VAR_14->hclk)) {
  VAR_15 = FUNC_1(VAR_14->hclk);
  goto err_crypto;
 }

 VAR_14->sclk = FUNC_7(&VAR_12->dev, "sclk");
 if (FUNC_0(VAR_14->sclk)) {
  VAR_15 = FUNC_1(VAR_14->sclk);
  goto err_crypto;
 }

 VAR_14->dmaclk = FUNC_7(&VAR_12->dev, "apb_pclk");
 if (FUNC_0(VAR_14->dmaclk)) {
  VAR_15 = FUNC_1(VAR_14->dmaclk);
  goto err_crypto;
 }

 VAR_14->irq = FUNC_12(VAR_12, 0);
 if (VAR_14->irq < 0) {
  FUNC_5(VAR_14->dev,
    "control Interrupt is not available.\n");
  VAR_15 = VAR_14->irq;
  goto err_crypto;
 }

 VAR_15 = FUNC_10(&VAR_12->dev, VAR_14->irq,
          VAR_8, VAR_2,
          "rk-crypto", VAR_12);

 if (VAR_15) {
  FUNC_3(VAR_14->dev, "irq request failed.\n");
  goto err_crypto;
 }

 VAR_14->dev = &VAR_12->dev;
 FUNC_13(VAR_12, VAR_14);

 FUNC_18(&VAR_14->queue_task,
       VAR_9, (unsigned long)VAR_14);
 FUNC_18(&VAR_14->done_task,
       VAR_5, (unsigned long)VAR_14);
 FUNC_2(&VAR_14->queue, 50);

 VAR_14->enable_clk = VAR_6;
 VAR_14->disable_clk = VAR_4;
 VAR_14->load_data = VAR_10;
 VAR_14->unload_data = VAR_11;
 VAR_14->enqueue = VAR_7;
 VAR_14->busy = 0;

 VAR_15 = FUNC_16(VAR_14);
 if (VAR_15) {
  FUNC_3(VAR_13, "err in register alg");
  goto err_register_alg;
 }

 FUNC_4(VAR_13, "Crypto Accelerator successfully registered\n");
 return 0;

err_register_alg:
 FUNC_19(&VAR_14->queue_task);
 FUNC_19(&VAR_14->done_task);
err_crypto:
 return VAR_15;
}
