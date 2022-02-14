
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct arasan_cf_dev* callback_param; int callback; } ;
struct arasan_cf_dev {TYPE_2__* host; int dma_completion; struct dma_chan* dma_chan; } ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* device_issue_pending ) (struct dma_chan*) ;struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,int ,int ,int ,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,int ,int ,int ,unsigned long) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct arasan_cf_dev *VAR_5, dma_addr_t VAR_6, dma_addr_t VAR_7, u32 VAR_8)
{
 struct dma_async_tx_descriptor *VAR_9;
 struct dma_chan *VAR_10 = VAR_5->dma_chan;
 dma_cookie_t VAR_11;
 unsigned long VAR_12 = VAR_0;
 int VAR_13 = 0;

 VAR_9 = VAR_10->device->device_prep_dma_memcpy(VAR_10, VAR_7, VAR_6, VAR_8, VAR_12);
 if (!VAR_9) {
  FUNC_0(VAR_5->host->dev, "device_prep_dma_memcpy failed\n");
  return -VAR_1;
 }

 VAR_9->callback = VAR_4;
 VAR_9->callback_param = VAR_5;
 VAR_11 = VAR_9->tx_submit(VAR_9);

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_5->host->dev, "dma_submit_error\n");
  return VAR_13;
 }

 VAR_10->device->device_issue_pending(VAR_10);


 if (!FUNC_6(&VAR_5->dma_completion, VAR_3)) {
  FUNC_2(VAR_10);
  FUNC_0(VAR_5->host->dev, "wait_for_completion_timeout\n");
  return -VAR_2;
 }

 return VAR_13;
}
