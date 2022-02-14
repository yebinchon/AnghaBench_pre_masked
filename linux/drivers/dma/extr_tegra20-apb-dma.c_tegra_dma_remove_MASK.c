
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dma_channel {int tasklet; int irq; } ;
struct tegra_dma {struct tegra_dma_channel* channels; TYPE_1__* chip_data; int dma_dev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int nr_channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct tegra_dma_channel*) ;
 struct tegra_dma* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct tegra_dma *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;
 struct tegra_dma_channel *VAR_3;

 FUNC_0(&VAR_1->dma_dev);

 for (VAR_2 = 0; VAR_2 < VAR_1->chip_data->nr_channels; ++VAR_2) {
  VAR_3 = &VAR_1->channels[VAR_2];
  FUNC_1(VAR_3->irq, VAR_3);
  FUNC_5(&VAR_3->tasklet);
 }

 FUNC_3(&VAR_0->dev);
 if (!FUNC_4(&VAR_0->dev))
  FUNC_6(&VAR_0->dev);

 return 0;
}
