
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct jz4780_dma_dev {TYPE_2__* soc_data; } ;
struct jz4780_dma_desc {int vdesc; TYPE_3__* desc; } ;
struct jz4780_dma_chan {int vchan; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_6__ {unsigned int dtc; int dcm; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int vdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct jz4780_dma_dev* FUNC_0 (struct jz4780_dma_chan*) ;
 struct jz4780_dma_desc* FUNC_1 (struct jz4780_dma_chan*,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct jz4780_dma_chan*,TYPE_3__*,int ,int ,int) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;
 struct jz4780_dma_chan* FUNC_6 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_8(
 struct dma_chan *VAR_4, struct scatterlist *VAR_5, unsigned int VAR_6,
 enum dma_transfer_direction VAR_7, unsigned long VAR_8,
 void *VAR_9)
{
 struct jz4780_dma_chan *VAR_10 = FUNC_6(VAR_4);
 struct jz4780_dma_dev *VAR_11 = FUNC_0(VAR_10);
 struct jz4780_dma_desc *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_10, VAR_6, VAR_0);
 if (!VAR_12)
  return ((void*)0);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_14 = FUNC_3(VAR_10, &VAR_12->desc[VAR_13],
           FUNC_4(&VAR_5[VAR_13]),
           FUNC_5(&VAR_5[VAR_13]),
           VAR_7);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_10->desc->vdesc);
   return ((void*)0);
  }

  VAR_12->desc[VAR_13].dcm |= VAR_2;

  if (VAR_13 != (VAR_6 - 1) &&
      !(VAR_11->soc_data->flags & VAR_3)) {

   VAR_12->desc[VAR_13].dcm |= VAR_1;






   VAR_12->desc[VAR_13].dtc |=
    (((VAR_13 + 1) * sizeof(*VAR_12->desc)) >> 4) << 24;
  }
 }

 return FUNC_7(&VAR_10->vchan, &VAR_12->vdesc, VAR_8);
}
