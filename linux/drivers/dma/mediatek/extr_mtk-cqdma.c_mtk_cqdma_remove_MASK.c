
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_5__ {int device_node; } ;
struct TYPE_6__ {int task; TYPE_1__ chan; } ;
struct mtk_cqdma_vchan {TYPE_2__ vc; } ;
struct mtk_cqdma_device {int dma_requests; int dma_channels; int ddev; TYPE_4__** pc; struct mtk_cqdma_vchan* vc; } ;
struct TYPE_8__ {int tasklet; int irq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_cqdma_device*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct mtk_cqdma_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct mtk_cqdma_device *VAR_3 = FUNC_5(VAR_2);
 struct mtk_cqdma_vchan *VAR_4;
 unsigned long VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_3->dma_requests; VAR_6++) {
  VAR_4 = &VAR_3->vc[VAR_6];

  FUNC_1(&VAR_4->vc.chan.device_node);
  FUNC_9(&VAR_4->vc.task);
 }


 for (VAR_6 = 0; VAR_6 < VAR_3->dma_channels; VAR_6++) {
  FUNC_6(&VAR_3->pc[VAR_6]->lock, VAR_5);
  FUNC_3(VAR_3->pc[VAR_6], VAR_0,
       VAR_1);
  FUNC_7(&VAR_3->pc[VAR_6]->lock, VAR_5);


  FUNC_8(VAR_3->pc[VAR_6]->irq);

  FUNC_9(&VAR_3->pc[VAR_6]->tasklet);
 }


 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->ddev);
 FUNC_4(VAR_2->dev.of_node);

 return 0;
}
