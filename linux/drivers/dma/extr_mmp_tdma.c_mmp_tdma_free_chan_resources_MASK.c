
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {scalar_t__ irq; int dev; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,scalar_t__,struct mmp_tdma_chan*) ;
 int FUNC_1 (struct mmp_tdma_chan*) ;
 struct mmp_tdma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_3(struct dma_chan *VAR_0)
{
 struct mmp_tdma_chan *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->irq)
  FUNC_0(VAR_1->dev, VAR_1->irq, VAR_1);
 FUNC_1(VAR_1);
 return;
}
