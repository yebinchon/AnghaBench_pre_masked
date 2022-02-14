
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msgdma_device {int dmadev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msgdma_device*) ;
 struct msgdma_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct msgdma_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->dmadev);
 FUNC_2(VAR_1);

 FUNC_0(&VAR_0->dev, "Altera mSGDMA driver removed\n");

 return 0;
}
