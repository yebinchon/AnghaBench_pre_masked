
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_tx_state {int residue; } ;
struct TYPE_3__ {int rx_buf_sz; int buf_idx; TYPE_2__* dma_chan; } ;
struct at91_adc_state {TYPE_1__ dma_st; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_4__ {int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,struct dma_tx_state*) ;

__attribute__((used)) static int FUNC_1(struct at91_adc_state *VAR_1)
{
 struct dma_tx_state VAR_2;
 enum dma_status VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_1->dma_st.dma_chan,
         VAR_1->dma_st.dma_chan->cookie,
         &VAR_2);
 if (VAR_3 != VAR_0)
  return 0;


 VAR_4 = VAR_1->dma_st.rx_buf_sz - VAR_2.residue;


 if (VAR_4 >= VAR_1->dma_st.buf_idx)
  VAR_5 = VAR_4 - VAR_1->dma_st.buf_idx;
 else
  VAR_5 = VAR_1->dma_st.rx_buf_sz + VAR_4 - VAR_1->dma_st.buf_idx;
 return VAR_5;
}
