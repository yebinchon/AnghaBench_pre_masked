
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct stm32_dma_device {TYPE_1__ ddev; } ;
struct TYPE_4__ {int lock; } ;
struct stm32_dma_chan {TYPE_2__ vchan; int * desc; scalar_t__ busy; int id; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct stm32_dma_device* FUNC_5 (struct stm32_dma_chan*) ;
 int FUNC_6 (struct stm32_dma_chan*) ;
 struct stm32_dma_chan* FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (struct dma_chan*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct dma_chan *VAR_0)
{
 struct stm32_dma_chan *VAR_1 = FUNC_7(VAR_0);
 struct stm32_dma_device *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 FUNC_1(FUNC_0(VAR_1), "Freeing channel %d\n", VAR_1->id);

 if (VAR_1->busy) {
  FUNC_3(&VAR_1->vchan.lock, VAR_3);
  FUNC_6(VAR_1);
  VAR_1->desc = ((void*)0);
  FUNC_4(&VAR_1->vchan.lock, VAR_3);
 }

 FUNC_2(VAR_2->ddev.dev);

 FUNC_9(FUNC_8(VAR_0));
}
