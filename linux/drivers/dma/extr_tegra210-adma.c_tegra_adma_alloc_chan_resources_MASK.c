
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct tegra_adma_chan {TYPE_1__ vc; int irq; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct tegra_adma_chan*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,struct tegra_adma_chan*) ;
 int FUNC_6 (struct tegra_adma_chan*) ;
 int VAR_0 ;
 struct tegra_adma_chan* FUNC_7 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_1)
{
 struct tegra_adma_chan *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2->irq, VAR_0, 0, FUNC_1(VAR_1), VAR_2);
 if (VAR_3) {
  FUNC_0(FUNC_6(VAR_2), "failed to get interrupt for %s\n",
   FUNC_1(VAR_1));
  return VAR_3;
 }

 VAR_3 = FUNC_4(FUNC_6(VAR_2));
 if (VAR_3 < 0) {
  FUNC_3(VAR_2->irq, VAR_2);
  return VAR_3;
 }

 FUNC_2(&VAR_2->vc.chan);

 return 0;
}
