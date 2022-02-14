
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fsl_edma_chan {scalar_t__ pm_state; TYPE_1__ vchan; int edesc; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsl_edma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct fsl_edma_chan* FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct dma_chan *VAR_1)
{
 struct fsl_edma_chan *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->vchan.lock, VAR_3);

 if (FUNC_4(VAR_2->pm_state != VAR_0)) {
  FUNC_2(&VAR_2->vchan.lock, VAR_3);

  return;
 }

 if (FUNC_5(&VAR_2->vchan) && !VAR_2->edesc)
  FUNC_0(VAR_2);

 FUNC_2(&VAR_2->vchan.lock, VAR_3);
}
