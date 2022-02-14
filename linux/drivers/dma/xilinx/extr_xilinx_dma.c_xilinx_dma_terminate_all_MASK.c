
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xilinx_dma_chan {int cyclic; int (* stop_transfer ) (struct xilinx_dma_chan*) ;int err; int idle; scalar_t__ has_sg; TYPE_2__* xdev; int dev; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dma_config; } ;
struct TYPE_3__ {scalar_t__ dmatype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct xilinx_dma_chan*,int ) ;
 int FUNC_1 (struct xilinx_dma_chan*,int ,int ) ;
 int FUNC_2 (struct xilinx_dma_chan*,int ) ;
 int FUNC_3 (struct xilinx_dma_chan*,int ,int ) ;
 int FUNC_4 (struct xilinx_dma_chan*) ;
 struct xilinx_dma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (struct xilinx_dma_chan*) ;
 int FUNC_7 (struct xilinx_dma_chan*) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_5)
{
 struct xilinx_dma_chan *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7;
 int VAR_8;

 if (VAR_6->cyclic)
  FUNC_6(VAR_6);

 VAR_8 = VAR_6->stop_transfer(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_6->dev, "Cannot stop channel %p: %x\n",
   VAR_6, FUNC_2(VAR_6, VAR_4));
  VAR_6->err = 1;
 }


 FUNC_7(VAR_6);
 VAR_6->idle = 1;

 if (VAR_6->cyclic) {
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  VAR_7 &= ~VAR_2;
  FUNC_3(VAR_6, VAR_3, VAR_7);
  VAR_6->cyclic = 0;
 }

 if ((VAR_6->xdev->dma_config->dmatype == VAR_0) && VAR_6->has_sg)
  FUNC_1(VAR_6, VAR_3,
        VAR_1);

 return 0;
}
