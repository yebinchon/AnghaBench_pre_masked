
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct nbpf_device {int clk; int dma_dev; int tasklet; int irq; struct nbpf_device* chan; TYPE_1__* config; int eirq; } ;
struct nbpf_channel {int clk; int dma_dev; int tasklet; int irq; struct nbpf_channel* chan; TYPE_1__* config; int eirq; } ;
struct TYPE_3__ {int num_channels; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,struct nbpf_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct nbpf_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct nbpf_device *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_0->dev, VAR_1->eirq, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->config->num_channels; VAR_2++) {
  struct nbpf_channel *VAR_3 = VAR_1->chan + VAR_2;

  FUNC_1(&VAR_0->dev, VAR_3->irq, VAR_3);

  FUNC_5(&VAR_3->tasklet);
 }

 FUNC_3(VAR_0->dev.of_node);
 FUNC_2(&VAR_1->dma_dev);
 FUNC_0(VAR_1->clk);

 return 0;
}
