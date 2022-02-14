
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_dma {int irq; int tasklet; int dma; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 struct sirfsoc_dma* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct sirfsoc_dma*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sirfsoc_dma *VAR_2 = FUNC_0(VAR_1);

 FUNC_4(VAR_0->dev.of_node);
 FUNC_1(&VAR_2->dma);
 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_8(&VAR_2->tasklet);
 FUNC_3(VAR_2->irq);
 FUNC_5(&VAR_0->dev);
 if (!FUNC_6(&VAR_0->dev))
  FUNC_7(&VAR_0->dev);

 return 0;
}
