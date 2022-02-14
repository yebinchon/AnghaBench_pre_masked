
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct page {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct mv_xor_chan {struct dma_chan dmachan; } ;
struct dmaengine_unmap_data {int from_cnt; int len; void** addr; int to_cnt; } ;
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
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (int ,char*,...) ;
 void* FUNC_4 (int ,struct page*,int ,int,int ) ;
 int FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,void*,int,int ) ;
 struct dmaengine_unmap_data* FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct dmaengine_unmap_data*) ;
 int FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct dma_chan*) ;
 int FUNC_13 (struct dma_chan*) ;
 int FUNC_14 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_15 (struct dma_chan*,void*,void**,int,int,int ) ;
 scalar_t__ FUNC_16 (struct dma_chan*,int ,int *) ;
 int FUNC_17 (struct dma_async_tx_descriptor*) ;
 void* FUNC_18 (struct page*) ;

__attribute__((used)) static int
FUNC_19(struct mv_xor_chan *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct page *VAR_12;
 struct page *VAR_13[VAR_6];
 dma_addr_t VAR_14[VAR_6];
 dma_addr_t VAR_15;
 struct dma_async_tx_descriptor *VAR_16;
 struct dmaengine_unmap_data *VAR_17;
 struct dma_chan *VAR_18;
 dma_cookie_t VAR_19;
 u8 VAR_20 = 0;
 u32 VAR_21;
 int VAR_22 = 0;
 int VAR_23 = VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_23; VAR_10++) {
  VAR_13[VAR_10] = FUNC_1(VAR_5);
  if (!VAR_13[VAR_10]) {
   while (VAR_10--)
    FUNC_0(VAR_13[VAR_10]);
   return -VAR_4;
  }
 }

 VAR_12 = FUNC_1(VAR_5);
 if (!VAR_12) {
  while (VAR_10--)
   FUNC_0(VAR_13[VAR_10]);
  return -VAR_4;
 }


 for (VAR_10 = 0; VAR_10 < VAR_23; VAR_10++) {
  u8 *VAR_24 = FUNC_18(VAR_13[VAR_10]);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   VAR_24[VAR_9] = (1 << VAR_10);
 }

 for (VAR_10 = 0; VAR_10 < VAR_23; VAR_10++)
  VAR_20 ^= (u8) (1 << VAR_10);

 VAR_21 = (VAR_20 << 24) | (VAR_20 << 16) |
  (VAR_20 << 8) | VAR_20;

 FUNC_10(FUNC_18(VAR_12), 0, VAR_7);

 VAR_18 = &VAR_8->dmachan;
 if (FUNC_12(VAR_18) < 1) {
  VAR_22 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_8(VAR_18->device->dev, VAR_23 + 1,
      VAR_5);
 if (!VAR_17) {
  VAR_22 = -VAR_4;
  goto free_resources;
 }


 for (VAR_9 = 0; VAR_9 < VAR_23; VAR_9++) {
  VAR_17->addr[VAR_9] = FUNC_4(VAR_18->device->dev, VAR_13[VAR_9],
           0, VAR_7, VAR_2);
  VAR_14[VAR_9] = VAR_17->addr[VAR_9];
  VAR_11 = FUNC_5(VAR_18->device->dev, VAR_17->addr[VAR_9]);
  if (VAR_11) {
   VAR_22 = -VAR_4;
   goto free_resources;
  }
  VAR_17->to_cnt++;
 }

 VAR_17->addr[VAR_23] = FUNC_4(VAR_18->device->dev, VAR_12, 0, VAR_7,
          VAR_1);
 VAR_15 = VAR_17->addr[VAR_23];
 VAR_11 = FUNC_5(VAR_18->device->dev, VAR_17->addr[VAR_23]);
 if (VAR_11) {
  VAR_22 = -VAR_4;
  goto free_resources;
 }
 VAR_17->from_cnt = 1;
 VAR_17->len = VAR_7;

 VAR_16 = FUNC_15(VAR_18, VAR_15, VAR_14,
     VAR_23, VAR_7, 0);
 if (!VAR_16) {
  FUNC_3(VAR_18->device->dev,
   "Self-test cannot prepare operation, disabling\n");
  VAR_22 = -VAR_3;
  goto free_resources;
 }

 VAR_19 = FUNC_17(VAR_16);
 if (FUNC_6(VAR_19)) {
  FUNC_3(VAR_18->device->dev,
   "Self-test submit error, disabling\n");
  VAR_22 = -VAR_3;
  goto free_resources;
 }

 FUNC_14(VAR_18);
 FUNC_2(VAR_16);
 FUNC_11(8);

 if (FUNC_16(VAR_18, VAR_19, ((void*)0)) !=
     VAR_0) {
  FUNC_3(VAR_18->device->dev,
   "Self-test xor timed out, disabling\n");
  VAR_22 = -VAR_3;
  goto free_resources;
 }

 FUNC_7(VAR_18->device->dev, VAR_15,
    VAR_7, VAR_1);
 for (VAR_9 = 0; VAR_9 < (VAR_7 / sizeof(u32)); VAR_9++) {
  u32 *VAR_25 = FUNC_18(VAR_12);
  if (VAR_25[VAR_9] != VAR_21) {
   FUNC_3(VAR_18->device->dev,
    "Self-test xor failed compare, disabling. index %d, data %x, expected %x\n",
    VAR_9, VAR_25[VAR_9], VAR_21);
   VAR_22 = -VAR_3;
   goto free_resources;
  }
 }

free_resources:
 FUNC_9(VAR_17);
 FUNC_13(VAR_18);
out:
 VAR_10 = VAR_23;
 while (VAR_10--)
  FUNC_0(VAR_13[VAR_10]);
 FUNC_0(VAR_12);
 return VAR_22;
}
