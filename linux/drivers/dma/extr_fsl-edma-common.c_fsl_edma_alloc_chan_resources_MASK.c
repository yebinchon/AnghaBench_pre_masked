
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_edma_hw_tcd {int dummy; } ;
struct fsl_edma_chan {int tcd_pool; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int ,int,int,int ) ;
 struct fsl_edma_chan* FUNC_1 (struct dma_chan*) ;

int FUNC_2(struct dma_chan *VAR_0)
{
 struct fsl_edma_chan *VAR_1 = FUNC_1(VAR_0);

 VAR_1->tcd_pool = FUNC_0("tcd_pool", VAR_0->device->dev,
    sizeof(struct fsl_edma_hw_tcd),
    32, 0);
 return 0;
}
