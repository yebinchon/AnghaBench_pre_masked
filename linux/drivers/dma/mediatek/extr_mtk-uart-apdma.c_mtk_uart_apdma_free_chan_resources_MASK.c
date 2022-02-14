
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct mtk_uart_apdmadev {TYPE_1__ ddev; } ;
struct TYPE_4__ {int task; } ;
struct mtk_chan {TYPE_2__ vc; int irq; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ,struct dma_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mtk_chan* FUNC_3 (struct dma_chan*) ;
 struct mtk_uart_apdmadev* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct mtk_uart_apdmadev *VAR_1 = FUNC_4(VAR_0->device);
 struct mtk_chan *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_2->irq, VAR_0);

 FUNC_2(&VAR_2->vc.task);

 FUNC_5(&VAR_2->vc);

 FUNC_1(VAR_1->ddev.dev);
}
