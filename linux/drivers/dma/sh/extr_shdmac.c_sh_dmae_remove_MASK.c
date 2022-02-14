
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_device {int dummy; } ;
struct TYPE_2__ {struct dma_device dma_dev; } ;
struct sh_dmae_device {TYPE_1__ shdma_dev; int node; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct dma_device*) ;
 int FUNC_1 (int *) ;
 struct sh_dmae_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sh_dmae_device*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct sh_dmae_device *VAR_2 = FUNC_2(VAR_1);
 struct dma_device *VAR_3 = &VAR_2->shdma_dev.dma_dev;

 FUNC_0(VAR_3);

 FUNC_6(&VAR_0);
 FUNC_1(&VAR_2->node);
 FUNC_7(&VAR_0);

 FUNC_3(&VAR_1->dev);

 FUNC_4(VAR_2);
 FUNC_5(&VAR_2->shdma_dev);

 FUNC_8();

 return 0;
}
