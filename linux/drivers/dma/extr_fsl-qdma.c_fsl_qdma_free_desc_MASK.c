
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct fsl_qdma_queue {int queue_lock; int comp_free; } ;
struct fsl_qdma_comp {int list; TYPE_1__* qchan; } ;
struct TYPE_2__ {struct fsl_qdma_queue* queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct fsl_qdma_comp* FUNC_3 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 unsigned long VAR_1;
 struct fsl_qdma_comp *VAR_2;
 struct fsl_qdma_queue *VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = VAR_2->qchan->queue;

 FUNC_1(&VAR_3->queue_lock, VAR_1);
 FUNC_0(&VAR_2->list, &VAR_3->comp_free);
 FUNC_2(&VAR_3->queue_lock, VAR_1);
}
