
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct dma_pl330_chan {scalar_t__ dir; int burst_sz; int fifo_dma; TYPE_2__ chan; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct dma_pl330_chan *VAR_1)
{
 if (VAR_1->dir != VAR_0)
  FUNC_0(VAR_1->chan.device->dev, VAR_1->fifo_dma,
       1 << VAR_1->burst_sz, VAR_1->dir, 0);
 VAR_1->dir = VAR_0;
}
