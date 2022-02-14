
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int dev; } ;
struct mxs_dma_engine {TYPE_1__ dma_device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct mxs_dma_chan {scalar_t__ status; size_t desc_count; struct dma_async_tx_descriptor desc; scalar_t__ ccw_phys; struct mxs_dma_ccw* ccw; int flags; struct mxs_dma_engine* mxs_dma; } ;
struct mxs_dma_ccw {size_t bufaddr; size_t xfer_bytes; int bits; scalar_t__ next; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (int ,char*,size_t,size_t) ;
 struct mxs_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_3(
  struct dma_chan *VAR_15, dma_addr_t VAR_16, size_t VAR_17,
  size_t VAR_18, enum dma_transfer_direction VAR_19,
  unsigned long VAR_20)
{
 struct mxs_dma_chan *VAR_21 = FUNC_2(VAR_15);
 struct mxs_dma_engine *VAR_22 = VAR_21->mxs_dma;
 u32 VAR_23 = VAR_17 / VAR_18;
 u32 VAR_24 = 0, VAR_25 = 0;

 if (VAR_21->status == VAR_8)
  return ((void*)0);

 VAR_21->status = VAR_8;
 VAR_21->flags |= VAR_12;
 VAR_21->flags |= VAR_13;

 if (VAR_23 > VAR_14) {
  FUNC_1(VAR_22->dma_device.dev,
    "maximum number of sg exceeded: %d > %d\n",
    VAR_23, VAR_14);
  goto err_out;
 }

 if (VAR_18 > VAR_9) {
  FUNC_1(VAR_22->dma_device.dev,
    "maximum period size exceeded: %zu > %d\n",
    VAR_18, VAR_9);
  goto err_out;
 }

 while (VAR_25 < VAR_17) {
  struct mxs_dma_ccw *VAR_26 = &VAR_21->ccw[VAR_24];

  if (VAR_24 + 1 == VAR_23)
   VAR_26->next = VAR_21->ccw_phys;
  else
   VAR_26->next = VAR_21->ccw_phys + sizeof(*VAR_26) * (VAR_24 + 1);

  VAR_26->bufaddr = VAR_16;
  VAR_26->xfer_bytes = VAR_18;

  VAR_26->bits = 0;
  VAR_26->bits |= VAR_0;
  VAR_26->bits |= VAR_3;
  VAR_26->bits |= VAR_2;
  VAR_26->bits |= VAR_4;
  VAR_26->bits |= VAR_1;
  VAR_26->bits |= FUNC_0(VAR_19 == VAR_6 ?
    VAR_11 : VAR_10, VAR_5);

  VAR_16 += VAR_18;
  VAR_25 += VAR_18;

  VAR_24++;
 }
 VAR_21->desc_count = VAR_24;

 return &VAR_21->desc;

err_out:
 VAR_21->status = VAR_7;
 return ((void*)0);
}
