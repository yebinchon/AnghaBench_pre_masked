
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dma_chan {TYPE_1__* device; } ;
struct mv_xor_chan {struct dma_chan dmachan; } ;
struct dmaengine_unmap_data {int to_cnt; int from_cnt; int len; void** addr; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_cookie_t ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int,int ) ;
 struct dmaengine_unmap_data* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct dmaengine_unmap_data*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int,int ) ;
 void* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (void*,void*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct dma_chan*) ;
 int FUNC_14 (struct dma_chan*) ;
 int FUNC_15 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_16 (struct dma_chan*,void*,void*,int,int ) ;
 scalar_t__ FUNC_17 (struct dma_chan*,int ,int *) ;
 int FUNC_18 (struct dma_async_tx_descriptor*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*) ;

__attribute__((used)) static int FUNC_21(struct mv_xor_chan *VAR_7)
{
 int VAR_8, VAR_9;
 void *VAR_10, *VAR_11;
 dma_addr_t VAR_12, VAR_13;
 struct dma_chan *VAR_14;
 dma_cookie_t VAR_15;
 struct dma_async_tx_descriptor *VAR_16;
 struct dmaengine_unmap_data *VAR_17;
 int VAR_18 = 0;

 VAR_10 = FUNC_9(VAR_6, VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_11 = FUNC_10(VAR_6, VAR_5);
 if (!VAR_11) {
  FUNC_8(VAR_10);
  return -VAR_4;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  ((u8 *) VAR_10)[VAR_8] = (u8)VAR_8;

 VAR_14 = &VAR_7->dmachan;
 if (FUNC_13(VAR_14) < 1) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_6(VAR_14->device->dev, 2, VAR_5);
 if (!VAR_17) {
  VAR_18 = -VAR_4;
  goto free_resources;
 }

 VAR_12 = FUNC_2(VAR_14->device->dev, FUNC_20(VAR_10),
          FUNC_19(VAR_10), VAR_6,
          VAR_2);
 VAR_17->addr[0] = VAR_12;

 VAR_9 = FUNC_3(VAR_14->device->dev, VAR_12);
 if (VAR_9) {
  VAR_18 = -VAR_4;
  goto free_resources;
 }
 VAR_17->to_cnt = 1;

 VAR_13 = FUNC_2(VAR_14->device->dev, FUNC_20(VAR_11),
    FUNC_19(VAR_11), VAR_6,
    VAR_1);
 VAR_17->addr[1] = VAR_13;

 VAR_9 = FUNC_3(VAR_14->device->dev, VAR_13);
 if (VAR_9) {
  VAR_18 = -VAR_4;
  goto free_resources;
 }
 VAR_17->from_cnt = 1;
 VAR_17->len = VAR_6;

 VAR_16 = FUNC_16(VAR_14, VAR_13, VAR_12,
        VAR_6, 0);
 if (!VAR_16) {
  FUNC_1(VAR_14->device->dev,
   "Self-test cannot prepare operation, disabling\n");
  VAR_18 = -VAR_3;
  goto free_resources;
 }

 VAR_15 = FUNC_18(VAR_16);
 if (FUNC_4(VAR_15)) {
  FUNC_1(VAR_14->device->dev,
   "Self-test submit error, disabling\n");
  VAR_18 = -VAR_3;
  goto free_resources;
 }

 FUNC_15(VAR_14);
 FUNC_0(VAR_16);
 FUNC_12(1);

 if (FUNC_17(VAR_14, VAR_15, ((void*)0)) !=
     VAR_0) {
  FUNC_1(VAR_14->device->dev,
   "Self-test copy timed out, disabling\n");
  VAR_18 = -VAR_3;
  goto free_resources;
 }

 FUNC_5(VAR_14->device->dev, VAR_13,
    VAR_6, VAR_1);
 if (FUNC_11(VAR_10, VAR_11, VAR_6)) {
  FUNC_1(VAR_14->device->dev,
   "Self-test copy failed compare, disabling\n");
  VAR_18 = -VAR_3;
  goto free_resources;
 }

free_resources:
 FUNC_7(VAR_17);
 FUNC_14(VAR_14);
out:
 FUNC_8(VAR_10);
 FUNC_8(VAR_11);
 return VAR_18;
}
