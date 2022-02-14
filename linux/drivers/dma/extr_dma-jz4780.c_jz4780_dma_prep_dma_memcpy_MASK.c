
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_dma_desc {int vdesc; TYPE_1__* desc; } ;
struct jz4780_dma_chan {size_t transfer_shift; int vchan; int transfer_type; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef size_t dma_addr_t ;
struct TYPE_2__ {size_t dsa; size_t dta; int dcm; size_t dtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct jz4780_dma_desc* FUNC_0 (struct jz4780_dma_chan*,int,int ) ;
 int FUNC_1 (struct jz4780_dma_chan*,size_t,size_t*) ;
 struct jz4780_dma_chan* FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_4(
 struct dma_chan *VAR_9, dma_addr_t VAR_10, dma_addr_t VAR_11,
 size_t VAR_12, unsigned long VAR_13)
{
 struct jz4780_dma_chan *VAR_14 = FUNC_2(VAR_9);
 struct jz4780_dma_desc *VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_0(VAR_14, 1, VAR_0);
 if (!VAR_15)
  return ((void*)0);

 VAR_16 = FUNC_1(VAR_14, VAR_10 | VAR_11 | VAR_12,
           &VAR_14->transfer_shift);

 VAR_14->transfer_type = VAR_7;

 VAR_15->desc[0].dsa = VAR_11;
 VAR_15->desc[0].dta = VAR_10;
 VAR_15->desc[0].dcm = VAR_5 | VAR_3 | VAR_1 |
       VAR_16 << VAR_6 |
       VAR_8 << VAR_4 |
       VAR_8 << VAR_2;
 VAR_15->desc[0].dtc = VAR_12 >> VAR_14->transfer_shift;

 return FUNC_3(&VAR_14->vchan, &VAR_15->vdesc, VAR_13);
}
