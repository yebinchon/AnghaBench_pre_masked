
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct page {int dummy; } ;
struct dmaengine_unmap_data {int to_cnt; int bidi_cnt; size_t len; void** addr; } ;
struct dma_device {struct dma_async_tx_descriptor* (* device_prep_dma_pq ) (struct dma_chan*,void**,void**,int,unsigned char*,size_t,int) ;struct device* dev; } ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct device {int dummy; } ;
struct async_submit_ctl {int flags; int depend_tx; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dma_chan* FUNC_0 (struct async_submit_ctl*,int ,struct page**,int,struct page**,int,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_chan*,struct dma_async_tx_descriptor*,struct async_submit_ctl*) ;
 void* FUNC_3 (struct device*,struct page*,int ,size_t,int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*,struct dmaengine_unmap_data*) ;
 struct dmaengine_unmap_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct dmaengine_unmap_data*) ;
 int* FUNC_7 (struct page*) ;
 int** VAR_7 ;
 struct dma_async_tx_descriptor* FUNC_8 (struct dma_chan*,void**,void**,int,unsigned char*,size_t,int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_9(struct page *VAR_8, struct page **VAR_9, unsigned char *VAR_10,
    size_t VAR_11, struct async_submit_ctl *VAR_12)
{
 struct dma_chan *VAR_13 = FUNC_0(VAR_12, VAR_2,
            &VAR_8, 1, VAR_9, 2, VAR_11);
 struct dma_device *VAR_14 = VAR_13 ? VAR_13->device : ((void*)0);
 struct dmaengine_unmap_data *VAR_15 = ((void*)0);
 const u8 *VAR_16, *VAR_17;
 u8 VAR_18, VAR_19;
 u8 *VAR_20, *VAR_21, *VAR_22;

 if (VAR_14)
  VAR_15 = FUNC_5(VAR_14->dev, 3, VAR_6);

 if (VAR_15) {
  struct device *VAR_23 = VAR_14->dev;
  dma_addr_t VAR_24[2];
  struct dma_async_tx_descriptor *VAR_25;
  enum dma_ctrl_flags VAR_26 = VAR_4;

  if (VAR_12->flags & VAR_0)
   VAR_26 |= VAR_3;
  VAR_15->addr[0] = FUNC_3(VAR_23, VAR_9[0], 0, VAR_11, VAR_5);
  VAR_15->addr[1] = FUNC_3(VAR_23, VAR_9[1], 0, VAR_11, VAR_5);
  VAR_15->to_cnt = 2;

  VAR_15->addr[2] = FUNC_3(VAR_23, VAR_8, 0, VAR_11, VAR_1);
  VAR_15->bidi_cnt = 1;

  VAR_24[1] = VAR_15->addr[2];

  VAR_15->len = VAR_11;
  VAR_25 = VAR_14->device_prep_dma_pq(VAR_13, VAR_24, VAR_15->addr, 2, VAR_10,
          VAR_11, VAR_26);
  if (VAR_25) {
   FUNC_4(VAR_25, VAR_15);
   FUNC_2(VAR_13, VAR_25, VAR_12);
   FUNC_6(VAR_15);
   return VAR_25;
  }




  FUNC_6(VAR_15);
 }


 FUNC_1(&VAR_12->depend_tx);
 VAR_16 = VAR_7[VAR_10[0]];
 VAR_17 = VAR_7[VAR_10[1]];
 VAR_20 = FUNC_7(VAR_9[0]);
 VAR_21 = FUNC_7(VAR_9[1]);
 VAR_22 = FUNC_7(VAR_8);

 while (VAR_11--) {
  VAR_18 = VAR_16[*VAR_20++];
  VAR_19 = VAR_17[*VAR_21++];
  *VAR_22++ = VAR_18 ^ VAR_19;
 }

 return ((void*)0);
}
