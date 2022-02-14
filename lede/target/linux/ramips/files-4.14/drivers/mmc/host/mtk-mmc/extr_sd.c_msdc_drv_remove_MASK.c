
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int bd_addr; int bd; int gpd_addr; int gpd; } ;
struct msdc_host {int mmc; TYPE_1__ dma; int card_delaywork; } ;
struct mmc_host {int dummy; } ;
struct gpd {int dummy; } ;
struct bd {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int ) ;
 struct msdc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct msdc_host*) ;
 struct mmc_host* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct mmc_host *VAR_3;
 struct msdc_host *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_0(!VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 FUNC_0(!VAR_4);

 FUNC_1("removed !!!");

 FUNC_9(VAR_2, ((void*)0));
 FUNC_6(VAR_4->mmc);
 FUNC_7(VAR_4);

 FUNC_2(&VAR_4->card_delaywork);

 FUNC_3(&VAR_2->dev, VAR_1 * sizeof(struct gpd),
     VAR_4->dma.gpd, VAR_4->dma.gpd_addr);
 FUNC_3(&VAR_2->dev, VAR_0 * sizeof(struct bd),
     VAR_4->dma.bd, VAR_4->dma.bd_addr);

 FUNC_4(VAR_4->mmc);

 return 0;
}
