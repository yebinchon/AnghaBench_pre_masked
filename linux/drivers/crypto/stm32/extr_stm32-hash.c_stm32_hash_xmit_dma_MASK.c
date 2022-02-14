
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_dev {int dma_lch; int dev; int dma_completion; int flags; } ;
struct scatterlist {int dummy; } ;
struct dma_async_tx_descriptor {struct stm32_hash_dev* callback_param; int callback; } ;
typedef int dma_cookie_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (int ,struct scatterlist*,int,int ,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int FUNC_9 (struct stm32_hash_dev*,int ) ;
 int FUNC_10 (struct stm32_hash_dev*,int) ;
 int FUNC_11 (struct stm32_hash_dev*,int ,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct stm32_hash_dev *VAR_13,
          struct scatterlist *VAR_14, int VAR_15, int VAR_16)
{
 struct dma_async_tx_descriptor *VAR_17;
 dma_cookie_t VAR_18;
 u32 VAR_19;
 int VAR_20;

 VAR_17 = FUNC_4(VAR_13->dma_lch, VAR_14, 1,
       VAR_2, VAR_3 |
       VAR_1);
 if (!VAR_17) {
  FUNC_0(VAR_13->dev, "dmaengine_prep_slave error\n");
  return -VAR_5;
 }

 FUNC_8(&VAR_13->dma_completion);
 VAR_17->callback = VAR_12;
 VAR_17->callback_param = VAR_13;

 VAR_13->flags |= VAR_11;
 VAR_13->flags |= VAR_10;

 VAR_19 = FUNC_9(VAR_13, VAR_7);

 if (VAR_16)
  VAR_19 |= VAR_9;
 else
  VAR_19 &= ~VAR_9;

 VAR_19 |= VAR_8;

 FUNC_11(VAR_13, VAR_7, VAR_19);

 FUNC_10(VAR_13, VAR_15);

 VAR_18 = FUNC_5(VAR_17);
 VAR_20 = FUNC_3(VAR_18);
 if (VAR_20)
  return -VAR_5;

 FUNC_2(VAR_13->dma_lch);

 if (!FUNC_12(&VAR_13->dma_completion,
      FUNC_7(100)))
  VAR_20 = -VAR_6;

 if (FUNC_1(VAR_13->dma_lch, VAR_18,
         ((void*)0), ((void*)0)) != VAR_0)
  VAR_20 = -VAR_6;

 if (VAR_20) {
  FUNC_0(VAR_13->dev, "DMA Error %i\n", VAR_20);
  FUNC_6(VAR_13->dma_lch);
  return VAR_20;
 }

 return -VAR_4;
}
