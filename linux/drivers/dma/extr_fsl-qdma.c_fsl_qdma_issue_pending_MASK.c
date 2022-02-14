
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_qdma_queue {int queue_lock; } ;
struct TYPE_2__ {int lock; } ;
struct fsl_qdma_chan {TYPE_1__ vchan; struct fsl_qdma_queue* queue; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct fsl_qdma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 struct fsl_qdma_chan* FUNC_5 (struct dma_chan*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 unsigned long VAR_1;
 struct fsl_qdma_chan *VAR_2 = FUNC_5(VAR_0);
 struct fsl_qdma_queue *VAR_3 = VAR_2->queue;

 FUNC_2(&VAR_3->queue_lock, VAR_1);
 FUNC_1(&VAR_2->vchan.lock);
 if (FUNC_6(&VAR_2->vchan))
  FUNC_0(VAR_2);
 FUNC_3(&VAR_2->vchan.lock);
 FUNC_4(&VAR_3->queue_lock, VAR_1);
}
