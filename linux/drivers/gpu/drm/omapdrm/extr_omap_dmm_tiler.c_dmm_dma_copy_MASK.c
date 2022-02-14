
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dmm {TYPE_1__* wa_dma_chan; int dev; } ;
struct dma_device {struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (TYPE_1__*,int ,int ,int,int ) ;} ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;} ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_5__ {struct dma_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct dma_async_tx_descriptor* FUNC_5 (TYPE_1__*,int ,int ,int,int ) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_7(struct dmm *VAR_2, dma_addr_t VAR_3, dma_addr_t VAR_4)
{
 struct dma_device *VAR_5 = VAR_2->wa_dma_chan->device;
 struct dma_async_tx_descriptor *VAR_6;
 enum dma_status VAR_7;
 dma_cookie_t VAR_8;

 VAR_6 = VAR_5->device_prep_dma_memcpy(VAR_2->wa_dma_chan, VAR_4, VAR_3, 4, 0);
 if (!VAR_6) {
  FUNC_0(VAR_2->dev, "Failed to prepare DMA memcpy\n");
  return -VAR_1;
 }

 VAR_8 = VAR_6->tx_submit(VAR_6);
 if (FUNC_2(VAR_8)) {
  FUNC_0(VAR_2->dev, "Failed to do DMA tx_submit\n");
  return -VAR_1;
 }

 FUNC_1(VAR_2->wa_dma_chan);
 VAR_7 = FUNC_3(VAR_2->wa_dma_chan, VAR_8);
 if (VAR_7 != VAR_0)
  FUNC_0(VAR_2->dev, "i878 wa DMA copy failure\n");

 FUNC_4(VAR_2->wa_dma_chan);
 return 0;
}
