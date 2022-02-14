
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ slave_addr; size_t xfer_size; } ;
struct rcar_dmac_chan_map {int dir; TYPE_4__ slave; int addr; } ;
struct TYPE_6__ {scalar_t__ slave_addr; size_t xfer_size; } ;
struct TYPE_5__ {scalar_t__ slave_addr; size_t xfer_size; } ;
struct rcar_dmac_chan {int index; TYPE_2__ dst; TYPE_1__ src; struct rcar_dmac_chan_map map; } ;
struct dma_chan {TYPE_3__* device; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,size_t,scalar_t__*,int *,char*) ;
 int FUNC_1 (int ,char*,int ,size_t,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__,size_t,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,size_t,int,int ) ;
 struct rcar_dmac_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_4,
        enum dma_transfer_direction VAR_5)
{
 struct rcar_dmac_chan *VAR_6 = FUNC_5(VAR_4);
 struct rcar_dmac_chan_map *VAR_7 = &VAR_6->map;
 phys_addr_t VAR_8;
 size_t VAR_9;
 enum dma_data_direction VAR_10;

 if (VAR_5 == VAR_0) {
  VAR_8 = VAR_6->src.slave_addr;
  VAR_9 = VAR_6->src.xfer_size;
  VAR_10 = VAR_2;
 } else {
  VAR_8 = VAR_6->dst.slave_addr;
  VAR_9 = VAR_6->dst.xfer_size;
  VAR_10 = VAR_1;
 }


 if (VAR_8 == VAR_7->slave.slave_addr &&
     VAR_9 == VAR_7->slave.xfer_size &&
     VAR_10 == VAR_7->dir)
  return 0;


 if (VAR_7->slave.xfer_size)
  FUNC_4(VAR_4->device->dev, VAR_7->addr,
       VAR_7->slave.xfer_size, VAR_7->dir, 0);
 VAR_7->slave.xfer_size = 0;


 VAR_7->addr = FUNC_2(VAR_4->device->dev, VAR_8, VAR_9,
         VAR_10, 0);

 if (FUNC_3(VAR_4->device->dev, VAR_7->addr)) {
  FUNC_1(VAR_4->device->dev,
   "chan%u: failed to map %zx@%pap", VAR_6->index,
   VAR_9, &VAR_8);
  return -VAR_3;
 }

 FUNC_0(VAR_4->device->dev, "chan%u: map %zx@%pap to %pad dir: %s\n",
  VAR_6->index, VAR_9, &VAR_8, &VAR_7->addr,
  VAR_10 == VAR_2 ? "DMA_TO_DEVICE" : "DMA_FROM_DEVICE");

 VAR_7->slave.slave_addr = VAR_8;
 VAR_7->slave.xfer_size = VAR_9;
 VAR_7->dir = VAR_10;

 return 0;
}
