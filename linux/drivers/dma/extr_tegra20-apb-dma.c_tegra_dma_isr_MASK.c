
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {int lock; int tasklet; int (* isr_handler ) (struct tegra_dma_channel*,int) ;int dma_chan; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tegra_dma_channel*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tegra_dma_channel*) ;
 unsigned long FUNC_6 (struct tegra_dma_channel*,int ) ;
 int FUNC_7 (struct tegra_dma_channel*,int ,unsigned long) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_4, void *VAR_5)
{
 struct tegra_dma_channel *VAR_6 = VAR_5;
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_6->lock, VAR_8);

 FUNC_8(&VAR_6->dma_chan, VAR_4);
 VAR_7 = FUNC_6(VAR_6, VAR_2);
 if (VAR_7 & VAR_3) {
  FUNC_7(VAR_6, VAR_2, VAR_7);
  VAR_6->isr_handler(VAR_6, 0);
  FUNC_4(&VAR_6->tasklet);
  FUNC_2(&VAR_6->lock, VAR_8);
  return VAR_0;
 }

 FUNC_2(&VAR_6->lock, VAR_8);
 FUNC_0(FUNC_5(VAR_6),
  "Interrupt already served status 0x%08lx\n", VAR_7);
 return VAR_1;
}
