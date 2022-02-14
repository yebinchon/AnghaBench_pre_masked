
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timb_dma {int membase; int tasklet; int dma; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct timb_dma*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timb_dma*) ;
 struct timb_dma* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct timb_dma *VAR_2 = FUNC_5(VAR_1);
 struct resource *VAR_3 = FUNC_7(VAR_1, VAR_0, 0);
 int VAR_4 = FUNC_6(VAR_1, 0);

 FUNC_1(&VAR_2->dma);
 FUNC_2(VAR_4, VAR_2);
 FUNC_10(&VAR_2->tasklet);
 FUNC_3(VAR_2->membase);
 FUNC_4(VAR_2);
 FUNC_8(VAR_3->start, FUNC_9(VAR_3));

 FUNC_0(&VAR_1->dev, "Removed...\n");
 return 0;
}
