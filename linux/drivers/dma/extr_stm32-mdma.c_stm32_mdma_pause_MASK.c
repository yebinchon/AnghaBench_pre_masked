
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct stm32_mdma_chan {TYPE_1__ vchan; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct stm32_mdma_chan*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct stm32_mdma_chan*) ;
 struct stm32_mdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_0)
{
 struct stm32_mdma_chan *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->vchan.lock, VAR_2);
 VAR_3 = FUNC_4(VAR_1);
 FUNC_3(&VAR_1->vchan.lock, VAR_2);

 if (!VAR_3)
  FUNC_1(FUNC_0(VAR_1), "vchan %pK: pause\n", &VAR_1->vchan);

 return VAR_3;
}
