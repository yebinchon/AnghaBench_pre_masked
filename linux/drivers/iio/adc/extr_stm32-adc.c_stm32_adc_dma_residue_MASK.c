
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc {unsigned int rx_buf_sz; unsigned int bufi; TYPE_1__* dma_chan; } ;
struct dma_tx_state {unsigned int residue; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_2__ {int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct dma_tx_state*) ;

__attribute__((used)) static unsigned int FUNC_1(struct stm32_adc *VAR_1)
{
 struct dma_tx_state VAR_2;
 enum dma_status VAR_3;

 VAR_3 = FUNC_0(VAR_1->dma_chan,
         VAR_1->dma_chan->cookie,
         &VAR_2);
 if (VAR_3 == VAR_0) {

  unsigned int VAR_4 = VAR_1->rx_buf_sz - VAR_2.residue;
  unsigned int VAR_5;


  if (VAR_4 >= VAR_1->bufi)
   VAR_5 = VAR_4 - VAR_1->bufi;
  else
   VAR_5 = VAR_1->rx_buf_sz + VAR_4 - VAR_1->bufi;

  return VAR_5;
 }

 return 0;
}
