
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_edma_engine {TYPE_2__* drvdata; int dma_dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int dmamuxs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsl_edma_engine*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,struct fsl_edma_engine*) ;
 int FUNC_4 (struct device_node*) ;
 struct fsl_edma_engine* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 struct fsl_edma_engine *VAR_2 = FUNC_5(VAR_0);

 FUNC_3(VAR_0, VAR_2);
 FUNC_2(&VAR_2->dma_dev);
 FUNC_4(VAR_1);
 FUNC_0(&VAR_2->dma_dev);
 FUNC_1(VAR_2, VAR_2->drvdata->dmamuxs);

 return 0;
}
