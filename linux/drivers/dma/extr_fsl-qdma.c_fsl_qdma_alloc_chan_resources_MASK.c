
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_qdma_queue {void* comp_pool; void* desc_pool; int comp_free; } ;
struct fsl_qdma_engine {int desc_allocated; } ;
struct fsl_qdma_chan {struct fsl_qdma_queue* queue; struct fsl_qdma_engine* qdma; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (char*,int ,int ,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct fsl_qdma_queue*) ;
 struct fsl_qdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_3)
{
 int VAR_4;
 struct fsl_qdma_chan *VAR_5 = FUNC_5(VAR_3);
 struct fsl_qdma_engine *VAR_6 = VAR_5->qdma;
 struct fsl_qdma_queue *VAR_7 = VAR_5->queue;

 if (VAR_7->comp_pool && VAR_7->desc_pool)
  return VAR_6->desc_allocated;

 FUNC_0(&VAR_7->comp_free);




 VAR_7->comp_pool =
 FUNC_2("comp_pool",
   VAR_3->device->dev,
   VAR_1,
   64, 0);
 if (!VAR_7->comp_pool)
  return -VAR_0;




 VAR_7->desc_pool =
 FUNC_2("desc_pool",
   VAR_3->device->dev,
   VAR_2,
   32, 0);
 if (!VAR_7->desc_pool)
  goto err_desc_pool;

 VAR_4 = FUNC_4(VAR_7);
 if (VAR_4) {
  FUNC_1(VAR_3->device->dev,
   "failed to alloc dma buffer for S/G descriptor\n");
  goto err_mem;
 }

 VAR_6->desc_allocated++;
 return VAR_6->desc_allocated;

err_mem:
 FUNC_3(VAR_7->desc_pool);
err_desc_pool:
 FUNC_3(VAR_7->comp_pool);
 return -VAR_0;
}
