
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zx_dma_desc_sw {size_t size; int vd; int desc_hw_lli; TYPE_2__* desc_hw; } ;
struct zx_dma_chan {int cyclic; size_t dev_addr; int ccfg; int vc; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;
struct TYPE_4__ {int lli; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct zx_dma_chan* FUNC_1 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_2 (int *,int *,unsigned long) ;
 struct zx_dma_desc_sw* FUNC_3 (int,struct dma_chan*) ;
 int FUNC_4 (struct zx_dma_desc_sw*,size_t,size_t,size_t,int ,int) ;
 scalar_t__ FUNC_5 (struct zx_dma_chan*,int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_6(
  struct dma_chan *VAR_4, dma_addr_t VAR_5, size_t VAR_6,
  size_t VAR_7, enum dma_transfer_direction VAR_8,
  unsigned long VAR_9)
{
 struct zx_dma_chan *VAR_10 = FUNC_1(VAR_4);
 struct zx_dma_desc_sw *VAR_11;
 dma_addr_t VAR_12 = 0, VAR_13 = 0;
 int VAR_14 = VAR_6 / VAR_7;
 int VAR_15 = 0, VAR_16 = 0;

 if (VAR_7 > VAR_1) {
  FUNC_0(VAR_4->device->dev, "maximum period size exceeded\n");
  return ((void*)0);
 }

 if (FUNC_5(VAR_10, VAR_8))
  return ((void*)0);

 VAR_11 = FUNC_3(VAR_14, VAR_4);
 if (!VAR_11)
  return ((void*)0);
 VAR_10->cyclic = 1;

 while (VAR_15 < VAR_6) {
  if (VAR_8 == VAR_2) {
   VAR_12 = VAR_5;
   VAR_13 = VAR_10->dev_addr;
  } else if (VAR_8 == VAR_0) {
   VAR_12 = VAR_10->dev_addr;
   VAR_13 = VAR_5;
  }
  FUNC_4(VAR_11, VAR_13, VAR_12, VAR_7, VAR_16++,
     VAR_10->ccfg | VAR_3);
  VAR_5 += VAR_7;
  VAR_15 += VAR_7;
 }

 VAR_11->desc_hw[VAR_16 - 1].lli = VAR_11->desc_hw_lli;
 VAR_11->size = VAR_6;
 return FUNC_2(&VAR_10->vc, &VAR_11->vd, VAR_9);
}
