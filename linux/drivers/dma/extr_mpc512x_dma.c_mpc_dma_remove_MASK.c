
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct mpc_dma {int tasklet; int irq; int irq2; scalar_t__ is_mpc8308; int dma; } ;


 struct mpc_dma* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct mpc_dma*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct mpc_dma *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->of_node)
  FUNC_4(VAR_1->of_node);
 FUNC_1(&VAR_2->dma);
 if (VAR_2->is_mpc8308) {
  FUNC_2(VAR_2->irq2, VAR_2);
  FUNC_3(VAR_2->irq2);
 }
 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_3(VAR_2->irq);
 FUNC_5(&VAR_2->tasklet);

 return 0;
}
