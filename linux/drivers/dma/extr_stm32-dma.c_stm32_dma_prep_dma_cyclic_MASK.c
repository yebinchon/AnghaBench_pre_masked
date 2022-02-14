
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stm32_dma_desc {int num_sgs; int cyclic; int vdesc; TYPE_2__* sg_req; } ;
struct TYPE_4__ {int dma_spar; int dma_sfcr; int dma_scr; } ;
struct stm32_dma_chan {int vchan; TYPE_1__ chan_reg; scalar_t__ busy; int config_init; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef size_t dma_addr_t ;
struct TYPE_6__ {size_t dma_sm0ar; size_t dma_sm1ar; int dma_sndtr; int dma_spar; int dma_sfcr; int dma_scr; } ;
struct TYPE_5__ {size_t len; TYPE_3__ chan_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 struct stm32_dma_desc* FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct stm32_dma_chan*,int,int*,size_t) ;
 int FUNC_5 (struct stm32_dma_desc*,int ,int) ;
 struct stm32_dma_chan* FUNC_6 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_8(
 struct dma_chan *VAR_6, dma_addr_t VAR_7, size_t VAR_8,
 size_t VAR_9, enum dma_transfer_direction VAR_10,
 unsigned long VAR_11)
{
 struct stm32_dma_chan *VAR_12 = FUNC_6(VAR_6);
 struct stm32_dma_desc *VAR_13;
 enum dma_slave_buswidth VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17, VAR_18;

 if (!VAR_8 || !VAR_9) {
  FUNC_1(FUNC_0(VAR_12), "Invalid buffer/period len\n");
  return ((void*)0);
 }

 if (!VAR_12->config_init) {
  FUNC_1(FUNC_0(VAR_12), "dma channel is not configured\n");
  return ((void*)0);
 }

 if (VAR_8 % VAR_9) {
  FUNC_1(FUNC_0(VAR_12), "buf_len not multiple of period_len\n");
  return ((void*)0);
 }







 if (VAR_12->busy) {
  FUNC_1(FUNC_0(VAR_12), "Request not allowed when dma busy\n");
  return ((void*)0);
 }

 VAR_18 = FUNC_4(VAR_12, VAR_10, &VAR_14, VAR_9);
 if (VAR_18 < 0)
  return ((void*)0);

 VAR_16 = VAR_9 / VAR_14;
 if (VAR_16 > VAR_1) {
  FUNC_1(FUNC_0(VAR_12), "number of items not supported\n");
  return ((void*)0);
 }


 if (VAR_8 == VAR_9)
  VAR_12->chan_reg.dma_scr |= VAR_2;
 else
  VAR_12->chan_reg.dma_scr |= VAR_3;


 VAR_12->chan_reg.dma_scr &= ~VAR_4;

 VAR_15 = VAR_8 / VAR_9;

 VAR_13 = FUNC_2(FUNC_5(VAR_13, VAR_5, VAR_15), VAR_0);
 if (!VAR_13)
  return ((void*)0);

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  VAR_13->sg_req[VAR_17].len = VAR_9;

  FUNC_3(&VAR_13->sg_req[VAR_17].chan_reg);
  VAR_13->sg_req[VAR_17].chan_reg.dma_scr = VAR_12->chan_reg.dma_scr;
  VAR_13->sg_req[VAR_17].chan_reg.dma_sfcr = VAR_12->chan_reg.dma_sfcr;
  VAR_13->sg_req[VAR_17].chan_reg.dma_spar = VAR_12->chan_reg.dma_spar;
  VAR_13->sg_req[VAR_17].chan_reg.dma_sm0ar = VAR_7;
  VAR_13->sg_req[VAR_17].chan_reg.dma_sm1ar = VAR_7;
  VAR_13->sg_req[VAR_17].chan_reg.dma_sndtr = VAR_16;
  VAR_7 += VAR_9;
 }

 VAR_13->num_sgs = VAR_15;
 VAR_13->cyclic = 1;

 return FUNC_7(&VAR_12->vchan, &VAR_13->vdesc, VAR_11);
}
