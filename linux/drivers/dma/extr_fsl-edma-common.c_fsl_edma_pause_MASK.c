
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fsl_edma_chan {int idle; TYPE_1__ vchan; int status; scalar_t__ edesc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_edma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct fsl_edma_chan* FUNC_3 (struct dma_chan*) ;

int FUNC_4(struct dma_chan *VAR_1)
{
 struct fsl_edma_chan *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->vchan.lock, VAR_3);
 if (VAR_2->edesc) {
  FUNC_0(VAR_2);
  VAR_2->status = VAR_0;
  VAR_2->idle = 1;
 }
 FUNC_2(&VAR_2->vchan.lock, VAR_3);
 return 0;
}
