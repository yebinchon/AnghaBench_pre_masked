
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mic_dma_chan {int api_ch; struct dma_async_tx_descriptor* tx_array; int head; } ;
struct dma_async_tx_descriptor {int tx_submit; } ;


 int FUNC_0 (struct dma_async_tx_descriptor*,int *) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct dma_async_tx_descriptor *
FUNC_2(struct mic_dma_chan *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->head);
 struct dma_async_tx_descriptor *VAR_3 = &VAR_1->tx_array[VAR_2];

 FUNC_0(VAR_3, &VAR_1->api_ch);
 VAR_3->tx_submit = VAR_0;
 return VAR_3;
}
