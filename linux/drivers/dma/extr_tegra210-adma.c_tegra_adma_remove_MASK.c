
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_adma {int nr_channels; TYPE_1__* channels; int dma_dev; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tegra_adma* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tegra_adma *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_2(VAR_0->dev.of_node);
 FUNC_0(&VAR_1->dma_dev);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_channels; ++VAR_2)
  FUNC_1(VAR_1->channels[VAR_2].irq);

 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
