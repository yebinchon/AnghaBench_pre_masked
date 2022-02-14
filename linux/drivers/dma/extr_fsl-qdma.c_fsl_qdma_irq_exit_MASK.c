
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_qdma_engine {int block_number; int * queue_irq; int error_irq; } ;


 int FUNC_0 (int *,int ,struct fsl_qdma_engine*) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
         struct fsl_qdma_engine *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->dev, VAR_1->error_irq, VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->block_number; VAR_2++)
  FUNC_0(&VAR_0->dev, VAR_1->queue_irq[VAR_2], VAR_1);
}
