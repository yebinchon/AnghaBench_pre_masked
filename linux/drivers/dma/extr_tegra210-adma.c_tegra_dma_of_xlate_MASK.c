
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_adma_chan {unsigned int sreq_index; } ;
struct tegra_adma {int dma_dev; int dev; } ;
struct of_phandle_args {int args_count; unsigned int* args; } ;
struct of_dma {struct tegra_adma* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct dma_chan* FUNC_1 (int *) ;
 struct tegra_adma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_3(struct of_phandle_args *VAR_0,
        struct of_dma *VAR_1)
{
 struct tegra_adma *VAR_2 = VAR_1->of_dma_data;
 struct tegra_adma_chan *VAR_3;
 struct dma_chan *VAR_4;
 unsigned int VAR_5;

 if (VAR_0->args_count != 1)
  return ((void*)0);

 VAR_5 = VAR_0->args[0];

 if (VAR_5 == 0) {
  FUNC_0(VAR_2->dev, "DMA request must not be 0\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_1(&VAR_2->dma_dev);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_4);
 VAR_3->sreq_index = VAR_5;

 return VAR_4;
}
