
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct dma_pl330_chan {int dir; int burst_sz; int fifo_dma; int fifo_addr; TYPE_2__ chan; } ;
struct device {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,int ,int,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dma_pl330_chan*) ;

__attribute__((used)) static bool FUNC_4(struct dma_pl330_chan *VAR_0,
      enum dma_transfer_direction VAR_1)
{
 struct device *VAR_2 = VAR_0->chan.device->dev;
 enum dma_data_direction VAR_3 = FUNC_2(VAR_1);


 if (VAR_0->dir == VAR_3)
  return 1;

 FUNC_3(VAR_0);
 VAR_0->fifo_dma = FUNC_0(VAR_2, VAR_0->fifo_addr,
      1 << VAR_0->burst_sz, VAR_3, 0);
 if (FUNC_1(VAR_2, VAR_0->fifo_dma))
  return 0;

 VAR_0->dir = VAR_3;
 return 1;
}
