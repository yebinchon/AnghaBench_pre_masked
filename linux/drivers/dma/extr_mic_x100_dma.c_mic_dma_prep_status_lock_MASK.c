
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mic_dma_chan {size_t head; int prep_lock; int * desc_ring; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 struct dma_async_tx_descriptor* FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mic_dma_chan*,int) ;
 int FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 (struct mic_dma_chan*,unsigned long,int ,int ,int ) ;
 int FUNC_5 (struct mic_dma_chan*) ;
 int FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mic_dma_chan* FUNC_9 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_10(struct dma_chan *VAR_0, dma_addr_t VAR_1, u64 VAR_2,
    unsigned long VAR_3)
{
 struct mic_dma_chan *VAR_4 = FUNC_9(VAR_0);
 int VAR_5;

 FUNC_7(&VAR_4->prep_lock);
 VAR_5 = FUNC_2(VAR_4, 4);
 if (VAR_5 < 0)
  goto error;
 FUNC_6(&VAR_4->desc_ring[VAR_4->head], VAR_2, VAR_1,
     0);
 FUNC_5(VAR_4);
 VAR_5 = FUNC_4(VAR_4, VAR_3, 0, 0, 0);
 if (VAR_5 < 0)
  goto error;

 return FUNC_0(VAR_4);
error:
 FUNC_1(FUNC_3(VAR_4),
  "Error enqueueing dma status descriptor, error=%d\n", VAR_5);
 FUNC_8(&VAR_4->prep_lock);
 return ((void*)0);
}
