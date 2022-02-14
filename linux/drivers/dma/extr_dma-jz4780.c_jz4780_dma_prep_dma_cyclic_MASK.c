
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jz4780_dma_desc {int vdesc; TYPE_2__* desc; } ;
struct jz4780_dma_chan {int vchan; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;
struct TYPE_4__ {int dcm; unsigned int dtc; } ;
struct TYPE_3__ {int vdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jz4780_dma_desc* FUNC_0 (struct jz4780_dma_chan*,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jz4780_dma_chan*,TYPE_2__*,size_t,size_t,int) ;
 struct jz4780_dma_chan* FUNC_3 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_4 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_5(
 struct dma_chan *VAR_3, dma_addr_t VAR_4, size_t VAR_5,
 size_t VAR_6, enum dma_transfer_direction VAR_7,
 unsigned long VAR_8)
{
 struct jz4780_dma_chan *VAR_9 = FUNC_3(VAR_3);
 struct jz4780_dma_desc *VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 if (VAR_5 % VAR_6)
  return ((void*)0);

 VAR_11 = VAR_5 / VAR_6;

 VAR_10 = FUNC_0(VAR_9, VAR_11, VAR_0);
 if (!VAR_10)
  return ((void*)0);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_2(VAR_9, &VAR_10->desc[VAR_12], VAR_4,
           VAR_6, VAR_7);
  if (VAR_13 < 0) {
   FUNC_1(&VAR_9->desc->vdesc);
   return ((void*)0);
  }

  VAR_4 += VAR_6;







  VAR_10->desc[VAR_12].dcm |= VAR_2 | VAR_1;







  if (VAR_12 != (VAR_11 - 1)) {
   VAR_10->desc[VAR_12].dtc |=
    (((VAR_12 + 1) * sizeof(*VAR_10->desc)) >> 4) << 24;
  }
 }

 return FUNC_4(&VAR_9->vchan, &VAR_10->vdesc, VAR_8);
}
