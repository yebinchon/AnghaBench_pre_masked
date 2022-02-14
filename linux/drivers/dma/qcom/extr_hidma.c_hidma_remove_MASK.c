
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int dev; } ;
struct hidma_dev {TYPE_1__* lldev; int task; int irq; TYPE_2__ ddev; } ;
struct TYPE_4__ {int msi_support; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct hidma_dev*) ;
 int FUNC_4 (struct hidma_dev*) ;
 int FUNC_5 (struct hidma_dev*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct hidma_dev*) ;
 struct hidma_dev* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_0)
{
 struct hidma_dev *VAR_1 = FUNC_8(VAR_0);

 FUNC_10(VAR_1->ddev.dev);
 FUNC_2(&VAR_1->ddev);
 if (!VAR_1->lldev->msi_support)
  FUNC_1(VAR_1->ddev.dev, VAR_1->irq, VAR_1->lldev);
 else
  FUNC_5(VAR_1);

 FUNC_12(&VAR_1->task);
 FUNC_7(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1->lldev);
 FUNC_4(VAR_1);

 FUNC_0(&VAR_0->dev, "HI-DMA engine removed\n");
 FUNC_11(&VAR_0->dev);
 FUNC_9(&VAR_0->dev);

 return 0;
}
