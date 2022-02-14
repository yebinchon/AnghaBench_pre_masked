
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {int slave_id; } ;
struct tegra_dma {int dma_dev; int dev; } ;
struct of_phandle_args {int * args; } ;
struct of_dma {struct tegra_dma* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct dma_chan* FUNC_1 (int *) ;
 struct tegra_dma_channel* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_3(struct of_phandle_args *VAR_1,
        struct of_dma *VAR_2)
{
 struct tegra_dma *VAR_3 = VAR_2->of_dma_data;
 struct dma_chan *VAR_4;
 struct tegra_dma_channel *VAR_5;

 if (VAR_1->args[0] > VAR_0) {
  FUNC_0(VAR_3->dev, "Invalid slave id: %d\n", VAR_1->args[0]);
  return ((void*)0);
 }

 VAR_4 = FUNC_1(&VAR_3->dma_dev);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->slave_id = VAR_1->args[0];

 return VAR_4;
}
