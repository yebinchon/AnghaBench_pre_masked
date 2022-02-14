
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct jz4780_dma_dev {TYPE_4__* chan; TYPE_2__* soc_data; int irq; } ;
struct TYPE_7__ {int task; } ;
struct TYPE_8__ {TYPE_3__ vchan; } ;
struct TYPE_6__ {int nb_channels; } ;


 int FUNC_0 (int ,struct jz4780_dma_dev*) ;
 int FUNC_1 (int ) ;
 struct jz4780_dma_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct jz4780_dma_dev *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0->dev.of_node);

 FUNC_0(VAR_1->irq, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->soc_data->nb_channels; VAR_2++)
  FUNC_3(&VAR_1->chan[VAR_2].vchan.task);

 return 0;
}
