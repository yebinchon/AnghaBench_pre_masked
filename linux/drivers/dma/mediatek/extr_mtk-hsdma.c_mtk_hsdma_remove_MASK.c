
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_4__ {int device_node; } ;
struct TYPE_5__ {int task; TYPE_1__ chan; } ;
struct mtk_hsdma_vchan {TYPE_2__ vc; } ;
struct mtk_hsdma_device {int dma_requests; int ddev; int irq; struct mtk_hsdma_vchan* vc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_hsdma_device*,int ,int ) ;
 int FUNC_3 (struct mtk_hsdma_device*) ;
 int FUNC_4 (int ) ;
 struct mtk_hsdma_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct mtk_hsdma_device *VAR_2 = FUNC_5(VAR_1);
 struct mtk_hsdma_vchan *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2->dma_requests; VAR_4++) {
  VAR_3 = &VAR_2->vc[VAR_4];

  FUNC_1(&VAR_3->vc.chan.device_node);
  FUNC_7(&VAR_3->vc.task);
 }


 FUNC_2(VAR_2, VAR_0, 0);


 FUNC_6(VAR_2->irq);


 FUNC_3(VAR_2);

 FUNC_0(&VAR_2->ddev);
 FUNC_4(VAR_1->dev.of_node);

 return 0;
}
