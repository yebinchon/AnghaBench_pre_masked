
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {int config_init; int dma_chan; struct tegra_dma* tdma; } ;
struct tegra_dma {int dev; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct tegra_dma_channel* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0)
{
 struct tegra_dma_channel *VAR_1 = FUNC_2(VAR_0);
 struct tegra_dma *VAR_2 = VAR_1->tdma;
 int VAR_3;

 FUNC_0(&VAR_1->dma_chan);
 VAR_1->config_init = 0;

 VAR_3 = FUNC_1(VAR_2->dev);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
