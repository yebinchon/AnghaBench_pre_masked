
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_platform_data {TYPE_1__* dma_slave; } ;
struct TYPE_6__ {void* chan; } ;
struct TYPE_5__ {void* chan; } ;
struct atmel_aes_dev {int dev; TYPE_3__ src; TYPE_2__ dst; } ;
struct at_dma_slave {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {struct at_dma_slave txdata; struct at_dma_slave rxdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ,struct at_dma_slave*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct atmel_aes_dev *VAR_3,
         struct crypto_platform_data *VAR_4)
{
 struct at_dma_slave *VAR_5;
 dma_cap_mask_t VAR_6;

 FUNC_2(VAR_6);
 FUNC_1(VAR_0, VAR_6);


 VAR_5 = &VAR_4->dma_slave->rxdata;
 VAR_3->src.chan = FUNC_4(VAR_6, VAR_2,
       VAR_5, VAR_3->dev, "tx");
 if (!VAR_3->src.chan)
  goto err_dma_in;

 VAR_5 = &VAR_4->dma_slave->txdata;
 VAR_3->dst.chan = FUNC_4(VAR_6, VAR_2,
       VAR_5, VAR_3->dev, "rx");
 if (!VAR_3->dst.chan)
  goto err_dma_out;

 return 0;

err_dma_out:
 FUNC_3(VAR_3->src.chan);
err_dma_in:
 FUNC_0(VAR_3->dev, "no DMA channel available\n");
 return -VAR_1;
}
