
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_qdma_queue {unsigned int n_cq; int id; int queue_lock; int comp_used; scalar_t__ cq; scalar_t__ virt_tail; scalar_t__ virt_head; scalar_t__ block_base; int bus_addr; } ;
struct fsl_qdma_format {int dummy; } ;
struct fsl_qdma_engine {int n_queues; int block_number; scalar_t__ block_base; } ;


 scalar_t__ FUNC_0 (struct fsl_qdma_engine*,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,unsigned int*,int) ;
 struct fsl_qdma_queue* FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct fsl_qdma_queue
*FUNC_7(struct platform_device *VAR_4,
    struct fsl_qdma_engine *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12[VAR_2];
 struct fsl_qdma_queue *VAR_13, *VAR_14;

 VAR_10 = VAR_5->n_queues;
 VAR_11 = VAR_5->block_number;

 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 VAR_7 = sizeof(*VAR_13) * VAR_10 * VAR_11;
 VAR_13 = FUNC_4(&VAR_4->dev, VAR_7, VAR_3);
 if (!VAR_13)
  return ((void*)0);

 VAR_6 = FUNC_3(&VAR_4->dev, "queue-sizes",
          VAR_12, VAR_10);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "Can't get queue-sizes.\n");
  return ((void*)0);
 }
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   if (VAR_12[VAR_8] > VAR_0 ||
       VAR_12[VAR_8] < VAR_1) {
    FUNC_2(&VAR_4->dev,
     "Get wrong queue-sizes.\n");
    return ((void*)0);
   }
   VAR_14 = VAR_13 + VAR_8 + (VAR_9 * VAR_10);

   VAR_14->cq =
   FUNC_5(&VAR_4->dev,
        sizeof(struct fsl_qdma_format) *
        VAR_12[VAR_8],
        &VAR_14->bus_addr,
        VAR_3);
   if (!VAR_14->cq)
    return ((void*)0);
   VAR_14->block_base = VAR_5->block_base +
    FUNC_0(VAR_5, VAR_9);
   VAR_14->n_cq = VAR_12[VAR_8];
   VAR_14->id = VAR_8;
   VAR_14->virt_head = VAR_14->cq;
   VAR_14->virt_tail = VAR_14->cq;



   FUNC_1(&VAR_14->comp_used);
   FUNC_6(&VAR_14->queue_lock);
  }
 }
 return VAR_13;
}
