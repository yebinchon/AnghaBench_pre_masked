
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct edma_cc {int dummy_slot; int * dma_memcpy; int dma_slave; int ccerrint; int ccint; } ;


 struct edma_cc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,struct edma_cc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct edma_cc*,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct edma_cc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_2->ccint, VAR_2);
 FUNC_1(VAR_1, VAR_2->ccerrint, VAR_2);

 FUNC_3(&VAR_2->dma_slave);

 if (VAR_1->of_node)
  FUNC_5(VAR_1->of_node);
 FUNC_2(&VAR_2->dma_slave);
 if (VAR_2->dma_memcpy)
  FUNC_2(VAR_2->dma_memcpy);
 FUNC_4(VAR_2, VAR_2->dummy_slot);

 return 0;
}
