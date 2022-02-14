
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_qdma_queue {int n_cq; int bus_addr; int cq; } ;
struct fsl_qdma_format {int dummy; } ;
struct fsl_qdma_engine {int block_number; struct fsl_qdma_queue** status; int dma_dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,struct fsl_qdma_engine*) ;
 int FUNC_4 (struct device_node*) ;
 struct fsl_qdma_engine* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 int VAR_1;
 struct fsl_qdma_queue *VAR_2;
 struct device_node *VAR_3 = VAR_0->dev.of_node;
 struct fsl_qdma_engine *VAR_4 = FUNC_5(VAR_0);

 FUNC_3(VAR_0, VAR_4);
 FUNC_2(&VAR_4->dma_dev);
 FUNC_4(VAR_3);
 FUNC_0(&VAR_4->dma_dev);

 for (VAR_1 = 0; VAR_1 < VAR_4->block_number; VAR_1++) {
  VAR_2 = VAR_4->status[VAR_1];
  FUNC_1(&VAR_0->dev, sizeof(struct fsl_qdma_format) *
    VAR_2->n_cq, VAR_2->cq, VAR_2->bus_addr);
 }
 return 0;
}
