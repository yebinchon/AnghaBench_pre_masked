
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct fsl_edma_chan {scalar_t__ dma_dir; int dma_dev_size; int dma_dev_addr; TYPE_3__ vchan; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct fsl_edma_chan *VAR_1)
{
 if (VAR_1->dma_dir != VAR_0)
  FUNC_0(VAR_1->vchan.chan.device->dev,
       VAR_1->dma_dev_addr,
       VAR_1->dma_dev_size,
       VAR_1->dma_dir, 0);
 VAR_1->dma_dir = VAR_0;
}
