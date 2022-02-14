
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_qdma_engine {scalar_t__ error_irq; int block_number; scalar_t__* queue_irq; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int,int ,int ,char*,struct fsl_qdma_engine*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 void* FUNC_5 (struct platform_device*,char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct platform_device *VAR_2,
    struct fsl_qdma_engine *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 char VAR_7[20];

 VAR_3->error_irq =
  FUNC_5(VAR_2, "qdma-error");
 if (VAR_3->error_irq < 0)
  return VAR_3->error_irq;

 VAR_6 = FUNC_1(&VAR_2->dev, VAR_3->error_irq,
          VAR_0, 0,
          "qDMA error", VAR_3);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "Can't register qDMA controller IRQ.\n");
  return VAR_6;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->block_number; VAR_4++) {
  FUNC_6(VAR_7, "qdma-queue%d", VAR_4);
  VAR_3->queue_irq[VAR_4] =
    FUNC_5(VAR_2, VAR_7);

  if (VAR_3->queue_irq[VAR_4] < 0)
   return VAR_3->queue_irq[VAR_4];

  VAR_6 = FUNC_1(&VAR_2->dev,
           VAR_3->queue_irq[VAR_4],
           VAR_1,
           0,
           "qDMA queue",
           VAR_3);
  if (VAR_6) {
   FUNC_0(&VAR_2->dev,
    "Can't register qDMA queue IRQ.\n");
   return VAR_6;
  }

  VAR_5 = VAR_4 % FUNC_4();
  VAR_6 = FUNC_3(VAR_3->queue_irq[VAR_4],
         FUNC_2(VAR_5));
  if (VAR_6) {
   FUNC_0(&VAR_2->dev,
    "Can't set cpu %d affinity to IRQ %d.\n",
    VAR_5,
    VAR_3->queue_irq[VAR_4]);
   return VAR_6;
  }
 }

 return 0;
}
