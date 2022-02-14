
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct stm32_dma_chan {TYPE_1__ vchan; int busy; int desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct stm32_dma_chan*) ;
 struct stm32_dma_chan* FUNC_5 (struct dma_chan*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct stm32_dma_chan *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->vchan.lock, VAR_2);
 if (FUNC_6(&VAR_1->vchan) && !VAR_1->desc && !VAR_1->busy) {
  FUNC_1(FUNC_0(VAR_1), "vchan %pK: issued\n", &VAR_1->vchan);
  FUNC_4(VAR_1);

 }
 FUNC_3(&VAR_1->vchan.lock, VAR_2);
}
