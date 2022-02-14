
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct moxart_dmadev {int dma_slave; int irq; } ;


 int FUNC_0 (TYPE_1__*,int ,struct moxart_dmadev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct moxart_dmadev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct moxart_dmadev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_0->dev, VAR_1->irq, VAR_1);

 FUNC_1(&VAR_1->dma_slave);

 if (VAR_0->dev.of_node)
  FUNC_2(VAR_0->dev.of_node);

 return 0;
}
