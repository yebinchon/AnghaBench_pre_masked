
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {int prep_lock; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 struct dma_async_tx_descriptor* FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (struct mic_dma_chan*,unsigned long,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mic_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_5(struct dma_chan *VAR_0, unsigned long VAR_1)
{
 struct mic_dma_chan *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 FUNC_2(&VAR_2->prep_lock);
 VAR_3 = FUNC_1(VAR_2, VAR_1, 0, 0, 0);
 if (!VAR_3)
  return FUNC_0(VAR_2);
 FUNC_3(&VAR_2->prep_lock);
 return ((void*)0);
}
